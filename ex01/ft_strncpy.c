/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:06:52 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 17:27:54 by hgicquel         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < n)
	{
		c = str[i];
		if (c == '\0')
			break ;
		dest[i] = c;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[5] = "hello";
// 	char	dest[5] = "world";
// 
// 	ft_putstr(ft_strncpy(dest, str, 6));
// 	return (0);
// }
