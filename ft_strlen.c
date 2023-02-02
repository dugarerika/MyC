/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:15:52 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:28:21 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
     The strlen() function computes the length of the string s.  The strnlen()
     function attempts to compute the length of s, but never scans beyond the
     first maxlen bytes of s.
*/

size_t	ft_strlen(const char *str)
{
	size_t	r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	return (r);
}

// int	main(void)
// {
// 	const char	*str = "12 Q+abc12";

// 	printf("result %lu", strlen(str));
// 	printf("result %d", ft_strlen(str));
// }
