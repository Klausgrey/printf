# Printf Project

This project is an implementation of the `printf` function in the C programming language. The `printf` function is a powerful and commonly used function that allows formatted output to the standard output stream. This project aims to recreate the functionality of `printf` by providing a custom implementation.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Features

- Supports a variety of format specifiers, allowing for formatted output of different data types.
- Handles basic conversion flags, width, precision, and length modifiers.
- Supports printing to the standard output stream.
- Provides a flexible and extensible architecture for future enhancements.

## Usage

To use this `printf` implementation in your own C projects, follow these steps:

1. Clone the repository or download the source code files.
2. Include the `printf.h` header file in your C source file: `#include "printf.h"`.
3. Compile your source code along with the `printf.c` file: `gcc yourfile.c printf.c -o yourprogram`.
4. Use the `printf` function in your code as you would with the standard `printf`.

```c
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    _printf("The answer is %d.\n", 42);
    return 0;
}
```

## Supported Format Specifiers

The following format specifiers are supported by this `printf` implementation:

- `%d` - Signed decimal integer
- `%u` - Unsigned decimal integer
- `%o` - Unsigned octal integer
- `%x` - Unsigned hexadecimal integer (lowercase)
- `%X` - Unsigned hexadecimal integer (uppercase)
- `%c` - Character
- `%s` - String
- `%f` - Floating-point number
- `%e` - Scientific notation (lowercase)
- `%E` - Scientific notation (uppercase)
- `%g` - Compact representation of `%e` or `%f`
- `%G` - Compact representation of `%E` or `%f`
- `%%` - Literal `%` character

Note: Not all format specifiers support all conversion flags, width, precision, and length modifiers.

## Examples

Here are some examples demonstrating the usage of this `printf` implementation:

```c
#include "main.h"

int main() {
    int number = 42;
    float pi = 3.14159;
    char* message = "Hello, world!";

    _printf("Number: %d\n", number);
    _printf("Pi: %f\n", pi);
    _printf("Message: %s\n", message);

    return 0;
}
```

Output:
```
Number: 42
Pi: 3.141590
Message: Hello, world!
```

## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as per the license terms.
