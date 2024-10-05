#include <stdio.h>

int main()
{
    int height,width,perimeter,area;
    
    height=7;
    width=5;
    perimeter=(height+width)*2;
    
    printf("Perimeter = %d inch\n",perimeter);
    
    area=height*width;
    
    printf("Area = %d inch^2",area);
    return 0;
}
