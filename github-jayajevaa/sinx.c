/* experimant 7
computw sinx/cosx using tylor series approximation
and compare result witht he result of the ibrary function. 
print both the results with the appropriaate inference
jayajevaa
n02
03/02/2022
sin x =x-x^3/3!+x^5/5!-x^7/71.....
cos x =1-x^2/2!+x^4/5!.....
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float degree,sinx,x;
	float sum;
	float term,nume,deno;
	int i;
	printf("enter value of degree: \n");
	scanf("%f",&degree);
	x=degree*(3.14156/180);
	printf("value of sin(%f) from the library= %f\n",degree,sin(x));

	sum = 0;
	nume = x;
	deno = 1;
	i = 1;
	
	do{
		term = nume/deno;
		sum = sum+term;
		i = i+2;
		nume = -1*nume*x*x;
		deno = deno*(i-1)*i;
	  }while(fabs(term) >= 0.00001);
	
	printf("computed value of sin(%f)=%f\n",degree,sum);
        
	
	return 0;
}
