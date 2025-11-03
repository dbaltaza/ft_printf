<h1 align="center">ft_printf 42 🖨️ </h1>

```c
            /* ************************************************************************** */
            /*                                                                            */
            /*                                                        :::      ::::::::   */
            /*   ft_printf                                          :+:      :+:    :+:   */
            /*                                                    +:+ +:+         +:+     */
            /*   By: dbaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
            /*                                                +#+#+#+#+#+   +#+           */
            /*   Created: 2025/11/02 by dbaltaza                  #+#    #+#             */
            /*   Updated: 2025/11/03 by dbaltaza                 ###   ########.fr       */
            /*                                                                            */
            /* ************************************************************************** */
```

## 📋 About the Project

Reimplementation of the `printf` function from libc, learning about variadic arguments and type conversions.

**Final Grade:** ../100

---

## 🎯 Implemented Conversions

### Mandatory (9/9)
Implementation of all required conversions.

| Conversion | Description | Example |
|-----------|-----------|---------|
| `%c` | Prints a single character | `ft_printf("%c", 'A')` → A |
| `%s` | Prints a string | `ft_printf("%s", "hello")` → hello |
| `%p` | Prints a pointer in hexadecimal | `ft_printf("%p", ptr)` → 0x7fff5fbff... |
| `%d` | Prints a decimal number (base 10) | `ft_printf("%d", 42)` → 42 |
| `%i` | Prints an integer in base 10 | `ft_printf("%i", -42)` → -42 |
| `%u` | Prints an unsigned decimal | `ft_printf("%u", 42)` → 42 |
| `%x` | Prints hexadecimal lowercase | `ft_printf("%x", 255)` → ff |
| `%X` | Prints hexadecimal UPPERCASE | `ft_printf("%X", 255)` → FF |
| `%%` | Prints a percent sign | `ft_printf("%%")` → % |

---

## 📁 Project Structure

```
ft_printf/
├── Makefile                 # Compilation
├── ft_printf.h              # Main header
├── ft_printf.c              # Main function
├── ft_printf_utils.c        # Helper functions (putchar, putstr, ptr)
├── ft_printf_utils2.c       # Helper functions (numbers, hex)
└── libft/                   # Libft library (dependency)
    ├── libft.a
    └── ...
```

---

## 🛠️ Compilation

```bash
make            # Compiles the libftprintf.a library
make clean      # Removes object files
make fclean     # Removes everything
make re         # Recompiles from scratch
```

### How to Use

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

**Compile with ft_printf:**
```bash
gcc main.c libftprintf.a -o program
./program
```

---

## 💡 Concepts Learned

✅ **Variadic Functions** - `va_list`, `va_start`, `va_arg`, `va_end`  
✅ **Format Parsing** - Analyzing and processing format strings  
✅ **Type Conversions** - Converting types to strings  
✅ **Recursion** - For printing numbers  
✅ **Pointer Semantics** - Passing `va_list` by reference vs value  
✅ **Return Values** - Counting printed characters

---

## 📚 Useful Resources

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h reference](https://en.cppreference.com/w/c/variadic)
- [42 Docs - ft_printf](https://harm-smits.github.io/42docs/projects/ft_printf)

---

**Made by:** dbaltaza  
**Campus:** 42 Lisboa  
**Year:** 2025
