/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:16:08 by edelanno          #+#    #+#             */
/*   Updated: 2025/01/13 14:16:10 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf/ft_printf.h"
#include "push_swap.h"

int	rra(t_var *var, int option)
{
	t_list	*temp;
	t_list	*last;

	if (!var->a || (var->a)->next == NULL)
		return (1);
	temp = ft_lstbeforelast(var->a);
	last = ft_last(var->a);
	last->next = var->a;
	var->a = last;
	temp->next = NULL;
	ft_init_values_lst(var);
	if (option == 1)
		ft_printf("rra\n");
	return (0);
}

int	rrb(t_var *var, int option)
{
	t_list	*temp1;
	t_list	*last1;

	if (!var->b || (var->b)->next == NULL)
		return (1);
	temp1 = ft_lstbeforelast(var->b);
	last1 = ft_last(var->b);
	last1->next = var->b;
	var->b = last1;
	temp1->next = NULL;
	ft_init_values_lst(var);
	if (option == 1)
		ft_printf("rrb\n");
	return (0);
}

int	rrr(t_var *var, int option)
{
	t_list	*temp;
	t_list	*last;
	t_list	*temp1;
	t_list	*last1;

	if (!var->a || (var->a)->next == NULL)
		return (1);
	temp = ft_lstbeforelast(var->a);
	last = ft_last(var->a);
	last->next = var->a;
	var->a = last;
	temp->next = NULL;
	if (!var->b || (var->b)->next == NULL)
		return (1);
	temp1 = ft_lstbeforelast(var->b);
	last1 = ft_last(var->b);
	last1->next = var->b;
	var->b = last1;
	temp1->next = NULL;
	ft_init_values_lst(var);
	if (option == 1)
		ft_printf("rrr\n");
	return (0);
}
