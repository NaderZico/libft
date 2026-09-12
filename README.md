# Libft

A reimplementation of a subset of the C standard library, built from scratch at 42 Abu Dhabi and packaged as a static library (`libft.a`).

## Contents
- Memory: `memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`, `bzero`
- Strings: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`, `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `strmapi`, `striteri`
- Checks and conversion: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`, `atoi`
- Output to a file descriptor: `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`
- Linked list API: `lstnew`, `lstadd_front`, `lstadd_back`, `lstsize`, `lstlast`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

## Build
```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds from scratch
```

## Use
Include the header and link the library:

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft
```
