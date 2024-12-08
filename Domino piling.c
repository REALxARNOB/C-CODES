#include <stdio.h>
 
int main()
{
    int M,N,board;
    scanf("%d%d",&M,&N);
    if(1<=M<=N<=16)
    {
        board=(M*N)/2;
        printf("%d",board);
    }
    else
    {
        printf("Wrong!");
    }
}
