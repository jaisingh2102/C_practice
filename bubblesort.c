#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1]= temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("give the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}