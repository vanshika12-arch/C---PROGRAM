#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20][20],i,j,n,num;
printf("enter value of n (odd value) : ");
scanf("%d",&n);
i=n-1;
j=(n-1)/2;
for(num=1;num<=n*n;num++)
{
a[i][j]=num;
i++;
j--;
if(num%n==0)
{
i-=2;
j++;
}
else if(i==n)
i=0;
else if(j==-1)
j=n-1;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",a[i][j]);
}
printf("\n");
}
getch();
}