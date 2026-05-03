#include<stdio.h>
int main ()
{
int a[10][10],i,j,m,n,sum=0;
printf ("enter size of row and column\n");
scanf("%d%d",&m,&n);
printf("enter value of array\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
sum=sum+a[i][j];
}
}
printf("elements are\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("elements at a[%d][%d]: %d\n",i,j,a[i][j]);
}
}
printf("diagonal sum is%d\n",sum);
return 0;
}