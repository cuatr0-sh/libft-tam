/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:10:12 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:14:08 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *hstck, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;
	char	*to_find;
	char	*str;

	i = 0;
	str = (char *)hstck;
	to_find = (char *)ndl;
	if (to_find[0] == '\0' || !str)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && (j + i) < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}
