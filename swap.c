/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:18 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/26 15:02:09 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_swap(t_stack **stack)
{
	t_stack	*start;
	t_stack	*end;
	int		tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return (-1);
	start = *stack;
	end = start->next;
	tmp = start->data;
	start->data = end->data;
	end->data = tmp;
	return (0);
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}
