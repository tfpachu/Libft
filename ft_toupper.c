/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:30:03 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 15:50:04 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// int	main(void)
// {
// 	char l_letter = 'A';
// 	char u_letter = toupper(l_letter);
// 	char l_letter2 = 'a';
// 	char u_letter2 = ft_toupper(l_letter2);

// 	printf("Uppercase equivalent of %c is %c\n", l_letter, u_letter);
// 	printf("Uppercase equivalent of %c is %c\n", l_letter2, u_letter2);
// 	return (0);
// }
