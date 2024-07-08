/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haiqbal <haiqbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:14:34 by haiqbal           #+#    #+#             */
/*   Updated: 2024/07/08 14:38:37 by haiqbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->content = content;
	l->next = NULL;
	return (l);
}

// int main() 
// {
//     t_list *node = ft_lstnew("Hello, world!");

//     if (node == NULL) {
//         fprintf(stderr, "Error: ft_lstnew failed to allocate memory\n");
//         return 1;
//     }
//     printf("Node content: %s\n", (char *)node->content);
//     free(node);
//     return 0;
// }
