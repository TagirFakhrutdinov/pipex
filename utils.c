/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:08:57 by kflorett          #+#    #+#             */
/*   Updated: 2022/01/07 19:31:25 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array[i]);
	free(array);
}

char	*correct_path(char **paths, char *cmd)
{
	int		i;
	char	*mypath;

	i = 0;
	while (paths[i] != NULL)
	{
		mypath = ft_strjoin(paths[i], cmd);
		if (access(mypath, 0) == 0)
			return (mypath);
		free(mypath);
		i++;
	}
	ft_putstr_fd(cmd, 2);
	ft_putendl_fd(": command not found ", 2);
	return (NULL);
}

int	find_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] != NULL)
	{
		if (ft_strncmp("PATH=", envp[i], 5) == 0)
			break ;
		i++;
	}
	return (i);
}

char	**path_parsing(char **envp)
{
	int		i;
	char	*temp;
	char	*path;
	char	**paths;

	i = find_path(envp);
	path = ft_substr(envp[i], 5, ft_strlen(envp[i]) - 5);
	paths = ft_split(path, ':');
	free(path);
	i = 0;
	while (paths[i] != NULL)
	{
		temp = ft_strjoin(paths[i], "/");
		free(paths[i]);
		paths[i] = ft_strdup(temp);
		free(temp);
		i++;
	}
	return (paths);
}
