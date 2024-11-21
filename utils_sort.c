/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:12:14 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/25 14:12:51 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*max_node(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*max;

	if (!stack)
		return (NULL);
	max = *stack;
	tmp = max->next;
	while (tmp != NULL)
	{
		if (tmp->data > max->data)
		{
			max = tmp;
			tmp = max->next;
		}
		else
			tmp = tmp->next;
	}
	return (max);
}

t_stack	*min_node(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;

	if (!stack)
		return (NULL);
	min = *stack;
	tmp = min->next;
	while (tmp != NULL)
	{
		if (tmp->data < min->data)
		{
			min = tmp;
			tmp = min->next;
		}
		else
			tmp = tmp->next;
	}
	return (min);
}
