/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:48:58 by juguerre          #+#    #+#             */
/*   Updated: 2023/04/27 10:49:07 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*p;
	size_t	i;

	len = ft_strlen(str);
	p = malloc(len + 1);
	i = 0;
	if (p == NULL || str == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
