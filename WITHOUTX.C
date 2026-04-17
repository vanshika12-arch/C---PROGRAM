#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[100];
int i=0;
printf("enter a string:");
gets(str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
str2[i]='\0';
printf("copied string:%s",str2);
getch();
}