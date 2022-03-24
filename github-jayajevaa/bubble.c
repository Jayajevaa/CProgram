/*bubble sort AND SWAPPING OF NUMBERS 
name :jayajevaa.n
roll no:n02
date :17/02/22
*/

#include<stdio.h>
int main()
{
	int a[10];
	int n,i,temp,j;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the intergers to be sorted\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1-i;i++)
	{
		for(j=0;j<n-1-j;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n the sorted value of the numbers is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}			
	return 0;
}


