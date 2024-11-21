/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:04 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/25 14:18:06 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_stack **stack_to, t_stack **stack_from)
{
	t_stack	*start;
	t_stack	*end;

	if (*stack_from == NULL)
		return (-1);
	end = *stack_to;
	start = *stack_from;
	*stack_from = (*stack_from)->next;
	if (stack_to == NULL)
	{
		end = start;
		end->next = NULL;
		*stack_to = end;
	}
	else
	{
		start->next = end;
		*stack_to = start;
	}
	return (0);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pb\n", 3);
}
