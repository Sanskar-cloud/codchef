#include<stdio.h>
int main(void){
  int t,k=0;
  scanf("%d",&t);
  while(t--){
    int i,j,ctr=0,n;
    scanf("%d",&n);
    int a[n];
    if(n>=7&&n<=100){
      for(i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
      j=n-1;
      for(i=0;i<n/2;i++){
        if(a[i]==a[j]&&a[n/2]==7){
          ctr++;
        }
        j--;
      }
    }
    if(ctr==n/2)
        printf("yes\n");
    else
        printf("no\n");
  }
  return 0;
} 
