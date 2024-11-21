/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:17:00 by amayuk            #+#    #+#             */
/*   Updated: 2024/06/26 15:01:27 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				ft_pa(t_stack **stack_a, t_stack **stack_b);
void				ft_pb(t_stack **stack_a, t_stack **stack_b);
void				ft_rra(t_stack **stack_a);
void				ft_ra(t_stack **stack_a);
void				ft_sa(t_stack **stack_a);

void				ft_lstadd_back(t_stack **lst, t_stack *new);
int					ft_lstsize(t_stack *lst);
t_stack				*ft_lstend(t_stack *lst);
t_stack				*ft_lstnew(int content);

void				ft_check_av(int ac, char **av);
void				ft_free(char **str);
void				index_stack(t_stack **stack);
int					ft_issort(t_stack **stack);

void				sort_stack(t_stack **stack_a, t_stack **stack_b);
void				radix_sort(t_stack **stack_a, t_stack **stack_b);
t_stack				*max_node(t_stack **stack);
t_stack				*min_node(t_stack **stack);

#endif