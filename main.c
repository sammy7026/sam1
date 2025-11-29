#include <stdio.h>

int biggest2(int a, int b);        // Function prototype
long long factorial(int n);        // Function prototype

int main() {
    int choice;
    int a, b, n;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Find biggest of two numbers\n");
        printf("2. Find factorial of a number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Biggest = %d\n", biggest2(a, b));
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &n);
            printf("Factorial = %lld\n", factorial(n));
            break;

        case 3:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

