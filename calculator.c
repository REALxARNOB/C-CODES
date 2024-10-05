#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;
    printf("Choose operator [+, -, *, /]: ");
    scanf("%c", &operator);

    printf("Enter numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
{
        case '+':
            result = num1 + num2;
            printf("Sum = %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Sub = %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Mul = %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Div = %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;
}

    return 0;
}
