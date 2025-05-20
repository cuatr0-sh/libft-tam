/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:09:25 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:13:33 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	d = 0;
	while (src[d] != '\0' && dst_size + 1 < size)
	{
		dst[dst_size] = src[d];
		dst_size++;
		d++;
	}
	dst[dst_size] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
