#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[5]={25,30,35,40,45},*p=arr;
clrscr();
for(i=0;i<5;i++)
{
(*p)++;
printf("%d\t",*p);
p++;
}
getch();
}