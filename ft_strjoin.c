/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etavera- <etavera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:50:42 by etavera-          #+#    #+#             */
/*   Updated: 2023/02/02 11:15:33 by etavera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ss;

	if (s1 == NULL || s2 == NULL)
		return (0);
	ss = (char *) malloc (ft_strlen(s1) + ft_strlen(s2)+ 1);
	if (ss == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ss[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ss[i] = s2[j];
		i++;
		j++;
	}
	ss[i] = '\0';
	return (ss);
}

// int	main(void)
// {
// 	char const	*s1 = "01234";
// 	char const	*s2 = "ABCDE";
// 	char	*ret;
// 	ret = ft_strjoin(s1, s2);
// 	printf("%s", ret);
// }
