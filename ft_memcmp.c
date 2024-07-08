/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:27:50 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:10:27 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*st1;
	const char	*st2;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		i++;
	}
	return (0);
}

// int main() 
// {
//     char str1[] = "Hello";
//     char str2[] = "Hell";

//     int result = ft_memcmp(str1, str2, 4);
//     printf("%d", result);
//     return 0;
// }
