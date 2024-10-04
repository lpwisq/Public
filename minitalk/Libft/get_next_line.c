/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpwi <lpwi@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:02:37 by lpwi              #+#    #+#             */
/*   Updated: 2024/06/11 20:51:16 by lpwi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static char	*gnl_free(char **full_text, char **current_read)
{
	free(*current_read);
	free(*full_text);
	return (*full_text = NULL);
}

static int	llen(int char_read, char *full_text)
{
	int	line_length;

	if (char_read == 0 && gnl_strlen(full_text))
		line_length = gnl_strlen(full_text);
	else
		line_length = gnl_strchr(full_text, '\n') - full_text + 1;
	return (line_length);
}

char	*get_next_line(int fd)
{
	static char	*full_text;
	int			char_read;
	char		*current_read;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	char_read = -1;
	current_read = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!current_read)
		return (NULL);
	while (gnl_strchr(full_text, '\n') == NULL && char_read != 0)
	{
		char_read = read(fd, current_read, BUFFER_SIZE);
		if (char_read < 0)
			return (gnl_free(&full_text, &current_read));
		current_read[char_read] = '\0';
		full_text = gnl_strjoin(full_text, current_read);
	}
	free(current_read);
	temp = full_text;
	current_read = gnl_substr(temp, 0, llen(char_read, full_text));
	full_text = gnl_substr(temp, llen(char_read, full_text), gnl_strlen(temp));
	return (free(temp), current_read);
}
// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("test.ber", O_RDONLY);
// 	// printf("fd: %d", fd);
// 	for (char *line = get_next_line(fd); line; line = get_next_line(fd)){
// 		printf("line: %s", line);
// 		free(line);
// 	}
// }
