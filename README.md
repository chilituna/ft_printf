# ft_printf

A custom implementation of the C standard library's `printf` function, built as part of the 42 curriculum.

[![Score](https://img.shields.io/badge/Score-100%2F100-success?style=flat-square)](https://github.com/chilituna/ft_printf)
[![42 School](https://img.shields.io/badge/Berlin-000000?style=flat-square&logo=42)](https://42berlin.de/)

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Technical Implementation](#technical-implementation)
- [Installation](#installation)
- [Usage](#usage)
- [Function Prototype](#function-prototype)
- [Supported Conversions](#supported-conversions)
- [Project Structure](#project-structure)
- [Skills Developed](#skills-developed)

## 🎯 About

`ft_printf` is a recreation of the standard C library function `printf()`. This project demonstrates deep understanding of variadic functions, format parsing, type handling, and low-level output operations. The implementation handles multiple format specifiers and produces output identical to the original `printf` function.

## ✨ Features

- **Full format specifier support** for common data types
- **Memory-efficient** implementation without external dependencies
- **Robust error handling** for edge cases
- **Modular design** with separated concerns for maintainability
- **100% compliance** with 42 project requirements

## 🔧 Technical Implementation

The project is structured around a core parsing engine that:

1. **Parses format strings** character by character
2. **Identifies conversion specifiers** (%, c, s, d, etc.)
3. **Handles variadic arguments** using `<stdarg.h>`
4. **Dispatches to specialized handlers** for each data type
5. **Returns the total number** of characters printed

Key technical highlights:
- Implementation of variadic functions using `va_list`, `va_start`, `va_arg`, and `va_end`
- Custom number-to-string conversion for decimal, unsigned, and hexadecimal values
- Pointer address formatting with hexadecimal representation
- Character-by-character output using `write()` system call

## 📦 Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/chilituna/ft_printf.git
cd ft_printf/ft_printf
make
```

This will generate `libftprintf.a` which can be linked to your projects.

## 🚀 Usage

Include the header file and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

Compile with:

```bash
gcc main.c -L. -lftprintf -o program
```

## 📝 Function Prototype

```c
int ft_printf(const char *format, ...);
```

**Parameters:**
- `format`: A string containing text and format specifiers
- `...`: Variable number of arguments matching the format specifiers

**Return Value:**
- The total number of characters printed
- Negative value on error

## 🔤 Supported Conversions

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` → A |
| `%s` | String of characters | `ft_printf("%s", "test")` → test |
| `%p` | Pointer address | `ft_printf("%p", ptr)` → 0x7fff5fbff7a0 |
| `%d` | Signed decimal integer | `ft_printf("%d", -42)` → -42 |
| `%i` | Signed decimal integer | `ft_printf("%i", 42)` → 42 |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 42)` → 42 |
| `%x` | Hexadecimal (lowercase) | `ft_printf("%x", 255)` → ff |
| `%X` | Hexadecimal (uppercase) | `ft_printf("%X", 255)` → FF |
| `%%` | Literal percent sign | `ft_printf("%%")` → % |

## 📁 Project Structure

```
ft_printf/
├── ft_printf.c       # Main function and format parsing
├── ft_printf.h       # Header file with function prototypes
├── ft_puthex.c       # Hexadecimal conversion handlers
├── ft_putnumber.c    # Decimal and unsigned integer handlers
├── ft_putpointer.c   # Pointer address formatting
├── ft_puttext.c      # Character and string handlers
└── Makefile          # Build configuration
```

## 💡 Skills Developed

Through this project, I gained practical experience with:

- **Variadic Functions**: Deep understanding of how C handles variable argument lists
- **String Parsing**: Implementing robust format string interpretation
- **Type Conversion**: Converting various data types to string representations
- **Low-Level I/O**: Using system calls directly for output operations
- **Memory Management**: Efficient handling of buffers and pointers
- **Modular Programming**: Designing clean, maintainable code architecture
- **Edge Case Handling**: Dealing with NULL pointers, overflow, and special values



