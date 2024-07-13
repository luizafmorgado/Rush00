/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flavport <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:52:54 by flavport          #+#    #+#             */
/*   Updated: 2024/07/13 17:27:56 by flavport         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int x)
{
       	int contador;

       	ft_putchar('/');
	if (x == 1)
		ft_putchar('\n');
	else if (x == 2)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else if (x > 2)
	{
        contador = 2;
		while (contador < x)
		{
			ft_putchar('*');
			contador++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	middle(int x, int y)
{
	int contadory,  contadorx;

	if (y == 2)
		ft_putchar('/');
	else if (y > 2)
	{
		contadory = 2;
		while (contadory < y)
		{
			ft_putchar('*');
			if (x >= 2)
			{
				contadorx = 2;
				while (contadorx < x)
				{
					ft_putchar(' ');
					contadorx++;
				}
				ft_putchar('*');
				ft_putchar('\n');
			}
			else if (x == 1)
				ft_putchar('\n');
			contadory++;
		}
		ft_putchar('\\');
	}
}

void	bottom(int x, int y)
{
	int contador;

	if (x == 2 && y > 1)
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
	else if (x > 2 && y > 1)
	{
		contador = 2;
		while (contador < x)
		{
			ft_putchar('*');
			contador++;
		}
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top(x);
		middle(x, y);
		bottom(x, y);
	}
}
