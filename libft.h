/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juguerre <juguerre@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:30:55 by juguerre          #+#    #+#             */
/*   Updated: 2023/04/18 20:30:57 by juguerre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

/* Functions from <ctype.h> library */

// Test for ASCII character.
int		ft_isascii(int c);
// Test for Alphanumeric char.
int		ft_isalnum(int c);
// Test for alphabetic char.
int		ft_isalpha(int c);
// Test for decimal-digit char.
int		ft_isdigit(int c);
// Test for printable char.
int		ft_isprint(int c);
// Upper to lower case char conversion.
int		ft_tolower(int c);
// Lower to upper case char conversion.
int		ft_toupper(int c);

/* Functions from <stblib.h> library */

// Convert ASCII string to integer.
int		ft_atoi(const char *nptr);
// Memory allocator.
void	*ft_calloc(size_t nitems, size_t size);

/* Function from <string.h> library */

// Write zeroes to a byte in a string
void	*ft_bzero(void *str, size_t n);
// Locate a byte to a byte in a string.
void	*ft_memset(void *str, int c, size_t n);
// Locate a byte in a string.
void	*ft_memchr(const void *str, int c, size_t n);
// Compare a byte string.
int		ft_memcmp(const void *buffer1, const void *buffer2, size_t count);
// Copy byte string.
void	*ft_memmove(void *dest, const void *src, size_t n);
// Copy memory free. 
void	*ft_memcpy(void *dest, const void *src, size_t n);

/* Function from  <strings.h> library */

// Find length of a string
size_t	ft_strlen(const char *str);
// Locate char in string (first concurrence)
char	*ft_strchr(const char *str, int c);
// Locate char in string (last concurrence)
char	*ft_strrchr(const char *str, int c);
// locate a substring in a string (size-bounded)
char	*ft_strnstr(const char *haystack, const char *needle, size_t slen);
// Save a copy of a string (with malloc)
char	*ft_strdup(const char *str);
// Size-Bounded string copying
size_t	ft_strlcpy(char *dest, char *src, size_t size);
// Sice-Bounded  string concatenation
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
// Sice-Bounded  string cocomparation
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Non Standart Functions */

// Output a char to given file.
void	ft_putchar_fd(char c, int fd);
// output a string to given file
void	ft_putstr_fd(char *str, int fd);
// Output to given file with new-line
void	ft_putendl_fd(char *s, int fd);
// Output integer to given file.
void	ft_putnbr_fd(int nb, int fd);
// Convert integer to ASCII string.
char	*ft_itoa(int n);
// Extract substring from string.
char	*ft_substr(char const *s, unsigned int start, size_t len);
// Trim started and ended string with the specified char.
char	*ft_strtrim(char const *s1, char const *set);
// Concatenate two string  into a new string . (with malloc)
char	*ft_strjoin(char const *s1, char const *s2);
// Split string with specified char as delimiter. (given an array of strings)
char	**ft_split(char const *s, char c);
// Create a new string from modifying string with specified function.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Aplies a Function to each char of a string given.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* PART 2 BONUS */

// Definición de la estructura:

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* List functions */

// Create a new List
t_list	*ft_lstnew(void *content);
// Count elements of a List.
int		ft_lstsize(t_list *lst);
// Find last element of a list.
t_list	*ft_lstlast(t_list *lst);
// Add new element at the end of a list
void	ft_lstadd_back(t_list **lst, t_list *new);
// Add new element at the begining of a list
void	ft_lstadd_front(t_list **lst, t_list *new);
// Delete element from a list.
void	ft_lstdelone(t_list *lst, void (*del)(void*));
// Delete sequence of elements of a list from a starting point.
void	ft_lstclear(t_list **lst, void (*del)(void*));
// Aplay functions to content of all list´s elements.
void	ft_lstiter(t_list *lst, void (*f)(void *));
// Aplay functions to content of all list´selements into a new list.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
