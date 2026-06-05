#include<stdio.h>
void insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
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
    insertionsort(a,n);
    printf("sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}