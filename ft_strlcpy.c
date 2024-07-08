/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:31 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:30:49 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	i;
	int		l;

	i = 0;
	l = ft_strlen(src);
	if (!s)
		return (l);
	while (src[i] && i < s - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char str[] = "tgsgery";
//   char strDest[50] = "";
//   char strDest2[50] = "";
//   int r = ft_strlcpy(strDest, str, 6);
//   int p = strlcpy(strDest2, str, 6);

//   printf("%s\n", strDest);
//   printf("%d\n", r);
//   printf("%s\n", strDest2);
//   printf("%d", p);
// }
