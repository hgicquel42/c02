/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:06:52 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:11:19 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }
// 
// void	ft_putstr(char *str)
// {
// 	char	c;
// 	int		i;
// 
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

void	ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < n)
	{
		c = str[i];
		dest[i] = c;
		i++;
	}
	dest[i] = '\0';
}

// int	main(void)
// {
// 	char	str[5] = "hello";
// 	char	dest[5] = "world";
// 
// 	ft_strncpy(dest, str, 4);
// 	ft_putstr(dest);
// 	return (0);
// }
