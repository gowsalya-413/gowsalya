#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d%d%d",a,b,c);
    if((a>b)&&(a>c)){
    printf("\na is greater");
    }
    else if((b>a)&&(b>c))
    printf("\nb is greater");
    else
    printf("\nc is greater");
    return 0;
}