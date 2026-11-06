*This project has been created as part of  the 42 curriculum by majnaou.*
# libft
## Description
Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate several standard C library functons from scratch in order to understand how they work internally.

The library contains functions for character checking , string manipulation, memory ;amgement , type conversion, and linked list operations.

By implementing these functions, this project probides a deeper understanding of pointers, memory allocation, data structures, and low-level programming in C.

## Instructions

### Compilation
To compile the library, clone the repository and navigate to its directory:
```bash
git clone <git@vogsphere-v2.1337.ma:vogsphere/intra-uuid-9b502e40-4323-4bad-b3ae-3f6957607d30-7781811-majnaou>
cd libft
```
Run the fllowing command :

```
make
```
The make file provides the following rules :

- `make` : Compiles the library and creates `libft.a`
- `make all` builds the library.
- `make clean` Removes object files.
- `make fclean` Removes object files and the library.
- `make re` Removes existing files and recompiles the library.

### Usage

 To use the library in your C project, include the header file:
 ```c
 #include "libft.h"
 ```
 Compile your program by linking it with the library:
 ```bash
 cc -Wall -Wextra -Werror main.c libft.a -o program
 ```

 then execute it :
 ```bash 
 ./program
 ```
## library Description
The library is divided into several categries.

## Functions

#### Character Checks
`ft_isalpha` · `ft_isdigit` · `ft_isalnum` · `ft_isascii` · `ft_isprint`

#### Character Conversion
`ft_toupper` · `ft_tolower`

#### String
`ft_strlen` · `ft_strchr` · `ft_strrchr` · `ft_strncmp` · `ft_strnstr` · `ft_strlcpy` · `ft_strlcat` · `ft_strdup`

#### Memory
`ft_memset` · `ft_bzero` · `ft_memcpy` · `ft_memmove` · `ft_memchr` · `ft_memcmp` · `ft_calloc`

#### Conversion
`ft_atoi` · `ft_itoa`

#### Additional String Functions
`ft_substr` · `ft_strjoin` · `ft_strtrim` · `ft_split` · `ft_strmapi` · `ft_striteri`

#### File Descriptors
`ft_putchar_fd` · `ft_putstr_fd` · `ft_putendl_fd` · `ft_putnbr_fd`

#### Linked Lists
`ft_lstnew` · `ft_lstadd_front` · `ft_lstsize` · `ft_lstlast` · `ft_lstadd_back` · `ft_lstdelone` · `ft_lstclear` · `ft_lstiter` · `ft_lstmap`
 ## Resources
 - [short intro to linked lists](https://www.youtube.com/playlist?list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)
- [cpp reference](https://cppreference.com/)
- [The C Programming Language – Brian W. Kernighan and Dennis M. Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)

### AI Usage

AI tools were used as learning and support resources throughout this project.

They were used for:

- Understanding C language concepts, pointers, memory management, and linked lists.
- Clarifying the behavior of standard C library functions.
- Reviewing concepts related to the Makefile and static libraries.

The implementation of the library was carried out as part of the learning process, with AI serving as an explanatory and educational tool rather than a replacement for understanding the code.
