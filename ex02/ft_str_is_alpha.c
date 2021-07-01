/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:11:49 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:28:36 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c < 'A' || c > 'z')
			return (0);
		if (c > 'Z' && c < 'a')
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 
// 	str1 = "Hello";
// 	str2 = "H3110";
// 	ft_print('0' + ft_str_is_alpha(str1));
// 	ft_print('0' + ft_str_is_alpha(str2));
// 	return (0);
// }
