/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:08:43 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:08:54 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strchr(const char *s, int n)
{
	char	*ret;

	if (!s)
		return (NULL);
	ret = (char *)s;
	while (*ret != (unsigned char)n)
	{
		if (*ret == '\0')
			return (NULL);
		ret++;
	}
	return (ret);
}
