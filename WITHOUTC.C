#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100],str2[100];
int i=0,flag=0;
printf("enter first string:");
gets(str1);
printf("enter second string:");
gets(str2);
while(str1[i]!='\0'||str2[i]!='\0')
{
if(str1[i]!=str2[i])
{
flag=1;
break;
}
i++;
}
if(flag==0)
printf("strings are equal");
else
printf("strings are not equal");
getch();
}