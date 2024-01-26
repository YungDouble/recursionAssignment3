#include <iostream>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

// Function to print elements of an array in reverse order using recursion
void printReverse(int arr[], int size) {
    // Base case: if the array is empty, return
    if (size == 0) {
        return;
    } else {
        // Print the last element
        std::cout << arr[size - 1] << " ";

        // Recursive case: print the remaining elements in reverse order
        printReverse(arr, size - 1);
    }
}

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to find the sum of elements in an array using recursion
int arraySum(int arr[], int size) {
    // Base case: if the array is empty, return 0
    if (size == 0) {
        return 0;
    } else {
        // Recursive case: sum = current element + sum of remaining elements
        return arr[size - 1] + arraySum(arr, size - 1);
    }
}

// Function to calculate the power of a number using recursion
int power(int base, int exponent) {
    // Base case: any number to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive case: base^exponent = base * base^(exponent-1)
        return base * power(base, exponent - 1);
    }
}

// Function to reverse a string using recursion
void reverseString(std::string& str, int start, int end) {
    // Base case: if the start index crosses the end index, return
    if (start >= end) {
        return;
    } else {
        // Swap characters at start and end indices
        std::swap(str[start], str[end]);

        // Recursive case: reverse the substring between start and end indices
        reverseString(str, start + 1, end - 1);
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
