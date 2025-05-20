/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:07:05 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:07:23 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	int		*obj;

	obj = malloc(size * count);
	if (obj == NULL)
		return (NULL);
	ft_bzero(obj, count * size);
	return (obj);
}
