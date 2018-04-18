// Condition for binary search is array must be sorted

#include<stdio.h>
#include<conio.h>
void main()
{
 int beg,end, mid, n, key, a[7],i;
 printf("enter the size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("enter key to search");
 scanf("%d",&key);
 beg=0;
 end=n-1;
 mid=(beg+end)/2;
 while(beg<=end)
 {
	if(a[mid]<key)
	{
		beg=mid+1;
	}
	else if (a[mid]==key)
	{
		printf("key is found at %d position",mid+1);
		break;
	}
	else
	{
		end=mid-1;
	}
	mid=(beg+end)/2;
 }
 if(beg>end)
 {
 printf("key is not in this array");
 }
getch();

}
