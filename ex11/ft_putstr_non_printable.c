/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:18:28 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/02 10:56:08 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	if (c < 16)
	{
		ft_putchar('0');
		ft_putchar(hex[c / 1]);
	}
	else
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c > 31)
			ft_putchar(c);
		else
			ft_puthex(c);
		i++;
	}
}

// int	main()
// {
// 	char	*str;
// 
// 	str = "Coucou\ntu vas \x7f \x1b bien ?";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
