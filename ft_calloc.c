/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:50:22 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 14:17:49 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size != 0 && count > SIZE_T_MAX / size)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}

// int	main(void)
// {
// 	int	num_elements = 5;
// 	int	element_size = sizeof(int);
// 	int	*array = (int *)ft_calloc(num_elements, element_size);

// 	if (array == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for	(int i = 0; i < num_elements; ++i)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	free(array);
// 	return (0);
// }
