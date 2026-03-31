#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3][3],b[3][3],prod[3][3];
prod[3][3]=0;
printf("enter elements of first array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter elements of second arry:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("product of two matrices:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
prod[i][j]=prod[i][j]+a[i][j]*b[i][j];
printf("%d\t",prod[i][j]);
}
printf("\n");
}
getch();
}
