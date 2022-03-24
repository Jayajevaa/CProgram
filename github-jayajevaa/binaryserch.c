/*binary search 
name : jayajevaa.n
date : 17/02/22
*/

#include<stdio.h>
int main()
{
	int a[10];
	int n,i,temp,j,first,last,mid,key;
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
	first=0;
	last=n-1;
	printf("\nenter key elements\n");
	scanf("%d",&key);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
   		{
			printf("the element %d is found at %d position\n",key,mid+1);
			return 1;
		}
		else if(key<a[mid])
		{
			last=mid-1;
		}
		else first=mid+1;
	}
	printf("element %d not found\n",key);

	return 0;
}

