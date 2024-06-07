/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:10:45 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/20 14:10:50 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*novo;

	novo = (t_list *) malloc (sizeof(t_list));
	if (!novo)
		return (NULL);
	novo->content = content;
	novo->next = NULL;
	return (novo);
}
