#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,r,c,temp;
printf("enter number of rows and columns");
scanf("%d %d",&r,&c);
printf("enter elements of matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(j=0;j<c;j++)
{
temp=a[0][j];
a[0][j]=a[r-1][j];
a[r-1][j]=temp;
}
printf("matrix after swapping rows:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
getch();
}