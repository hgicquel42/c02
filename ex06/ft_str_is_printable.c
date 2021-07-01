/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:47:07 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:52:18 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c < ' ' || c > '~')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "Hello World!";
// 	char	str2[] = {1, 31, 127};
// 
// 	ft_print('0' + ft_str_is_printable(str1));
// 	ft_print('0' + ft_str_is_printable(str2));
// 	return (0);
// }
