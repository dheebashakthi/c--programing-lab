#include<stdio.h>
int main()
{
  int a,b,choice,res;
printf("==========BRANCHING STATEMENT==========");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU------\n");
printf("1. Check Positive,Negative or Zero\n");
printf("2. Check Even or Odd\n");
printf("3. Find Largest of Two Numbers\n");
printf("\nEnter your choice:");
printf("4.Check Divisibility by 5\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
printf("\n----- Result------\n");
switch(choice)
{
case 1:
   if(a>0)
     printf("%d is Positive",a);
  else if(a<0)
    printf("%d is Negative",a);
  else
    printf("%d is Zero",a);
  break;
case 2:
if(a%2==0)
  printf("%d is Even",a);
else
  printf("%d is Odd",a);
case 3:
if(a>b)
{
res = a;
printf("%d is Largest Number",res);
}
else if(b > a)
{
res =b;
printf("%d is the Largest Number",res);
}
else
{
printf("Both number are Equal");
}
break;
case 4:
if(a%5==0)
  printf("%d is Divisible by 5",a);
else
  printf("%d is Not Divisible by 5",a);
break;
default:
printf("Invalid choice");
}
return 0;
}

//output
//=====BRANCHING STATEMENT======
//Enter the first number:25
//Enter the second number:18
//-----MENU------
//1.Check Positive,Negative or Zero
//2. Check Even or Odd
//3. Find Largest of Two Numbers
//4.Check Divisibility by 5
//Enter your choice:3
//----- Result------
// 25 is Largest Number",res
  


  
    
