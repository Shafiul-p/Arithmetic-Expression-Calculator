#include <iostream>
using namespace std;

int main() {
    float numbers[100];   // Array to store numbers
    char operators[100];  // Array to store operators
    int numCount = 0;     // Number of elements in numbers array
    int opCount = 0;      // Number of elements in operators array

    // Input numbers and operators
    cout << "Enter numbers and operators (end with '=' for the operator):" << endl;
    do {
        cin >> numbers[numCount++];
        cin >> operators[opCount++];
    } while (operators[opCount - 1] != '=');

    // Remove the '=' from the operators array
    opCount--;

    // Process division
    bool foundOperation = true;
    while (foundOperation) {
        foundOperation = false;
        for (int i = 0; i < opCount; i++) {  
            if (operators[i] == '/') {
                foundOperation = true;
                if (numbers[i + 1] != 0) {
                    numbers[i] = numbers[i] / numbers[i + 1];
                } else {
                    cout << "Error: Division by zero at index " << i << endl;
                    return 1;
                }

                // Shift numbers and operators to remove the used number and operator
                for (int j = i + 1; j < numCount - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                for (int j = i; j < opCount - 1; j++) {
                    operators[j] = operators[j + 1];
                }

                // Decrease counts since we've removed an operator and a number
                numCount--;
                opCount--;

                // Restart the loop to recheck from the beginning
                break;
            }
        }
    }

    // Process multiplication
    foundOperation = true;
    while (foundOperation) {
        foundOperation = false;
        for (int i = 0; i < opCount; i++) {
            if (operators[i] == '*') {
                foundOperation = true;
                numbers[i] = numbers[i] * numbers[i + 1];

                // Shift numbers and operators to remove the used number and operator
                for (int j = i + 1; j < numCount - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                for (int j = i; j < opCount - 1; j++) {
                    operators[j] = operators[j + 1];
                }

                // Decrease counts since we've removed an operator and a number
                numCount--;
                opCount--;

                // Restart the loop to recheck from the beginning
                break;
            }
        }
    }

    // Process addition
    foundOperation = true;
    while (foundOperation) {
        foundOperation = false;
        for (int i = 0; i < opCount; i++) {
            if (operators[i] == '+') {
                foundOperation = true;
                numbers[i] = numbers[i] + numbers[i + 1];

                // Shift numbers and operators to remove the used number and operator
                for (int j = i + 1; j < numCount - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                for (int j = i; j < opCount - 1; j++) {
                    operators[j] = operators[j + 1];
                }

                // Decrease counts since we've removed an operator and a number
                numCount--;
                opCount--;

                // Restart the loop to recheck from the beginning
                break;
            }
        }
    }

    // Process subtraction
    foundOperation = true;
    while (foundOperation) {
        foundOperation = false;
        for (int i = 0; i < opCount; i++) {
            if (operators[i] == '-') {
                foundOperation = true;
                numbers[i] = numbers[i] - numbers[i + 1];

                // Shift numbers and operators to remove the used number and operator
                for (int j = i + 1; j < numCount - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                for (int j = i; j < opCount - 1; j++) {
                    operators[j] = operators[j + 1];
                }

                // Decrease counts since we've removed an operator and a number
                numCount--;
                opCount--;

                // Restart the loop to recheck from the beginning
                break;
            }
        }
    }

    // Display the final result
    cout << "Final Result: " << numbers[0] << endl;

    return 0;
}
