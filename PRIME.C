#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n ,isPrime = 1;
printf("enter value of n ");
scanf("%d",&n);
if(n<=1)
{
isPrime = 0;
}
else
{
for(i=2;i<=sqrt(n); i++)
{
if(n%i==0)
{
isPrime = 0;
break;
}
}
}
if(isPrime == 1)
{
printf("%d is prime number",n);
}
else
{
printf("%d is not a prime number",n);
}
getch();
}