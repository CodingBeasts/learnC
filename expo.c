#include<stdio.h>
#include<math.h>

int main(){
  int x,n;
  float se=1,fact=1;
  printf("X and N values stands for x:numeric value and n:repetion\n");
  printf("Enter Value of X : ");
  scanf("%d",&x);
  printf("Enter Value of N : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    fact = fact * i;
    se += pow(x,i/fact);
  }
  printf("%f\n",1+se);
}
