# 🎲 Mastermind Game

This is a simple implementation of the classic game Mastermind in C. 

## Description

The program generates a random combination of digits and prompts the user to guess it. After each guess, the program provides feedback on how many digits are correctly guessed and well-placed, and how many digits are correctly guessed but not in the right position.

## Installation

To compile the program, ensure you have a C compiler installed on your system. Then follow these steps:

1. Clone or download the repository.
2. Navigate to the directory containing the source files.
3. Compile the program using your preferred C compiler. For example:
    ```bash
    gcc main.c master.c -o mastermind
    ```
4. Run the executable:
    ```bash
    ./mastermind
    ```

## Usage

Once the program is running, follow the on-screen instructions to play the game. You will be prompted to enter a 5-digit number as your guess. After each guess, the program will provide feedback on how many digits you've guessed correctly and whether they are in the correct position.

If you guess the correct combination, you win the game!

## Files

- `main.c`: Contains the main program logic.
- `master.h`: Header file containing function prototypes and struct definitions.
- `master.c`: Source file containing function implementations.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

Special thanks to Evan for creating this project!

---
