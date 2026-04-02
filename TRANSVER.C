#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[5]={25,30,35,40,55},*p;
p=arr;
for(i=0;i<5;i++)
{
printf("%d\t",*p);
p++;
}
getch();
}