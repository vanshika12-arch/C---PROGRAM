#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,total,sales[2][4];
for(i=0;i<2;i++)
{
total=0;
printf("enter sales of salesman %d\n", i+1);
for (j=0;j<4;j++)
{
printf("month %d",j+1);
scanf("%d",&sales[i][j]);
total= total+ sales[i][j];
}
printf(" total sales of salesman %d = %d\n",i+1,total);
}
getch();
}
