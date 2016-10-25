#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,rows;
clrscr();
printf("\nRows:");
scanf("%d",&rows);
for(a=1;a<=rows;a++)
{
for(b=1;b<=a;b++)
{
printf("%d\t",c);
c++;
}
printf("\n");
}
getch();
}
