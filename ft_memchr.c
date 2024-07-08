/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:33:44 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:22:03 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*st;

	i = 0;
	st = (const char *)s;
	while (i < n)
	{
		if ((unsigned char)st[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[] = "Example string";
// 	const char	ch = 'p';
// 	const int	n = ft_strlen(str);
// 	void		*result;

// 	result = ft_memchr(str, ch, n);
// 	if (result != NULL)
// 	{
// 		printf("'%c' found at position %ld.\n", ch, (char *)result - str + 1);
// 	}
// 	else
// 	{
// 		printf("'%c' not found in the first %d characters.\n", ch, n);
// 	}
// 	return (0);
// }
