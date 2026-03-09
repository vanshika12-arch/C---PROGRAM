#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],i,j,temp;
printf("enter elements of array ");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<4-i;j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n sorted array : \n");
for (i=0;i<6;i++)
{
printf("%d ",a[i]);
}
getch();
}