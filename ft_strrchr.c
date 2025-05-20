/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tronches <tronches@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:10:20 by tronches          #+#    #+#             */
/*   Updated: 2025/05/20 17:13:00 by tronches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = ((void *)0);
	while (*s)
	{
		if (*s == (char)c)
			ptr = ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ptr);
}
