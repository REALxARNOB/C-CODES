#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    char operator;
    
    printf("List of operators:\n");
    printf("1.Power=p\n2.Square root=sqrt\n");
    printf("Enter operator : ");
    scanf("%c",&operator);
    printf("Enter numbers: ");
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    
    switch(operator)
    {
        case 'P':
        double power = pow(a,b);
        printf("Power=%lf",power);
        break;
        case 's':
        double squareroot = sqrt(a);
        printf("Square root=%lf",squareroot);
        break;
    }
}
