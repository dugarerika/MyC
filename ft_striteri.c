/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:59:19 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 09:28:48 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char const	*s1 = "";
// 	char const	*s2 = "";
// 	char	*ret;
// 	ret = ft_strtrim(s1, s2);
// 	int r = strcmp(ret, "");
// 	printf("%d", r);
// }
