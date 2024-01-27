#include<stdio.h>
#include<math.h>


void add_function();
void subtract_function();
void multiply_function();
void divide_function();

int main() {
    char Command;

    printf("Hello! Welcome to the calculator. Type 'a' for addition, 'b' for subtraction, 'c' for multiplication, 'd' for division.\n");
    scanf("%c", &Command);

    switch (Command) {
        case 'a':
            add_function();
            break;
        case 'b':
            subtract_function();
            break;
        case 'c':
            multiply_function();
            break;
        case 'd':
            divide_function();
            break;
        default:
            printf("Invalid command\n");
    }

    return 0;
}

void add_function() {
    int e, f, sum;

    printf("Enter two numbers to add(Formula: e+f):\n");
    scanf("%d %d", &e, &f);

    sum = e + f;
    printf("The sum of two numbers %d and %d is %d\n", e, f, sum);
}

void subtract_function() {
    int e, f, difference;

    printf("Enter two numbers for subtraction(Formula:e-f):\n");
    scanf("%d %d", &e, &f);

    difference = e - f;
    printf("The difference of two numbers %d and %d is %d\n", e, f, difference);
}

void multiply_function() {
    int e, f, product;

    printf("Enter two numbers for multiplication(Formula: e x f):\n");
    scanf("%d %d", &e, &f);

    product = e * f;
    printf("The product of two numbers %d and %d is %d\n", e, f, product);
}

void divide_function() {
    int e, f;
    float quotient;

    printf("Enter two numbers for division(formula:e/f):\n");
    scanf("%d %d", &e, &f);

    // Check for division by zero
    if (f != 0) {
        quotient = (float)e / f;
        printf("The quotient of two numbers %d and %d is %.2f\n", e, f, quotient);
    } else {
        printf("Error: Division by zero is undefined\n");
    }
}
