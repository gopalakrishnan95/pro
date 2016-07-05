#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[50],i,j,n=0,c=0,d=0,e,f2;
printf("\n enter the number:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);                             
}
for(j=0;j<n;j++)
{
c=c+b[i];
n++;
}
for(x=a;i<a;x++)
{
d=d+b[i];
}
e=c/a;
f=d/n;
if(e==f)
{
printf("possible");

}
else
printf("not possible");
getch();
}
