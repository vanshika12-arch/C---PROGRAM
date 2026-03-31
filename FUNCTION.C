#include<stdio.h>
#include<conio.h>
void square(int *n)
{
*n=(*n)*(*n);
}
void main()
{
int num=6;
clrscr();
square(&num);
printf("square=%d",num);
getch();
}