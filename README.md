# Arithmetic Expression Calculator

This project provides a simple implementation of an arithmetic expression calculator in C++. The program allows the user to input a series of numbers and operators, processes the input based on operator precedence, and outputs the final result. The supported operations are division (`/`), multiplication (`*`), addition (`+`), and subtraction (`-`).

## Features
- Handles multiple arithmetic operations in one input.
- Follows operator precedence (division and multiplication before addition and subtraction).
- Detects and handles division by zero.
- Provides the final calculated result.

## How It Works
1. The program takes user input of numbers and operators in sequence.
2. Input ends when the operator `=` is entered.
3. The program processes the operations in the following order:
    - Division (`/`)
    - Multiplication (`*`)
    - Addition (`+`)
    - Subtraction (`-`)
4. The final result is displayed on the console.

## Input Format
The input should consist of alternating numbers and operators, ending with `=`. For example:
```
3.5 + 2 * 4 / 2 - 1 =
```

## Example Output
For the input above, the output will be:
```
Final Result: 8.5
```

## Error Handling
- The program checks for division by zero and outputs an error message if encountered. For example:
```
Error: Division by zero at index 2
```

## Usage
### Compilation
Compile the program using a C++ compiler. For example, with `g++`:
```
g++ -o calculator calculator.cpp
```

### Execution
Run the compiled program:
```
./calculator
```

### Example Session
```
Enter numbers and operators (end with '=' for the operator):
3.5 + 2 * 4 / 2 - 1 =
Final Result: 8.5
```

## Code Explanation
The program uses two arrays to store numbers and operators separately. It iteratively processes the operations based on precedence and updates the arrays accordingly by shifting elements after processing each operation.

## Limitations
- The input size is limited to 100 numbers and 100 operators.
- No support for parentheses or other advanced mathematical functions.

## Contributing
Feel free to fork the repository and submit pull requests for any enhancements or bug fixes.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.

