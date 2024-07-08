/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:46:34 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:28:06 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	if (!n)
		return ((char *)h);
	while (h[i] && i < l)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < l && n[j])
			j++;
		if (n[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *haystack = "Hello, world! This is a test.";
//     const char *needle = "world";
//     size_t haystacklen = strlen(haystack);
//     char *result;

//     result = ft_strnstr(haystack, needle, haystacklen);
//     if (result != NULL) {
//         printf("Substring '%s' found at position 
// %ld in '%s'.\n", needle, result - haystack, haystack);
//     } else {
//         printf("Substring '%s' not found within the 
// first %zu characters of '%s'.\n", needle, haystacklen, haystack);
//     }

//     return 0;
// }
