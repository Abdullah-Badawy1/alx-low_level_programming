
# Explanation of Command Line Arguments in C (10.2 Arguments to main)

## Overview
When writing programs that operate in a hosted environment (like DOS or UNIX), the command line arguments passed to `main` provide a way to influence the program's behavior, often used to pass file names or other parameters.

## Declaration of main
```c
int main(int argc, char *argv[]);
```
- **Function Return Type**: `main` returns an integer, which serves as the exit status back to the command line interpreter.
  - **0**: Indicates success.
  - **Non-zero**: Indicates failure, where different values can represent different types of errors.
- **Standard Practice**: Using `EXIT_SUCCESS` and `EXIT_FAILURE` from `<stdlib.h>` is recommended for portability and clarity.

## Understanding argc and argv
- **argc (Argument Count)**: This is the number of command line arguments passed to the program.
- **argv (Argument Vector)**: This is an array of strings representing the arguments passed to the program.
  - **Type**: `char *argv[]` or equivalently `char **argv`, as the name of an array decays into a pointer to its first element.

## Array and Pointer Basics
- When passed to a function, the array name becomes a pointer to the array's first element.
- `argv[argc]` is a null pointer, marking the end of the argument list.
- `argv[0]` usually contains the name of the program itself. Other elements contain the actual arguments passed by the user.

## Example: Displaying Command Line Arguments
```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    while(argc--)
        printf("%s\n", *argv++);
    exit(EXIT_SUCCESS);
}
```
- **Behavior**: This program prints each command line argument on a new line. `argv` is incremented to point to the next argument after each print.

## Testing the Program
- **Command**: `$ show_args abcde text hello`
- **Output**:
  ```
  show_args
  abcde
  text
  hello
  ```

This example illustrates how command line arguments are accessed and used in C programs, highlighting the interaction between `argc` and `argv`.

## Figures
- **Figure 10.1**: Shows the relationship between `argc` and `argv` with the strings that `argv` points to.
- **Figure 10.2**: Shows the state of `argv` after it has been incremented to point to the next argument.

These diagrams help in visualizing how `argv` traverses through the array of arguments provided to the program.
