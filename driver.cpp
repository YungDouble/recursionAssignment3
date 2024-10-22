#include <iostream>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;    // Base Case
    } else {
        return n * factorial(n - 1);    // Recursive case, definition of factorial
    }
}

// Function to print elements of an array in reverse order using recursion
void printReverse(int arr[], int size) {
    if (size == 0) {
        return;    // Base case
    } else {
        std::cout << arr[size - 1] << " ";    // Print last element
        printReverse(arr, size - 1);          // Recursive call
    }
}

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    
    if (n == 0) {
        return 0;    // Base case
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n -1) + fibonacci(n - 2);    // Recursive step
    }
}

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size) {
    
    if (size == 0) {
        return 0;    // This is the base case, there are no elements to sum
    } else {
        return arr[size -1] + arraySum(arr, size - 1);
    }
}

// Function to calculate the power of a number using recursion
int power(int base, int exponent) {
    
    if (exponent == 0) {
        return 1;    // Base case is always one by law of exponents

    } else {
        return base * power(base, exponent - 1);
    }
}

// Function to reverse a string using recursion
void reverseString(std::string& str, int start, int end) {
    
    if (start >= end) {
        return;    // No more characters to swap
    } else {
        // Manually swap characters
        char temp = str[start];    // Save the star character in a temp var
        str[start] = str[end];     // Set the start char equal to the end char
        str[end] = temp;           //  Set the end char to the temp var

        reverString(str, start + 1, end - 1);
    }
}

int main() {
    // Get user input for the number
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    // Check if the input is non-negative
    if (num < 0) {
        std::cerr << "Error: Please enter a non-negative integer." << std::endl;
        return 1;
    }

    // Calculate and display the factorial of the input number
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    // Array for demonstrating recursion with arrays
    int arr[] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Display the elements of the array in reverse order using recursion
    std::cout << "Array elements in reverse order: ";
    printReverse(arr, arrSize);
    std::cout << std::endl;

    // Calculate and display the nth Fibonacci number using recursion
    int fibNum = 7; // Change this value for different Fibonacci numbers
    std::cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << std::endl;

    // Find the sum of elements in the array using recursion
    std::cout << "Sum of array elements: " << arraySum(arr, arrSize) << std::endl;

    // Calculate and display the power of a number using recursion
    int base = 2;
    int exponent = 3;
    std::cout << base << " to the power of " << exponent << " is: " << power(base, exponent) << std::endl;

    // Reverse a string using recursion
    std::string inputStr = "Recursion";
    std::cout << "Original string: " << inputStr << std::endl;
    reverseString(inputStr, 0, inputStr.length() - 1);
    std::cout << "Reversed string: " << inputStr << std::endl;

    return 0;
}
