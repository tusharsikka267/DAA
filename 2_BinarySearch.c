#include <stdio.h>
int BinarySearch(int a[100],int low,int high,int num)
{
    while(low<=high)
    {
    int mid=(low+high)/2;
    if(num==a[mid])
    {
        return mid;
    }
    else if(num>a[mid])
    {
         return BinarySearch(a,mid+1,high,num);
    }
    else if(num<a[mid])
    {
       return BinarySearch(a,mid,high-1,num);
    }
    }
    return -1;
}
int main()
{
    int n,i,l=0 ,num,index;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[100];
    printf("Enter the elements of array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements you want to search\n");
scanf("%d",&num);
    int high =n-1;
    index=BinarySearch(a,l,high,num);
    printf("No is at %d index",index);
    return 0;

}