/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:08:33 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:08:34 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;

	i = -1;
	if (!s || !fd)
		return ;
	len = ft_strlen(s);
	while (++i < len)
		ft_putchar_fd(s[i], fd);
}
