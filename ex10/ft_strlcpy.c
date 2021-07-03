/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:46:36 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/02 10:19:04 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	char	c;
// 	int		i;

// 	i = 0;
// 	while (1)
// 	{
// 		c = str[i];
// 		if (c == '\0')
// 			break ;
// 		ft_print(c);
// 		i++;
// 	}
// }

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < size - 1)
	{
		c = str[i];
		dest[i] = c;
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	dest[] = "world";

// 	ft_strlcpy(dest, str, 6);
// 	ft_putstr(dest);
// 	return (0);
// }
