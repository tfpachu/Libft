/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:09:50 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 15:41:10 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	dest[20];
// 	char	src2[] = "Hello, world!";
// 	char	dest2[20];

// 	memcpy(dest, src, strlen(src) - 1);
// 	printf("Copied string: %s\n", dest);
// 	ft_memcpy(dest2, src2, strlen(src) - 1);
// 	printf("Copied string: %s\n", dest2);
// 	return (0);
// }
