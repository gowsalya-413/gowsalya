#include <stdio.h>

int main()
{
    int x=6;
    int flag=0;
    for(int i=1;i<=x;i++)
    if(x%i==0)
    flag++;
    if (flag==2) printf("%d,is a prime number",x);
    else
    printf(" is not a prime number");
    return 0;
}
