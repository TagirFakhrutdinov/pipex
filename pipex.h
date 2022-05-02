/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:15:58 by kflorett          #+#    #+#             */
/*   Updated: 2022/01/07 18:11:19 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>

void	ft_pipex(int fd1, int fd2, char **argv, char **envp);
void	child(int fd, char *cmd, char **envp, int *end);
void	parent(int fd, char *cmd, char **envp, int *end);
char	**path_parsing(char **envp);
char	*correct_path(char **paths, char *cmd);
void	free_array(char **array);
int        find_path(char **envp);

#endif
