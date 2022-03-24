#include<stdio.h>
int btod(int bin);
int main()
{
	int b,deci;	
	printf("enter the binary number to convert into decimal\n");
	scanf("%d",&b);
	deci=btod(b);
	printf("the decimal equivalant of %d = %d\n",b,deci);
	return 0;
}
int btod(int bin)
{
	if (bin==0)
	return 0;
	else 
	return (btod((bin/10)*2)+(bin%10));
}

