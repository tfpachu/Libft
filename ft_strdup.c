/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:36:20 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 15:10:00 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	l;
	char	*a;

	i = 0;
	l = ft_strlen(s);
	a = malloc(l + 1);
	if (a == NULL)
		return (NULL);
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int main() {
//     const char *original = "Hello, strdup!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate != NULL) {
//         printf("Original string: %s\n", original);
//         printf("Duplicate string: %s\n", duplicate);

//         // Remember to free the allocated memory when done
//         free(duplicate);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
