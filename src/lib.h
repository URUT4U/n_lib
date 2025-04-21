/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:58:55 by nranna            #+#    #+#             */
/*   Updated: 2025/04/20 14:55:00 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

/* --------- [INCLUDES] --------- */

# include <stdlib.h>
# include <unistd.h>

/* --------- [STRUCTS] --------- */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* --------- [PROTOTYPES] --------- */

/* *********************************************************************** */
/*                                                                         */
/*  [n_strlen] will loop through your string until it reaches its end.     */
/*  @return = string lenght.                                               */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
size_t	n_strlen(const char *s);

/* *********************************************************************** */
/*                                                                         */
/*  [n_strlcat] will concatenate source string on destiny string           */
/*  delimited by size.                                                     */
/*  @return = lenght of concatenated string.                               */
/*  @param dst = destiny string.                                           */
/*  @param src = source string to concatenate at the end of destiny.       */
/*  @param size = how much you want to concatenate src on dst.             */
/*                                                                         */
/* *********************************************************************** */
size_t	n_strlcat(char *dst, const char *src, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [n_strlcpy] will copy source string on destiny string                  */
/*  delimited by size.                                                     */
/*  @return = lenght of copied string.                                     */
/*  @param dst = destiny string, a vessel to recieve src.                  */
/*  @param src = source string to be copied.                               */
/*  @param size = how much you want to copy src on dst.                    */
/*                                                                         */
/* *********************************************************************** */
size_t	n_strlcpy(char *dst, const char *src, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [n_isalpha] checks if c is part of the alphabet.                       */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		n_isalpha(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_isdigit] checks if c is a number between 0 and 9.                   */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		n_isdigit(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_isalnum] checks if c is true in ft_isdigit and ft_isalpha.          */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		n_isalnum(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_isascii] checks if c is part of the ASCII table.                    */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table                        */
/*                                                                         */
/* *********************************************************************** */
int		n_isascii(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_isprint] checks if c is printable.                                  */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		n_isprint(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_tolower] converts uppercase char to lowercase char using ASCII.     */
/*  @return = c + 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		n_tolower(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_toupper] converts lowercase char to uppercase char using ASCII.     */
/*  @return = c - 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		n_toupper(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [n_atoi] converts ASCII represented number to integer number.          */
/*  @return = int number.                                                  */
/*  @param *nptr = pointer to char or array of chars(string).              */
/*                                                                         */
/* *********************************************************************** */
int		n_atoi(const char *nptr);

/* *********************************************************************** */
/*                                                                         */
/*  [n_memcmp] will compare two delimited memory regions byte-by-byte.     */
/*  @return = 0 if they are equal, a negative number if *s2 > *s1          */
/*  or a positive number if *s2 < *s1.                                     */
/*  @param *s1 & *s2 = pointer a memory block.                             */
/*  @param n = how many bytes you want to check.                           */
/*                                                                         */
/* *********************************************************************** */
int		n_memcmp(const void *s1, const void *s2, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [n_strncmp] will compare two delimited strings, just like ft_memcmp.   */
/*  @return = 0 if they are equal, a negative number if *s2 > *s1 or a     */
/*  positive number if *s2 < *s1, it's an ASCII comparison of chars.       */
/*  @param *nptr = pointer to char or array of chars(string).              */
/*                                                                         */
/* *********************************************************************** */
int		n_strncmp(const char *s1, const char *s2, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [n_bzero] set a memory block to '\0'.                                  */
/*  @param *s = pointer to memory block.                                   */
/*  @param n = how many bytes you want to set to '\0'                      */
/*                                                                         */
/* *********************************************************************** */
void	n_bzero(void *s, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [n_calloc] allocate a memory block and set all of its bytes to '\0'.   */
/*  @return = void pointer to the start of your memory block.              */
/*  @param nmemb = number of blocks.                                       */
/*  @param size = size of each block in bytes.                             */
/*                                                                         */
/* *********************************************************************** */
void	*n_calloc(size_t nmemb, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [n_memcpy] copy a delimited source memory block to a destiny           */
/*  memory block.                                                          */
/*  @return = c - 32.                                                      */
/*  @param dest = destiny memory block, a vessel to recieve src.           */
/*  @param src = source memory block to be copied.                         */
/*  @param n = how many bytes you want to copy.                            */
/*                                                                         */
/* *********************************************************************** */
void	*n_memcpy(void *dest, const void *src, int n);

/* *********************************************************************** */
/*                                                                         */
/*  [n_memset] set a delimited memory block to any ASCII char you want.    */
/*  @return = your new memory block.                                       */
/*  @param s = pointer a memory block.                                     */
/*  @param c = the decimal ASCII value of the char.                        */
/*  @param n = how many bytes you want to set.                             */
/*                                                                         */
/* *********************************************************************** */
void	*n_memset(void *s, int c, size_t n);

#endif
