/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:40:59 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:27:55 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= 48 && c <= 57)
		result = 1;
	else
	result = 0;
	return (result);
}

// int	main(void)
// {
// char *str = "12Q+abc12";
// printf("result%d", isdigit(str[2]));
// printf("result%d", ft_isdigit(str[2]));

// }
