/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:50:01 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 14:55:36 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	str[] = "Hello, world!";
// 	// char	*a = 
// 	char	str2[] = "Hello, world!";

// 	memmove(str, str + 7, 6);
// 	printf("Modified string: %s\n", str);
// 	ft_memmove(str2, str2 + 7, 6);
// 	printf("Modified string: %s\n", str2);
// 	return (0);
// }
