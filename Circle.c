#include <stdio.h>

int main()
{
    float pi,radius,perimeter,area;
    
    pi=3.1416;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    
    perimeter=2*pi*radius;
    area=pi*radius*radius;
        
    printf("Perimeter = %f inch\n",perimeter);
    printf("Area = %f inch^2",area);

    return 0;
}
