#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n================================\n");
        printf("    CODEALPHA BASIC CALCULATOR\n");
        printf("================================\n");

        printf("\n1. Addition (+)");
        printf("\n2. Subtraction (-)");
        printf("\n3. Multiplication (*)");
        printf("\n4. Division (/)");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("\nThank you for using Calculator!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("\nInvalid choice! Try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\nError: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult = %.2f\n", result);
                }
                break;
        }

    } while (choice != 5);

    return 0;
}