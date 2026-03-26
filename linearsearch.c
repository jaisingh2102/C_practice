#include<stdio.h>
int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("give element to the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element which you want to search\n");
    scanf("%d",&key);
    int result = linearsearch(a,n,key);
    if(result == -1)
    {
        printf("key value was not found\n");
    }
    else
    {
        printf("the index of key value is \n%d",result);
    }
    return 0;
}