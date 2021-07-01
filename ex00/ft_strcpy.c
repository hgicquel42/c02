/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:39:04 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 14:42:26 by hgicquel         ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		dest[i] = c;
		if (c == '\0')
			break ;
		i++;
	}
}

// int	main(void)
// {
// 	char	str[5] = "hello";
// 	char	dest[5] = "world";

// 	ft_strcpy(dest, str);
// 	ft_putstr(dest);
// 	return (0);
// }