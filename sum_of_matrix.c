#include <stdio.h>
int main()
{
    int s[50][50],i,j,m,n,sum=0;
    printf("enter the size of row and column\n");
    scanf("%d%d",&m,&n);
    printf("enter the value of array\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&s[i][j]);
    sum=sum+s[i][j];
    }
}    
printf("elements are:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("element at s[%d][%d]%d\n:",i,j,s[i][j]);
    }
}
printf("the sum of all elements are%d\n",sum);
return 0;
}