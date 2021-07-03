/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:19:43 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/02 15:20:16 by hgicquel         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		s;

	i = 0;
	s = 1;
	while (1)
	{
		c = str[i];
		if (c == '\0')
			break ;
		if (s && c >= 'a' && c <= 'z')
			str[i] = c - 'a' + 'A';
		if (!s && c >= 'A' && c <= 'Z')
			str[i] = c - 'A' + 'a';
		s = 0;
		if (c < 'A' || c > 'z')
			s = 1;
		if (c > 'Z' && c < 'a')
			s = 1;
		if (c >= '0' && c <= '9')
			s = 0;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] =
// 		"SALUT, comment tu VAS ? 42mots quarante-deux; cinquante+et+un";

// 	ft_putstr(ft_strcapitalize(str1));
// 	return (0);
// }
