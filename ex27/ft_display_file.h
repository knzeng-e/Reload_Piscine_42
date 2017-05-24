/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:37:03 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 17:45:34 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H

# define FT_DISPLAY_FILE_H
# define FILE_MISSING_ERROR -1
# define BUFF_SIZE 512
# define MANY_ARGS_ERROR -2
# define READ_OK 1
# define READ_ERROR -3
# define OPEN_ERROR -4
# define CLOSE_ERROR 4242
# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <unistd.h>

int	ft_read_file(char *file_to_read);
#endif
