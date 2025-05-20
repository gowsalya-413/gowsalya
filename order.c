#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
  int arr[n];
  scanf("%d",&arr[n]);
      int s;
      scanf("%d",&s);
      for(int i=0;i<n;i++){
      if(s==arr[i]){
          printf("pressent");
      }
          else
          printf("not pressent");
      }
  }
}



