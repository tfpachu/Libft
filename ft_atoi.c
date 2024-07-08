/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:31:20 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 14:17:38 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				i;
	int					s;
	unsigned long long	n;

	i = 0;
	s = 1;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		if (s == -1 && n >= LLONG_MAX)
			return (0);
		if (n >= LLONG_MAX)
			return (-1);
		i++;
	}
	return (s * n);
}

// int	main(void)
// {
// 	char	str[] = "-12345";
// 	int		num = ft_atoi(str);

// 	printf ("The string \"%s\" converted to integer: %d\n", str, num);
// 	return (0);
// }
