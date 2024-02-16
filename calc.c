//Brian Omariba ENE212-0162/2021
#include <stdio.h>

// Function prototypes
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main() {
    float a, b;
    char op;
    printf("Enter an expression (e.g., 1 + 1): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("Result: %.2f\n", add(a, b));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(a, b));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(a, b));
            break;
        case '/':
            if(b != 0) {
                printf("Result: %.2f\n", divide(a, b));
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Unknown operation!\n");
    }

    return 0;
}

// Function definitions
float add(float x, float y) { return x + y; }
float subtract(float x, float y) { return x - y; }
float multiply(float x, float y) { return x * y; }
float divide(float x, float y) { return x / y; }
