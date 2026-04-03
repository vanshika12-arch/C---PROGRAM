#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int result;
char str1[10],str2[10];
printf("enter two string");
gets(str1);
gets(str2);
result=strcmp(str1,str2);
if(result==0)
{
printf("both are equal");
}
else if(result>0)
printf("str1 is greater"   );
else
printf("str2 is greater");
getch();

}