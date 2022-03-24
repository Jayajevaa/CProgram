#include<stdio.h>
void printprime(int lowervalue, int uppervalue) 
{
	int i,j;
	for(i=lowervalue;i<uppervalue;i++)
	{
		for(j=2;j<i/3;j++)
		{
			if(i%j==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
}
int main()
{
	int lowervalue,uppervalue;
	printf("enter the lower value and upper value:\n");
	scanf("%d%d",&lowervalue,&uppervalue);
	printf("the prime numbers from %d to %d are:\n",lowervalue,uppervalue);
	printprime("lowervalue, uppervalue);
	return 0;
}
