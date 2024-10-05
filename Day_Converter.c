#include <stdio.h>

int main()
{
    int days,years,months,weeks;
    
    printf("Number of days: ");
    scanf("%d",&days);
    
    years=days/365;
    months=(days%365)/30;
    weeks=((days%365)%30)/7;
    days=((days%365)%30)%7;
    
    printf("Years=%d ",years);
    printf("Months=%d ",months);
    printf("Weeks=%d ",weeks);    
    printf("Days=%d ",days);
    return 0;
}
