#include<stdio.h>
int binarysearch(int a[],int n, int key)
{
int low=0,high = n-1,mid;
while(low <= high)
{
mid = (low+high)/2;
if(a [mid] == key)
{
    return mid;
}
else if(a [mid] > key)
{
    high = mid-1;
}
else{
    low = mid+1;
}
}
return -1;
}
int main()
{
    int n,key,i;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("give the input\n");
    for(i = 0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which element you find\n ");
    scanf("%d",&key);
    int result = binarysearch(a,n,key);
    if(result == -1)
    {
        printf("key element is not found\n");
    }
    else{
        printf("key element is found at index value \n%d",result);
    }
    return 0;
}