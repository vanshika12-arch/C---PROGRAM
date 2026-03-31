#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main (){
int *p,*q,n,i;
clrscr();
p=(int*)malloc(5*sizeof(int));
printf("enter 5 numbers(using malloc):\n");
for(i=0;i<5;i++)
{
scanf("%d",&p[i]);
}
printf("number stored using malloc:\n");
for(i=0;i<5;i++)
{
printf("%d\t",p[i]);
}
printf("\n");
q=(int*)calloc(5,sizeof(int));
printf("enter 5 numbers(using calloc):\n");
for(i=0;i<5;i++)
{
scanf("%d",&q[i]);
}
printf("numbers stored using calloc:\n");
for(i=0;i<5;i++)
{
printf("%d\t",q[i]);
}
printf("\n");
p=(int*)realloc(p,10*sizeof(int));
printf("enter 5 more numbers afyer realloc :\n");
for(i=5;i<10;i++)
{
scanf("%d",&p[i]);
}
for(i=5;i<10;i++)
{
*(p+i)=(i+1)*10;
}
printf("all numbers after realoc(malloc):\n");
for(i=0;i<10;i++)
{
printf("%d\t",*(p+i));
}
q=(int*)realloc(q,10*sizeof(int));
printf("enter 5 more numbers after realloc:\n");
for(i=5;i<10;i++)
{
scanf("%d",&q[i]);
}
for(i=5;i<10;i++)
{
*(q+i)=(i+1)*8;
}
printf("all numbers after reallc(calloc):\n");
for(i=0;i<10;i++)
{
printf("%d\t",*(q+i));
}
free(p);
free(q);
getch();
}
