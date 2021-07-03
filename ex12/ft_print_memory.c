/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:57:52 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/02 13:51:29 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(unsigned int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n < 16)
		write(1, &hex[n], 1);
	else
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
}

void	ft_putaddrhex(void *addr)
{
	unsigned long	n;
	unsigned long	t;
	unsigned int	i;

	n = (unsigned long) addr;
	i = 0;
	t = n;
	while (i < 15)
	{
		if (t < 16)
			write(1, "0", 1);
		i++;
		t /= 16;
	}
	ft_puthex(n);
}

void	ft_print_memory_h(unsigned char *l, unsigned int i, unsigned int size)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			c = l[j];
			if (c < 16)
				write(1, "f", 1);
			ft_puthex(c);
		}
		else
			write(1, "  ", 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_memory_c(unsigned char *l, unsigned int i, unsigned int size)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (j < 16 && i + j < size)
	{
		c = l[j];
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*l;

	i = 0;
	while (i < size)
	{
		l = (unsigned char *) addr + i;
		ft_putaddrhex(l);
		write(1, ": ", 2);
		ft_print_memory_h(l, i, size);
		ft_print_memory_c(l, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char	*str = "K";

	ft_print_memory(str, 8);
}
