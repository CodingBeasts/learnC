#include<stdio.h>

void main(){
  int b,h;
  printf("Enter base and height of triangle for calculate area : ");
  scanf("%d %d",&b,&h);
  float area = (b * h)/2;
  printf("Area of Triangle : %f \n",area);
}
