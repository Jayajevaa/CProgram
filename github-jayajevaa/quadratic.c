/*
 program no 2
 find roots of quadratic equation
 roll no n2
*/
#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c;
  float r1,r2;
  float dis,ip,rp;
  printf("----- quadratic solution finder-----\n");
  printf("enter the coefficients of the equation \n");
  scanf("%f%f%f",&a,&b,&c);
  if (a==0)
  {
    printf("the given equation is a leniar equation\n ");
    return 1;
  }
  dis=(b*b)-(4*a*c);
  if (dis==0)
  {
    r1=(-b)/(2*a);
    r2=r1;
    printf("the equation given is a quadratic equation\n");

    printf("the roots of the quadratic eqn are equal\n");

    printf("the roots of the quadratic eqn are %f and %f \n",r1,r2);
  }
  else if(dis>0)
  {
    r1=((-b)+( sqrt(dis) ))/(2*a);
    r2=((-b)-( sqrt(dis) ))/(2*a);
    printf("the given equation is a quadratic equation\n");

    printf("root1=%f,root2=%f \n",r1,r2);
  }
  else
  {
    rp=(-b)/(2*a);
    ip=sqrt(-dis)/(2*a);
    printf("the given equaton is a quadratic equation\n");

    printf("the system has imaginary roots\n");
    printf("r1=%f + i %f \n",rp,ip);
    printf("r2=%f - i %f \n",rp,ip);
  }
  return 0;
}