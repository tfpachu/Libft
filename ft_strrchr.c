/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:25:15 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:20:03 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char str[] = "Hello, ,'world!";
//     const char *lastComma = strrchr(str, '\0');

//     if (lastComma != NULL) {
//         printf("Last comma found at position: %ld\n", lastComma - str);
//     } else {
//         printf("Comma not found.\n");
//     }

//     return 0;
// }
