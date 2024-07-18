/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:04:14 by nmatondo          #+#    #+#             */
/*   Updated: 2024/07/18 13:08:13 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_initstr(char **str)
{
	free(*str);
	(*str) = (char *)malloc(sizeof(char) * 1);
	str[0]='\0';
}