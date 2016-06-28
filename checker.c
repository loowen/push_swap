/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhamlyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 10:46:21 by lhamlyn           #+#    #+#             */
/*   Updated: 2016/06/28 15:38:13 by lhamlyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_s(char *stacka, char *stackb, int i)
{
	char temp;
	if (i == 0 || i == 2)
	{
		temp = stacka[0];
		stacka[0] = stacka[1];
		stack[1] = temp;
	}
	if (i == 1 || i == 2)
	{
		temp = stackb[0];
		stackb[0] = stackb[1];
		stackb[1] = temp;
	}
}

void	ft_p(char *stacka, char *stackb, int i)
{
	int count;

	count = 0;
	if (i == 0)
	{
		while (stackb[count] != '\0')
		{
			count++;
		}
		stackb[count] = stacka[0];
	}
	if (i == 1)
	{
		count = 0;
		while (stacka[count] != '\0')
			count++;
		stacka[count] = stackb[0];
	}
}

void	ft_r(char *stacka, char *stackb, int i)
{

}

void	ft_rr(char *stacka, char *stackb, int i)
{

}

void	op_check(char *check, char *stacka, char *stackb)
{
	if(check == "sa")
		ft_s(stacka, stackb, 0);
	else if(check == "sb")
		ft_s(stacka, stackb, 1);
	else if(check == "ss")
		ft_s(stacka, stackb, 2);
	else if(check == "ra")
		ft_r(stacka, stackb, 0);
	else if(check == "rb")
		ft_r(stacka, stackb, 1);
	else if(check == "rr")
		ft_r(stacka, stackb, 2);
	else if(check == "rra")
		ft_rr(stacka, stackb, 0);
	else if(check == "rrb")
		ft_rr(stacka, stackb, 1);
	else if(check == "rrr")
		ft_rr(stacka, stackb, 2);
	else if(check == "pa")
		ft_p(stacka, stackb, 0);
	else if(check == "pb")
		ft_p(stacka, stackb, 1);
	else
		write(1, "Error", 5);
}

int	main(int argc, char **argv)
{
	char **check;
	char *stacka;
	char *stackb;
	int count;

	check = '\n';
	count = 0;
	while (ft_strcontains(check,"\n") == 1)
	{
		get_next_line(0,check);
		op_check(check[count], nums);
		count++;
	}
}
