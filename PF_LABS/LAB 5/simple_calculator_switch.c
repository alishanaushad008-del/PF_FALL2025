#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;

    printf("\n\t\t\tSimple Calculator\n\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c to handle newline input

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}