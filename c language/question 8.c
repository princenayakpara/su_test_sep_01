#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("if you want to Exit the calculator, type '5'\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result:%f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

return 0;
}
