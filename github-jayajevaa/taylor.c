#include <stdio.h>
#include <math.h>
#define PI 3.142856
int main()
{
  float deg,nume,deno,sum,term,x;
  int i;
  printf("enter the degree :\n");
  scanf("%f",&deg);
  x=(deg*(PI/180));
  sum=0;
  nume=x;
  deno=1.0;
  i=1;
  do
    {
      term=(nume/deno);
      sum=(sum+term);
      i=i+2;
      nume=-nume*x*x;
      deno=deno*i*(i-1);
      printf("term=%f\n",term);
    }while(fabs(term)>=0.00001);
  printf("\ncomputed value of sin %f = %f\n",deg,sum);
  printf ("\nthe library value of the function sin %f is %f\n",deg,sin(x));
  return 0;
}