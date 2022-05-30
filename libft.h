/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:17:57 by jdutschk          #+#    #+#             */
/*   Updated: 2022/05/26 19:19:09 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFFER_SIZE 1
//---------------------------------------------------------------------//

//Library used//
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>

//----------------Check-----------------//

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

//-----------------Convert-----------------//

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

//-----------------FD---------------------//

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//-----------------Memory-----------------//

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);

//-----------------String usage-----------------//

int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *litle, size_t len);
char	*ft_strdup(char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strjoin_free(char const *s1, char const *s2);

//-----------------struct_chain_list--------------------//

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//---------------------ft_printf--------------------//

int		ft_verif(char c, va_list arg);
int		ft_printf(const char *format, ...);
int		ft_printf_strlen(char *str);
int		ft_putchar_printf(char *c, int fd);
int		ft_putstr_printf(char *s);
void	ft_putchar(char c, int fd);
void	ft_putstr(char const *s, int fd);
int		ft_putnbr_printf(int n);
int		ft_putnbr_1printf(unsigned int n);
int		ft_putnbr1_printf(unsigned int n);
int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int num, char format);
int		ft_print_hex(unsigned int num, char format);
int		ft_ptrlen(unsigned long long ptr);
void	ft_putptr(unsigned long long ptr);
int		ft_p_ptr(unsigned long long ptr);

//-----------------Get_next_line------------------------//

char	*get_next_line(int fd);

//-----------------Get_next_line------------------------//
#endif
