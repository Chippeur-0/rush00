/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjappe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:08:10 by pjappe            #+#    #+#             */
/*   Updated: 2025/09/21 12:48:10 by pjappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calling ft_putchar
void	ft_putchar(char c);

// printing first and last line
void	print_edge_line(int x)
{
	int	j;

	if (x <= 0)
		return ;
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('A');
	j = 0;
	while (j < x - 2)
	{
		ft_putchar('B');
		j++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

// printing middle line(s)
void	print_middle_line(int x)
{
	int	j;

	if (x <= 0)
		return ;
	if (x == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
		return ;
	}
	ft_putchar('B');
	j = 0;
	while (j < x - 2)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('B');
	ft_putchar('\n');
}

//print the full rectangle
void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	if (y == 1)
	{
		print_edge_line(x);
		return ;
	}
	print_edge_line(x);
	i = 0;
	while (i < y - 2)
	{
		print_middle_line(x);
		i++;
	}
	print_edge_line(x);
}
