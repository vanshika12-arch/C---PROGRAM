#include<stdio.h>
#include<conio.h>
void main()
{
int arr[3][4]={
{10,11,12,13},
{20,21,22,23},
{30,31,32,33}
} ;
int i,j;
clrscr();
for(i=0;i<3;i++)
{
printf("address of %dth array =%p %p\n",i,arr[i],*(arr+i));
for(j=0;j<4;j++)
printf("%d\t %d\t",arr[i][j],*(*(arr+i)+j));
printf("\n");
}
getch();
}