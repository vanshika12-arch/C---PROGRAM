#include<stdio.h>
#include<conio.h>
void main()
{
int a[6],i,temp;
clrscr();
printf("enter elements of array");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<6;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("array after excangig");
for(i=0;i<6;i++)
{
printf("%d\t",a[i]);
}
getch();
}