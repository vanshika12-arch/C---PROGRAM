#include<stdio.h>
#include<conio.h>
void main()
{
char a = 'x',*p1=&a;
int b = 12, *p2=&b;
float c = 12.4,*p3=&c;
double d = 18.34 ,*p4=&d;

printf("sizeof(p1)=%d,sizeof(*p1)=%d\n",sizeof(p1),sizeof(*p1));
printf("sizeof(p2)=%d,sizeof(*p2)=%d\n",sizeof(p2),sizeof(*p2));
printf("sizeof(p3)=%d,sizeof(*p3)=%d\n",sizeof(p3),sizeof(*p3));
printf("sizeof(p4)=%d,sizeof(*p4)=%d\n",sizeof(p4),sizeof(*p4));
printf("values using pointers:\n");
printf("a=%c\n",*p1);
printf("b=%d\n",*p2);
printf("c=%f\n",*p3);
printf("d=%lf\n",*p4);
getch();
}