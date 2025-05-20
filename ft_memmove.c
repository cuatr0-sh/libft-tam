/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:08:14 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:08:15 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*src_cpy;
	char		*dst_cpy;

	src_cpy = (char *)src;
	dst_cpy = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src_cpy < dst_cpy)
	{
		while (++i <= len)
			dst_cpy[len - i] = (char)src_cpy[len - i];
	}
	else
		while (len-- > 0)
			*(dst_cpy++) = *(src_cpy++);
	return (dst);
}
