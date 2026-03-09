#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],i,j,min,temp;
printf("enter  the wlements  of array ");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
min = i;
for(j=i+1;j<6;j++)
{
if(a[j]<a[min])
{
min = j;
}
}
temp = a[i];
a[i]=a[min];
a[min]=temp;
}
printf("\n sorted array : \n");
for(i=0;i<6;i++)
{
printf("%d",a[i]);
}
getch();
}
