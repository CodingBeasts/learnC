#include<stdio.h>


int main(){
  int ch;
  float c,f;
  printf("Enter 1 for Celsius to Farhrenheit conversion and 2 for vice versa :: ");
  scanf("%d",&ch);

  if(ch==1){
    printf("Enter centigrade of Celsius to convert : ");
    scanf("%f",&c);
    f = (c * 9/5) + 32;
    printf("Farhrenheit : %f\n",f);
  }
  else if(ch==2){
    printf("Enter centigrade of Farhrenheit to convert : ");
    scanf("%f",&f);
    c = (f - 32) * 5 / 9;
    printf("Celsius : %f\n",c);
  }
  else{
    printf("Wrong Choice Entered\n");
  }
  return 0;
}
