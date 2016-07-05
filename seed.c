#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,k,z,i=0,j=0,y=1,t=1;
clrscr();
printf("\n enter the number:");
scanf("%d",&a);
for(i=0;i<a/2;i++)
{
z=1;
y=1;
b=i;
for(j=0;b>9;j++)
{
 y*=b%10;
 b=b/10;

}
y*=b;
t=y*i;
if(a==t)
printf("%d",i);
}
getch();
}
