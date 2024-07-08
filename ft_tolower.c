/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:01:38 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 16:44:39 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// int	main(void)
// {
// 	char l_letter = 'A';
// 	char u_letter = tolower(l_letter);
// 	char l_letter2 = 'U';
// 	char u_letter2 = ft_tolower(l_letter2);

// 	printf("Uppercase equivalent of %c is %c\n", l_letter, u_letter);
// 	printf("Uppercase equivalent of %c is %c\n", l_letter2, u_letter2);
// 	return (0);
// }
