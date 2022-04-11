/* 
An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of the total amount is charged. Write a program to read the name of the user,the number of units consumed, and print out the charges.
NAME : JAYAJEVAA N
ROLL NUMBER : N02
DATE : 13-01-2022
*/

#include <stdio.h>
#define METERCHARGE 100
int main(void)
{
  float unit,total,charge;
  char name[10];
  printf("Enter your user name : \n");
  scanf("%s\n",name);
  fgets(name,10,stdin);
  printf("your name is : %s\n",name);
  printf("enter the number of units comsumed twice :\n");
  scanf("%f\n\n",&unit);
    if (unit<0)
    {
      printf("negative values of units are not allowed\n");
      printf("please enter a positve value\n");
      return 1;
    }
    else if(unit<=200)
    {
      charge=unit*0.8;
    }
    else if(unit<=300)
    {
      charge=((0.8*200)+((unit-200)*0.9));
    }  
    else
    {
      charge=((00.8*200)+(0.9*100)+(1*(unit-300)));
    }
    total=charge + METERCHARGE;
    if (total>400)
    {
      total=total*1.15;
    }

  printf("-------------------------------");
  printf("\n\n---ELECTRICITY BILL---\n\n");
  printf("username : %s\n\n",name);
  printf("units of electricity used : %f units\n\n",unit);
  printf("total amount to be paid : %f rupees\n\n",total);
  printf("thank you for visiting\n please visit again!!!\n\n");
  printf("-------------------------------\n");



return 0;

}
