/*
Expt. No. 7
Compute sin(x)/ cos(x) using Taylor series approximation. Compare your result with the built-in library function.
Print both  the resxults with appropriate inferences

Name: jayajevaa
USN: N02
Date: 03/02/2022


sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9!
cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8!
*/

#include <stdio.h>
#include <math.h>


float Factorial(float x)
{
float fa = 1;
for(int i=1;i<=x;i++)
{
fa = fa*i;
}
return fa;
}

float sine(float a)
{
float sinAns;
int i;
float fact;
int num = 0;
for(i = 3;i<=15;i+=2)
{

fact = Factorial(i);
if(num%2==0)
sinAns -= (pow(a,i))/fact;
else
sinAns += (pow(a,i))/fact;
num+=1;
}
sinAns = a+sinAns;
return sinAns;
}

float cosine(float a)
{
float cosAns;
int i;
float fact;
int num = 0;
for(i = 2;i<=16;i+=2)
{

fact = Factorial(i);
if(num%2==0)
cosAns -= pow(a,i)/fact;
else if(num%2!=0)
cosAns += pow(a,i)/fact;
num+=1;
}
cosAns = 1+cosAns;
return cosAns;
}

int main()
{
float x;

printf("Enter the value of x: ");
scanf("%f",&x);
x *= (3.14156/180);
printf("Value of sin using talyor apporimation:%f\n", sine(x));
printf("Value of cos using talyor apporimation:%f\n", cosine(x));

return 0;
}

