#include <stdio.h>

int main() {
    int number, i;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Multiplication Table\n");
    for(i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
