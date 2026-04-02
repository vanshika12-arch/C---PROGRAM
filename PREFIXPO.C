#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[5]={5,40,45,70,95},*p=arr;
clrscr();
for(i=0;i<8;i++)
printf("%d\t",++*p);
printf("\n");
for(i=0;i<7;i++)
printf("%d\t",(*p)++);
printf("\n");
getch();
}