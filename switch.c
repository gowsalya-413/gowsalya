
#include <stdio.h>

int main()
{
    int year,month;
    scanf("%d%d",&year,&month);
    switch (year,month){
        case 1:
        printf("jan");
        break;
        case 2:
        if ((year%4==0)&&(year%100!=0)||(year%400==0))
        printf("it is leap year");
        else
        printf("it is not leep year");
         break;
        case 3:
        printf("march");
         break;
        case 4:
        printf("apirl");
        break;
        case 5:
        printf("may");
        break;
        default:
        printf("invalid");
         break;
    }


    return 0;
}
