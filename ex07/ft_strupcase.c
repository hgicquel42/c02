/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:54:48 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/01 15:59:59 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_charupcase(char *c)
{
	if (c < 'a' || c > 'z')
		return ;
	*c = *c  - 'a' + 'A';
}

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
			str[i] = c  - 'a' + 'A';
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*str1 = "Hello World!";
	char	str2[] = {1, 31, 127};

	ft_print('0' + ft_str_is_printable(str1));
	ft_print('0' + ft_str_is_printable(str2));
	return (0);
}
