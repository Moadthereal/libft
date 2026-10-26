*This project has been created as part of the 42 curriculum by majnaou.*

# Description

**libft** is a C library that contains reimplemented standard C library functions and additional utility functions.

The goal of this project is to understand how these functions work and improve programming skills in C, memory management, and linked lists.

The library includes:
- Character checking and conversion functions.
- String manipulation functions.
- Memory manipulation functions.
- Conversion functions.
- Linked list functions.

# Instructions

Clone the repository and compile the library using the Makefile.

```bash
make
```

This generates `libft.a`, a static library containing the compiled functions.

To use the library, include `libft.h` in your C program and compile it with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
./program
```

Available Makefile commands:

- `make`: Compile the library.
- `make clean`: Remove object files.
- `make fclean`: Remove object files and the library.
- `make re`: Recompile the library.

# Library Description

The library contains the following functions:

- **Character functions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **String functions:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strlcpy`, `ft_strlcat`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **Conversion functions:** `ft_atoi`, `ft_itoa`.
- **Output functions:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked list functions:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

# Resources

- [friendly subject man](https://github.com/7r0u7m4n/libftquickman)
- [C library reference — cppreference](https://en.cppreference.com/w/c/header)
- [Linux manual pages](https://man7.org/linux/man-pages/)
-[]()
- [article](https://medium.com/@ahmed.ezzouine/1337-libft-static-library-in-c-0b292982eb81)
- [makefile tutor](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/)
- **linked list**
    - [setep by step tutor](https://www.youtube.com/watch?v=mkZYMKwKkvI)
    - [shurt into to linked list](https://www.youtube.com/playlist?list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)

**AI usage:** AI tools were used to clarify C concepts, understand function behavior, and help design tests for edge cases. The implementation and debugging process were carried out as part of the learning process.
