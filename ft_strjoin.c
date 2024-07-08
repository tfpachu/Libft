/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:15:45 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 17:12:52 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*c;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	c = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (c == NULL)
		return (NULL);
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
//     const char *s1 = "Hello, ";
//     const char *s2 = "World!";
//     // Call strjoin to concatenate s1 and s2
//     char *joined = ft_strjoin(s1, s2);
//     // Print the concatenated string
//     printf("Joined string: %s\n", joined);
//     // Free allocated memory
//     free(joined);
//     return 0;
// }
