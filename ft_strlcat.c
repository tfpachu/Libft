/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:40:15 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:06:12 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL && s == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (dst[i] && i < s)
		i++;
	while (src[j] && (i + j + 1) < s)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < s)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
