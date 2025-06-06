/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:12:25 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/27 01:45:12 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 10

int					ft_tolower(int c);

int					ft_toupper(int c);

int					ft_isascii(int c);

int					ft_isalnum(int c);

int					ft_isprint(int c);

int					ft_isdigit(int c);

int					ft_isalpha(int c);

char				*ft_itoa(int n);

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

int					ft_atoi(const char *str);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				*ft_memset(void *b, int c, size_t len);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_calloc(size_t count, size_t size);

void				ft_bzero(void *sr, size_t n);

void				*ft_realloc(void *ptr, size_t size);

char				*ft_strchr(const char *s, int n);

char				*ft_strrchr(const char *s, int n);

char				*ft_strdup(const char *s1);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

size_t				ft_strlcpy(char *dst, const char *src, size_t size);

size_t				ft_strlen(const char *str);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_strcmp(const char *s1, const char *s2);

char				*ft_strnstr(const char *hstck, const char *ndl, size_t len);

char				*ft_strjoin(const char *s1, const char *s2);

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strtrim(char const *s1, char const *set);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				**ft_split(char const *s, char c);

#endif
