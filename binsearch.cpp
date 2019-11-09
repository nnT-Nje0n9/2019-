#include<stdio.h>

int arr[100000];
int mrr[100000];

int binsearch(int st, int ed, int target)
{
	int mid = (st+ed)/2;
	
	if(st > ed)
	{
		return -1;
	}
	else if(arr[mid] == target)
	{
		return mid+1;
	}
	else if(arr[mid] > target)
	{
		binsearch(st,mid-1,target);
	}
	else
	{
		binsearch(mid+1,ed,target);
	}
}

int main()
{
	int i, n, m;
	
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(i=0; i<m; i++)
	{
		scanf("%d",&mrr[i]);
	}
	for(i=0; i<m; i++)
	{
		printf("%d ",binsearch(0,n-1,mrr[i]));
	}
	return 0;
}
