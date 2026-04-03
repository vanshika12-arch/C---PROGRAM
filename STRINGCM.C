#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int result;
clrscr();
char str1[10],str2[10];
printf("  enter two string");
gets(str1);
gets(str2);
result=strcmp(str1,str2);
printf("%d",result)     ;
getch();
}
