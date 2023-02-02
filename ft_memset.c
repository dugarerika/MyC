/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:17:39 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:29:28 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	p = str;
	i = 0;
	while (i < n)
	{
		p[i] = a;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// char str[50];

// strcpy(str,"This is string.h library function");
// puts(str);

// memset(str,'0',1);
// puts(str);

// ft_memset(str,'0',1);
// puts(str);
// }
