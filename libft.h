/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:58:55 by nranna            #+#    #+#             */
/*   Updated: 2024/02/01 16:25:50 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* *********************************************************************** */
/*                                                                         */
/*  [ft_strlen] will loop through your string until it reaches its end.    */
/*  @return = string lenght.                                               */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
size_t	ft_strlen(const char *s);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_strlcat] will concatenate source string on destiny string          */
/*  delimited by size.                                                     */
/*  @return = lenght of concatenated string.                               */
/*  @param dst = destiny string.                                           */
/*  @param src = source string to concatenate at the end of destiny.       */
/*  @param size = how much you want to concatenate src on dst.             */    
/*                                                                         */    
/* *********************************************************************** */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_strlcpy] will copy source string on destiny string                 */
/*  delimited by size.                                                     */
/*  @return = lenght of copied string.                                     */
/*  @param dst = destiny string, a vessel to recieve src.                  */
/*  @param src = source string to be copied.                               */
/*  @param size = how much you want to copy src on dst.                    */    
/*                                                                         */
/* *********************************************************************** */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isalpha] checks if c is part of the alphabet.                      */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isalpha(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isdigit] checks if c is a number between 0 and 9.                  */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isdigit(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isalnum] checks if c is true in ft_isdigit and ft_isalpha.         */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isalnum(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isascii] checks if c is part of the ASCII table.                   */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_isascii(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_isprint] checks if c is printable.                                 */
/*  @return = 1 if true and 0 is false.                                    */
/*  @param c = int to be checked in the ASCII table.                       */
/*                                                                         */
/* *********************************************************************** */
int		ft_isprint(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_tolower] converts uppercase char to lowercase char using ASCII.    */
/*  @return = c + 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_tolower(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_toupper] converts lowercase char to uppercase char using ASCII.    */
/*  @return = c - 32.                                                      */
/*  @param c = int to be converted.                                        */
/*                                                                         */
/* *********************************************************************** */
int		ft_toupper(int c);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_atoi] converts ASCII represented number to integer number.         */
/*  @return = int number.                                                  */
/*  @param *nptr = pointer to char or array of chars(string).              */
/*                                                                         */
/* *********************************************************************** */
int		ft_atoi(const char *nptr);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_memcmp] will compare two delimited memory regions byte-by-byte.    */
/*  @return = 0 if they are equal, a negative number if *s2 > *s1          */
/*  or a positive number if *s2 < *s1.                                     */
/*  @param *s1 & *s2 = pointer a memory block.                             */
/*  @param n = how many bytes you want to check.                           */
/*                                                                         */
/* *********************************************************************** */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_strncmp] will compare two delimited strings, just like ft_memcmp.  */
/*  @return = 0 if they are equal, a negative number if *s2 > *s1 or a     */
/*  positive number if *s2 < *s1, it's an ASCII comparison of chars.       */
/*  @param *nptr = pointer to char or array of chars(string).              */
/*                                                                         */
/* *********************************************************************** */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_bzero] set a memory block to '\0'.                                 */
/*  @return = nothing :).                                                  */
/*  @param *s = pointer to memory block.                                   */
/*  @param n = how many bytes you want to set to '\0'                      */
/*                                                                         */
/* *********************************************************************** */
void	ft_bzero(void *s, size_t n);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_calloc] allocate a memory block and set all of its bytes to '\0'.  */
/*  @return = void pointer to the start of your memory block.              */
/*  @param nmemb = number of blocks.                                       */
/*  @param size = size of each block in bytes.                             */
/*                                                                         */
/* *********************************************************************** */
void	ft_calloc(size_t nmemb, size_t size);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_memcpy] copy a delimited source memory block to a destiny          */
/*  memory block.                                                          */
/*  @return = c - 32.                                                      */
/*  @param dest = destiny memory block, a vessel to recieve src.           */
/*  @param src = source memory block to be copied.                         */
/*  @param n = how many bytes you want to copy.                            */
/*                                                                         */
/* *********************************************************************** */
void	*ft_memcpy(void *dest, const void *src, int n);

/* *********************************************************************** */
/*                                                                         */
/*  [ft_memset] set a delimited memory block to any ASCII char you want.   */
/*  @return = your new memory block.                                       */
/*  @param s = pointer a memory block.                                     */
/*  @param c = the decimal ASCII value of the char.                        */
/*  @param n = how many bytes you want to set.                             */
/*                                                                         */
/* *********************************************************************** */
void	*ft_memset(void *s, int c, size_t n);


