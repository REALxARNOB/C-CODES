#include <stdio.h>

int main()
{
    int N,fac=1;
    printf("Enter a number: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        fac*=i;
    }
    printf("The factorial of %d is: %d\n",N,fac);
    return 0;
}
