/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:09:30 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:16:43 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}

// int main() {
//     const char str[] = "Hello, World!";
//     const char character = 'l';
//     char *result = ft_strchr(str, character);

//     if (result != NULL) {
//         printf("First occurrence of '%c' in '%s' is at 
// position %ld\n", character, str, result - str);
//     } else {
//         printf("'%c' not found in '%s'\n", character, str);
//     }
//     return 0;
// }
