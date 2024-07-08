/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:49:14 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 15:30:13 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*set;
// 	char		*trim;

// 	s1 = "abcdoopgoopabc";
// 	set = "abc";

// 	trim = ft_strtrim(s1, set);
// 	printf ("%s", trim);
// 	return (0);
// }
