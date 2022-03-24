#include<stdio.h>
int main()
{
	struct student
	{
		int stu_id;
		char name[20];
		float m1;
		float m2;
		float m3;
		float avg;
	};
	
	struct student s[20];
	int i,n;
	printf("enter the number of students\n");
	scanf("%d",&n);
	printf("enter %d student details\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter student id\n");
		scanf("%d",s[i].stu_id);
		
		printf("enter student name\n");
		scanf("%s",s[i].name);

		printf("enter math marks\n");
		scanf("%f",s[i].m1);

		printf("enter language 1 marks\n");
		scanf("%f",s[i].m2);

		printf("enter computer marks\n");
		scanf("%f",s[i].m3);
	}
 	
	for(i=0;i<n;i++)
	{
		s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3.0;
	}

	
	for(i=0;i<n;i++)
	{
		if (s[i].avg>35)
		{
			printf("student id = %d\tstudent name = %s\tstudent avg = %f\t you have scored above the avg of the class\n",s[i].stu_id,s[i].name,s[i].avg);
		}

		else if (s[i].avg<35)
		{
			printf("student id = %d\tstudent name = %s\tstudent avg = %f\t you have scored below the avg of the class\n",s[i].stu_id,s[i].name,s[i].avg);
		}
	}
	return 0;
}










































	

