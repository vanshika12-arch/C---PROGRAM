#include<stdio.h>
#include<conio.h>
void main()
{
int res, i, arr[6],flag =0;
printf("enter elements of array");
for(i=0;i<6;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the number to be searched");
scanf("%d",&res);
for(i=0;i<6;i++)
{
if(res==arr[i])
{
flag = 1;
break;
}
}
if(flag==1)
printf("number found");
else
printf("numvber not found");
getch();
}
