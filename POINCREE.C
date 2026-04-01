#include<stdio.h>
#include<conio.h>
void main()
{
int a =5;
int *p;p=&a;
clrscr();
printf("value of p = address of a=%p\n",p);
printf("value of p = %p\n",++p);
printf("value of p = %p\n",p++);
printf("value of p = %p\n",p);
printf("value of p = %p\n",--p);
printf("value of p = %p\n",p--);
printf("value of p = %p\n",p);
getch();
}