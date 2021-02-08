#ubc
#include<stdio.h>
#include<math.h>

//declaring function
float s_interest(float p,float r, float t);
float c_interest(float p,float r, float t, float c);

float getValues();


int main(){
  int ch;
  printf("Please Choose Values Between 1 And 2 \n\t(1) for simple interest \n\t(2) for compound interest \n\t\t\t:::: ");
  scanf("%d",&ch);
  getValues(ch);
  return 0;
}

float getValues(int ch){
  float p,r,t,cmp;
  float baseValues(){
    printf("Principal : ");
    scanf("%f",&p);
    printf("Rate : ");
    scanf("%f",&r);
    printf("Time : ");
    scanf("%f",&t);
  }

  switch(ch){
    case 1:{
      baseValues();
      printf("Simplet Interest %f: \n",s_interest(p,r,t));
    }
    break;
    case 2:{
      baseValues();
      printf("Compounding : ");
      scanf("%f",&cmp);
      printf("Compound Interest : %f\n",c_interest(p,r,t,cmp));
    }
    break;
    default:printf("!!!Wrong Values Enter Please Choose the value between 1 and 2");
  }
}

float s_interest(float p,float r, float t){
  float si = (p*r*t)/100;
  return si;
}


float c_interest(float p,float r, float t,float c){
  float ci = (p * pow(1+r/(c*100),c*t))-p;
  return ci;
}
