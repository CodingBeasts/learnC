#include<stdio.h>
#include<math.h>

int main(){
  int a,b,c;
  float peri,s,area;
  printf("Enter three sides of triangle A B C : ");
  scanf("%d %d %d",&a,&b,&c);
  peri = a + b + c;

  s = peri / 2;
  area = sqrt( s * ( s - a ) * ( s - b ) * ( s - c ) );
  printf("Area of Triangle : %f \n",area);
  return 0;
}
