/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:12 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/26 15:02:07 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_rotate(t_stack **stack)
{
	t_stack	*start;
	t_stack	*end;

	if (*stack == NULL || (*stack)->next == NULL)
		return (-1);
	start = *stack;
	end = ft_lstend(start);
	*stack = start->next;
	start->next = NULL;
	end->next = start;
	return (0);
}

void	ft_ra(t_stack **stack_a)
{
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
}
