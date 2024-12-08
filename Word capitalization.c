#include <stdio.h>
 
int main()
{
    char cap[1000];
    scanf("%s",cap);
    if (cap[0] >= 'a' && cap[0] <= 'z')
    {
        cap[0] = cap[0] - 32;
    }
    printf("%s\n", cap);
    return 0;
}
 
