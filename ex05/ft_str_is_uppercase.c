/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:46:51 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:46:53 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c < 'A' || c > 'Z')
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
// 	str1 = "HeLLo";
// 	str2 = "HELLO";
// 	ft_print('0' + ft_str_is_uppercase(str1));
// 	ft_print('0' + ft_str_is_uppercase(str2));
// 	return (0);
// }
