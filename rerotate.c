/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:09 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/26 15:01:56 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_re_rotate(t_stack **stack)
{
	t_stack	*start;
	t_stack	*end;

	if (*stack == NULL || (*stack)->next == NULL)
		return (-1);
	start = *stack;
	end = ft_lstend(start);
	while (start != NULL)
	{
		if (start->next->next == NULL)
		{
			start->next = NULL;
			break ;
		}
		start = start->next;
	}
	end->next = *stack;
	*stack = end;
	return (0);
}

void	ft_rra(t_stack **stack_a)
{
	ft_re_rotate(stack_a);
	write(1, "rra\n", 4);
}
