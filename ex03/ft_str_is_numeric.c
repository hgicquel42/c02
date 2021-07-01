/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:31:14 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:33:31 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// 
// void	ft_print(char c)
// {
// 	write(1, &c, 1);
// }

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (c < '0' || c > '9')
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
// 	str1 = "Hel1o";
// 	str2 = "43110";
// 	ft_print('0' + ft_str_is_numeric(str1));
// 	ft_print('0' + ft_str_is_numeric(str2));
// 	return (0);
// }
