#include <stdio.h>

int main()
{
    int integer;
    printf("Enter an integer(1-7): ");
    scanf("%d",&integer);
    switch(integer)
    {
        case 1:
        printf("The corresponding day of the week is Saturday.");
        break;
        case 2:
        printf("The corresponding day of the week is Sunday.");
        break;
        case 3:
        printf("The corresponding day of the week is Monday.");
        break;
        case 4:
        printf("The corresponding day of the week is Tuesday.");
        break;
        case 5:
        printf("The corresponding day of the week is Wednesday.");
        break;
        case 6:
        printf("The corresponding day of the week is Thursday.");
        break;
        case 7:
        printf("The corresponding day of the week is Friday.");
        break;
    }
    return 0;
}
