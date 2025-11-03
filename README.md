<h1 align="center">ft_printf 42 Lisboa 🖨️ </h1>

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

## 📋 Sobre o Projeto

Reimplementação da função `printf` da libc, aprendendo sobre argumentos variáveis e conversões de tipos.

**Nota Final:** ../100

---

## 🎯 Conversões Implementadas

### Mandatory (9/9)
Implementação de todas as conversões obrigatórias.

| Conversão | Descrição | Exemplo |
|-----------|-----------|---------|
| `%c` | Imprime um caractere | `ft_printf("%c", 'A')` → A |
| `%s` | Imprime uma string | `ft_printf("%s", "hello")` → hello |
| `%p` | Imprime um ponteiro em hexadecimal | `ft_printf("%p", ptr)` → 0x7fff5fbff... |
| `%d` | Imprime um número decimal (base 10) | `ft_printf("%d", 42)` → 42 |
| `%i` | Imprime um inteiro em base 10 | `ft_printf("%i", -42)` → -42 |
| `%u` | Imprime um unsigned decimal | `ft_printf("%u", 42)` → 42 |
| `%x` | Imprime hexadecimal minúsculas | `ft_printf("%x", 255)` → ff |
| `%X` | Imprime hexadecimal MAIÚSCULAS | `ft_printf("%X", 255)` → FF |
| `%%` | Imprime um sinal de percentagem | `ft_printf("%%")` → % |

---

## 📁 Estrutura do Projeto

```
ft_printf/
├── Makefile                 # Compilação
├── ft_printf.h              # Header principal
├── ft_printf.c              # Função principal
├── ft_printf_utils.c        # Funções auxiliares (putchar, putstr, ptr)
├── ft_printf_utils2.c       # Funções auxiliares (números, hex)
└── libft/                   # Biblioteca libft (dependência)
    ├── libft.a
    └── ...
```

---

## 🛠️ Compilação

```bash
make            # Compila a biblioteca libftprintf.a
make clean      # Remove ficheiros objeto
make fclean     # Remove tudo
make re         # Recompila do zero
```

### Como Usar

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

**Compilar com ft_printf:**
```bash
gcc main.c libftprintf.a -o program
./program
```

---

## 💡 Conceitos Aprendidos

✅ **Variadic Functions** - `va_list`, `va_start`, `va_arg`, `va_end`  
✅ **Format Parsing** - Análise e processamento de strings de formato  
✅ **Type Conversions** - Conversão de tipos para strings  
✅ **Recursion** - Para impressão de números  
✅ **Pointer Semantics** - Passar `va_list` por referência vs valor  
✅ **Return Values** - Contar caracteres impressos

---

## 📚 Recursos Úteis

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h reference](https://en.cppreference.com/w/c/variadic)
- [42 Docs - ft_printf](https://harm-smits.github.io/42docs/projects/ft_printf)

---

**Made by:** dbaltaza  
**Campus:** 42 Lisboa  
**Year:** 2025  
**Grade:** 100/100 ✅
