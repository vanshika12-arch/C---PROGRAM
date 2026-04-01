#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
clrscr();
printf("enter a string:");
gets(a);
printf("length of the %s is %d",a,strlen(a));
getch();
}
