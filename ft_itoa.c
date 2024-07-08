/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:31:14 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 14:23:25 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	size_t			len;
	char			*s;

	len = count(n);
	num = n;
	if (n < 0)
	{
		num = -1 * n;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (num == 0)
		s[--len] = 0 + '0';
	while (num)
	{
		s[--len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

// int main()
// {
// 	int a = -123;
// 	char *s = ft_itoa(a);
// 	printf("%s\n", s);
// }
