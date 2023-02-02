/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:54:03 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:42:56 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int str)
{
	int	j;

	if (str >= 'A' && str <= 'Z')
	{
		j = str + 32;
		str = j;
	}
	return (str);
}

// int	main(void)
// {
// char str = 'A';
// printf("result %c", ft_tolower(str));
// printf("result %c", tolower(str));
// }
