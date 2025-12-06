#include<stdio.h>
int main()
{
    int year,modulus,days,leapyr,remainingyr,basicyr=1800;
    printf("Enter the number of year greater than 1800=");
    scanf("%d",&year);
    year=year-1-basicyr;
    leapyr=year/4;
    remainingyr=year-leapyr;
    days=leapyr*366+remainingyr*365+1;
    days=days%7;
    if(days==0)
        printf("Monday");
        else if(days==1)
                 printf("Tuesday");
        else if(days==2)
                 printf("Tuesday");
        else if(days==3)
                printf("Tuesday");
        else if(days==4)
                printf("Tuesday");
         else if(days==5)
                printf("Tuesday");
        else if(days==6)
        printf("Tuesday");
        else
            printf("Wrong entry of number of years");
    return 0;
}
