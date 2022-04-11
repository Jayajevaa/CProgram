#include <stdio.h>
int main()
{
  int num1,num2,res;
  char op;
  printf("--------calculator----------\n");
  printf("enter two valuse to perform operation\n");
  scanf("%d%d",&num1,&num2);
  printf("enter the operator\n");
  scanf("%c",&op);
  
  if (op=='+')
  { res =num1+num2;
  }
  else if (op=='-')
  { res=num1-num2;
  }
  else if (op=='*')
  {res=num1*num2;
  }
  else if(op=='/')
  {
    if (num2==0)
    {
      printf("zero error\n");
      return 1;
      }
      res=num1/num2;
   
  }
  else if(op=='%')
  {
    if (num2==0)
    {
      printf("zero error\n");
      return 1;
    }
  
    res=num1%num2;
      
  }
  printf("%d%c%d=%d",num1,op,num2,res);
  return 0;

}  