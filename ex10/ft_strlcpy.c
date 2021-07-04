/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:46:36 by hgicquel          #+#    #+#             */
/*   Updated: 2021/07/02 10:19:04 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>

unsigned int	ft_strlcpy(char *dest, char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (str[i] && size && i < size - 1)
	{
		dest[i] = str[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	dest1[] = "world";
// 	char	dest2[] = "world";

// 	int n1 = ft_strlcpy(dest1, str, 6);
// 	printf("%s %d\n", dest1, n1);
// 	int n2 = strlcpy(dest2, str, 6);
// 	printf("%s %d\n", dest2, n2);
// 	return (0);
// }
