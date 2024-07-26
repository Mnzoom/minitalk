/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:27:03 by mngoie            #+#    #+#             */
/*   Updated: 2023/11/10 16:36:32 by mngoie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct  s_list
{
    void                *content; 
    struct s_list   *next;
}                       t_list;

int ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(int c);
int    ft_isalpha(int c);
int ft_isascii(int c);
int    ft_isdigit(int c);
int    ft_isprint(int c);
void    *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar(char c);
void    ft_putendl(char *s, int fd);
void   ft_putnbr_fd(int nb, int fd);
void    ft_putstr_fd(char *s, int fd);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s1);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t    ft_strlen(const char *str);
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char ));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
char    *ft_strtrim(const char *s1, const char *set);
char    *ft_substr(const char *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

# endif











