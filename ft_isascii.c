/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:31:19 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:27:51 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	while (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int num1 = 0;
// 	char c = 0x80;
// 	printf("result %d", isascii(num1));
// 	printf("result %d", isascii(c));
// 	printf("result %d", ft_isascii(num1));
// 	printf("result %d", ft_isascii(c));
// 	printf("result %d", num1);
// 	printf("result %d", c);
// }
