/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:16:03 by kflorett          #+#    #+#             */
/*   Updated: 2022/01/08 15:23:36 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(int fd, char *cmd, char **envp, int *end)
{
	char	*mypath;
	char	**cmdf;
	char	**paths;

	paths = path_parsing(envp);
	cmdf = ft_split(cmd, ' ');
	mypath = correct_path(paths, cmdf[0]);
	if (mypath == NULL)
	{
		free_array(paths);
		free_array(cmdf);
		exit(EXIT_FAILURE);
	}
	free_array(paths);
	dup2(fd, STDIN_FILENO);
	close(end[0]);
	dup2(end[1], STDOUT_FILENO);
	close(end[1]);
	if (execve(mypath, cmdf, envp) == -1)
	{
		free(mypath);
		free_array(cmdf);
		exit(EXIT_FAILURE);
	}
}

void	parent(int fd, char *cmd, char **envp, int *end)
{
	char	*mypath;
	char	**cmdf;
	char	**paths;

	//waitpid(-1, NULL, 0);
	paths = path_parsing(envp);
	cmdf = ft_split(cmd, ' ');
	mypath = correct_path(paths, cmdf[0]);
	if (mypath == NULL)
	{
		free_array(paths);
		free_array(cmdf);
		exit(EXIT_FAILURE);
	}
	free_array(paths);
	dup2(fd, STDOUT_FILENO);
	close(end[1]);
	dup2(end[0], STDIN_FILENO);
	close(end[0]);
	if (execve(mypath, cmdf, envp) == -1)
	{
		free(mypath);
		free_array(cmdf);
		exit(EXIT_FAILURE);
	}
}

void	ft_pipex(int fd1, int fd2, char **argv, char **envp)
{
	int		end[2];
	pid_t	pid;

	if (pipe(end) == -1)
		return (perror("Pipe"));
	pid = fork();
	if (pid < 0)
		return (perror("Fork"));
	if (pid == 0)
		child(fd1, argv[2], envp, end);
	else
		parent(fd2, argv[3], envp, end);
}

int	main(int argc, char **argv, char **envp)
{
	int	fd1;
	int	fd2;

	if (argc != 5)
	{
		ft_putstr_fd("Wrong number of arguments\n", 2);
		ft_putstr_fd("Correct: ./pipex infile cmd1 cmd2 outfile\n", 2);
		return (0);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		perror(argv[1]);
		return (0);
	}
	fd2 = open(argv[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd2 < 0)
	{
		perror(argv[4]);
		return (0);
	}
	ft_pipex(fd1, fd2, argv, envp);
	return (0);
}
