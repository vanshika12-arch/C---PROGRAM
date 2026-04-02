#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[5]={25,26,28,35,56},*p=arr;
clrscr();
for(i=0;i<5;i++)
printf("%d\t",*p++);
printf("\n");
for(i=0;i<5;i++)
printf("%d\t",*--p);
printf("\n");
getch();
}