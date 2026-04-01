#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[299];
clrscr();
printf("enter your name:");
fgets(a,sizeof(a),stdin);
printf("your name is:");
puts(a);
getch();
}