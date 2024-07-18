/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 08:00:13 by nmatondo          #+#    #+#             */
/*   Updated: 2024/07/18 12:47:24 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_find_char_in_point(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen_gnl(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*join;
	int		l1;
	int		l2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen_gnl(s1);
	l2 = ft_strlen_gnl(s2);
	join = malloc((l1 + l2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (i < (l1 + l2))
	{
		if (i < l1)
			join[i] = s1[i];
		else
			join[i] = s2[i - l1];
		i++;
	}
	join[i] = '\0';
	free(s1);
	return (join);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*line_str;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	line_str = (char *)malloc(sizeof(char) * (i + 2));
	if (!line_str)
		return (NULL);
	i = 0;
	while ((str[i] != '\n') && (str[i] != '\0'))
	{
		line_str[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line_str[i] = str[i];
		i++;
	}
	line_str[i] = '\0';
	return (line_str);
}

char	*ft_get_new_str(char *str)
{
	int		i;
	int		ix;
	char	*new_str;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	new_str = (char *)malloc(sizeof(char) * ((ft_strlen_gnl(str) - i) + 1));
	if (!new_str)
		return (NULL);
	i++;
	ix = 0;
	while (str[i])
		new_str[ix++] = str[i++];
	new_str[ix] = '\0';
	free(str);
	return (new_str);
}
