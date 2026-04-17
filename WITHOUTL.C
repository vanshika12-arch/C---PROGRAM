#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i=0;
printf("enter a string:");
gets(str);
while(str[i]!='\0')
{
i++;
}
printf("length of sring:%d",i);
getch();
}

















