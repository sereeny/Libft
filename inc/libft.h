/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandova <ssandova@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:30:37 by ssandova          #+#    #+#             */
/*   Updated: 2024/11/22 17:08:40 by ssandova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

// ft_is

/**
 * @brief Checks for an alphanumeric character; it is equivalent to (isalpha(c) 
 * || isdigit(c).
 *
 * @param c The character to be checked, provided as an `int`. 
 *
 * @return Returns 1 if `c` is an alphanumeric character. 
 *         Returns 0 if `c` is not alphanumeric.
 */
int		ft_isalnum(int c);

/**
 * @brief Checks  for  an  alphabetic  character; it is equivalent to
 * (isupper(c) || islower(c)).
 *
 * @param c The character to be checked, provided as an `int`. 
 *
 * @return Returns 1 if `c` is an alphabetic character. 
 *         Returns 0 if `c` is not alphabetic.
 */
int		ft_isalpha(int c);

/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into 
 * the ASCII character set.
 *
 * @param c The character to be checked, provided as an `int`. 
 *
 * @return Returns 1 if `c` is an ASCII character. 
 *         Returns 0 if `c` is not an ASCII character.
 */
int		ft_isascii(int c);

/**
 * @brief Checks for a digit (0 through 9).
 *
 * @param c The character to be checked, provided as an `int`. 
 *
 * @return Returns 1 if `c` is a digit. 
 *         Returns 0 if `c` is not a digit.
 */
int		ft_isdigit(int c);

/**
 * @brief Checks for any printable character including space.
 *
 * @param c The character to be checked, provided as an `int`. 
 *
 * @return Returns 1 if `c` is a printable character 
 *         Returns 0 if `c` is not printable.
 */
int		ft_isprint(int c);

// ft_mem
/**
 * @brief Sets a specified memory area to zero.
 *
 * This function fills the first `n` bytes of the memory area pointed 
 * to by `s` with zero bytes (`\0`). It is commonly used to initialize 
 * memory to zero.
 * 
 * @param s A pointer to the start of the memory area to be set to zero.
 * @param n The number of bytes to be set to zero.
 *
 * @return This function does not return a value.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief The ft_calloc()  function  allocates memory for an array of nmemb 
 * elements of size bytes each and returns a pointer to the allocated 
 * memory. The memory is set to zero.
 * 
 * @param count Amount of elements.
 * @param size Size of elements.
 *
 * @return Pointer to allocated memory, or NULL on error.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * The  ft_memchr()  function  scans  the  initial n bytes of the memory area 
 * pointed to by s for the first instance of c.
 *
 * @param s A pointer to the start of the memory area to scanned.
 * @param c Character to look for.
 * @param n Amount of bytes to scan.
 *
 * @return This function does not return a value.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The ft_memcmp() function compares the first n bytes (each 
 * interpreted as unsigned char) of the memory areas s1 and s2.
 *
 * @param s1 A pointer to the start of the first memory area to scan.
 * @param s2 A pointer to the start of the second memory area to scan.
 * @param n Amount of bytes to scan.
 *
 * @return Returns 0 if there is no differences, or the difference 
 * between the first pair of bytes that differ in s1 and s2.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * The memcpy() function copies n bytes from memory area src to memory 
 * area dst. If dst and src overlap, behavior is undefined.
 *
 * @param dst 
 * @param n The number of bytes to be set to zero.
 *
 * @return This function does not return a value.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Sets a specified memory area to zero.
 *
 * This function fills the first `n` bytes of the memory area pointed to by `s`
 * with zero bytes (`\0`). It is commonly used to initialize memory to zero.
 *
 * @param s A pointer to the start of the memory area to be set to zero.
 * @param n The number of bytes to be set to zero.
 *
 * @return This function does not return a value.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief The memset() function writes len bytes of value c (converted to an 
 * unsigned char) to the string b.
 * @param s A pointer to the start of the memory area to be set to zero.
 * @param n The number of bytes to be set to zero.
 *
 * @return This function does not return a value.
 */
void	*ft_memset(void *b, int c, size_t len);



char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);


// bonus structure

/**
 * @brief A structure representing a single node in a linked list.
 * 
 * This structure is used to store a single element in a linked list.
 * It contains a pointer to the content of the node and a pointer to
 * the next node in the list.
 */
typedef struct s_list
{
    /** Pointer to the data or content stored in the node. 
     * The content pointer can point to any type of data, allowing for 
     * a generic linked list where the node can store different types 
     * of information. */
    void *content;

    /** Pointer to the next node in the list.
     * The next pointer points to the next node in the linked list, or 
     * is NULL if this is the last node in the list. */
    struct s_list *next;
} t_list;


/**
 * Allocates (with malloc(3)) and returns a new node. The member 
 * variable ’content’ is initialized with the value of the parameter 
 * ’content’. The variable ’next’ is initialized to NULL.
 *
 * @param content: The content to create the node with.
 *
 * @return The new node.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Adds the node ’new’ at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added.
 *
 * @return This function does not return a value.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of nodes in a list.
 *
 * @param lst The beginning of the list.
 *
 * @return The length of the list.
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of the list.
 * 
 * @param lst The beginning of the list.
 *
 * @return Last node of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Adds the node ’new’ at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the node to be added to the list.
 *
 * @return This function does not return a value.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Takes as a parameter a node and frees the memory of the node’s content
 * using the function ’del’ given as a parameter and free the node. The 
 * memory of ’next’ must not be freed.
 *
 * @param lst The node to free.
 * @param del The address of the function used to delete the content.
 *
 * @return This function does not return a value.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Deletes and frees the given node and every successor of that node, using 
 * the function ’del’ and free(3). Finally, the pointer to the list must be 
 * set to NULL.
 *
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content of the 
 * node.
 *
 * @return This function does not return a value.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Iterates the list ’lst’ and applies the function ’f’ on the content of 
 * each node.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 *
 * @return This function does not return a value.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Iterates the list ’lst’ and applies the function ’f’ on the content 
 * of each node. Creates a new list resulting of the successive 
 * applications of the function ’f’. The ’del’ function is used to 
 * delete the content of a node if needed.
 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of a 
 * node if needed.
 *
 * @return The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
