#include<stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int product;

    printf("Enter the first number: ");
    // Takes integer input from the user
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Multiplies the two numbers
    product = firstNumber * secondNumber;

    // Displays the result
    printf("The product of %d and %d is: %d\n", firstNumber, secondNumber, product);

    return 0;
}
