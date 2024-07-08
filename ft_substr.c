/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:45:41 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:36:52 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*st;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	if (!s)
		return (0);
	if (start > l)
		len = 0;
	if (len > l - start)
		len = l - start;
	st = malloc(len + 1);
	if (st == NULL)
		return (NULL);
	while ((start < l) && i < len)
	{
		st[i++] = s[start++];
	}
	st[i] = '\0';
	return (st);
}

// int	main(void)
// {
// 	char	*source;
// 	char	*target;

// 	source = "Hello, World!";
// 	target = ft_substr(source, 7, 4);
// 	printf("Substring: %s\n", target);
// 	return (0);
// }
