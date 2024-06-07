/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:07:04 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/16 16:07:09 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		l1;
	int		l2;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
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
	return (join);
}
