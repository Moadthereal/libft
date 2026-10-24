*This project has been created as part of the 42 curriculum by majnaou.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to create a personal C library containing useful functions that can be reused in future C projects.

The library recreates several standard C library functions and introduces additional functions for string manipulation, memory management, and linked-list operations.

The project helps develop a better understanding of C programming, pointers, memory allocation, and data structures.

## Library Contents

### 1. Character Checks and Conversions

Functions for checking and converting characters.

- `ft_isalpha` — checks whether a character is alphabetic.
- `ft_isdigit` — checks whether a character is a digit.
- `ft_isalnum` — checks whether a character is alphanumeric.
- `ft_isascii` — checks whether a character belongs to the ASCII character set.
- `ft_isprint` — checks whether a character is printable.
- `ft_toupper` — converts a lowercase letter to uppercase.
- `ft_tolower` — converts an uppercase letter to lowercase.

### 2. String Functions

Functions for measuring, searching, comparing, and manipulating strings.

- `ft_strlen` — calculates the length of a string.
- `ft_strchr` — locates the first occurrence of a character.
- `ft_strrchr` — locates the last occurrence of a character.
- `ft_strlcpy` — copies a string into a destination buffer with a size limit.
- `ft_strlcat` — concatenates strings with a size limit.
- `ft_strncmp` — compares two strings up to a specified number of characters.
- `ft_strnstr` — locates a substring within a limited length.
- `ft_strdup` — duplicates a string.
- `ft_substr` — extracts a substring.
- `ft_strjoin` — concatenates two strings into a new allocation.
- `ft_strtrim` — removes specified characters from the beginning and end of a string.
- `ft_split` — splits a string using a delimiter.
- `ft_itoa` — converts an integer into a string.
- `ft_strmapi` — creates a new string by applying a function to each character.
- `ft_striteri` — applies a function to each character of a string.

### 3. Memory Functions

Functions for manipulating and allocating memory.

- `ft_memset` — fills a memory area with a specified byte.
- `ft_bzero` — sets a memory area to zero.
- `ft_memcpy` — copies bytes between memory areas that do not overlap.
- `ft_memmove` — copies bytes safely when memory areas overlap.
- `ft_memchr` — searches for a byte in a memory area.
- `ft_memcmp` — compares two memory areas.
- `ft_calloc` — allocates zero-initialized memory.

### 4. Conversion and Output Functions

- `ft_atoi` — converts a string into an integer.
- `ft_putchar_fd` — writes a character to a file descriptor.
- `ft_putstr_fd` — writes a string to a file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline.
- `ft_putnbr_fd` — writes an integer to a file descriptor.

### 5. Additional String Functions

- `ft_striteri` and `ft_strmapi` provide callback-based string processing.
- `ft_split`, `ft_substr`, `ft_strjoin`, and `ft_strtrim` provide useful string manipulation operations.

### 6. Linked-List Functions

Linked-list functions are part of this library and are included in the project.

The library uses the `t_list` structure, which contains a pointer to the node's content and a pointer to the next node.

- `ft_lstnew` — creates a new list node.
- `ft_lstadd_front` — adds a node to the beginning of a list.
- `ft_lstsize` — counts the nodes in a list.
- `ft_lstlast` — returns the last node.
- `ft_lstadd_back` — adds a node to the end of a list.
- `ft_lstdelone` — deletes one node using a supplied content-deletion function.
- `ft_lstclear` — deletes a list and its nodes.
- `ft_lstiter` — applies a function to each node's content.
- `ft_lstmap` — creates a new list by applying a function to each node's content.

## Instructions

### Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library using the Makefile:

```bash
make
```

This generates the static library `libft.a`.

### Using the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.c -o test
```

Replace `main.c` with your source file. Make sure `libft.a` and `libft.h` are available in the appropriate locations.

### Makefile Commands

- `make` — compiles the library.
- `make clean` — removes object files.
- `make fclean` — removes object files and `libft.a`.
- `make re` — rebuilds the library.

## Resources

- [the-best-article] (https://medium.com/@ahmed.ezzouine/1337-libft-static-library-in-c-0b292982eb81)
- [learn-C] (https://www.learn-c.org/)
- [linked-list] (https://youtube.com/playlist?list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl&si=-dBJpQsXXoMVQR9b) : best channel overall to learn C
- [CS50-course] (https://www.youtube.com/watch?v=X8h4dq9Hzq8&t=2304s)

### AI Usage

AI tools were used as learning and support resources during the project. They helped clarify C concepts, explain standard library behavior, suggest edge cases for testing, and assist with understanding compilation and Makefiles.

The implementation, debugging, and validation of the functions remain the responsibility of the student. AI-generated suggestions were used as references for learning and testing.

## Author

**majnaou** — 42/1337 student
