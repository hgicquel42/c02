/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:54:48 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 16:15:04 by hgicquel         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c >= 'a' && c <= 'z')
			str[i] = c - 'a' + 'A';
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "Hello World!";
// 
// 	ft_putstr(ft_strupcase(str1));
// 	return (0);
// }
