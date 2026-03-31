#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,*pi=&a;
char b='x',*pc=&b;
float c=5.5,*pf=&c;
clrscr();
printf("value of pi = address of a=%p\n",pi);
printf("value of pc = address of b=%p\n",pc);
printf("value of pf = address of c=%p\n",pf);
pi++;
pc++;
pf++;
printf("now value of pi=%p\n",pi);
printf("now value of pc=%p\n",pc);
printf("now value of pf=%p\n",pf);
getch();
}