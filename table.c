#include<stdio.h>

void calc(){
  int n,val=0;
  printf("Enter number which table you want to print \n");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    val = i * n;
    printf("%d * %d : %d\n",n,i,val);
  }
}
int main(){
  calc();
}
