#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
clrscr();
printf("enter two strings");
gets(str1);
gets(str2);
if(strcmp(str1,str2)==0)
printf("strings are same");
else
printf("strings are not same:");
getch();
}
