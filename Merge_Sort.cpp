#include<stdio.h>
int s[1000000];
int m[1000000];
void merge(int st, int mid, int ed)
{
	int i,j,k;
	i = st;
	j = mid+1;
	k = st;
	while(i<=mid && j<=ed)
	{
		if(s[i]<s[j])
		{
			m[k++] = s[i++];	
		}
		else
		{
			m[k++] = s[j++];
		}
	}
	for(; i<=mid; i++)
	{
		m[k++] = s[i];
	}
	for(; j<= ed; j++)
	{
		m[k++] = s[j];
	}
	for(i = st; i<=ed; i++)
	{
		s[i] = m[i];
	}
}


void merge_sort(int st, int ed)
{
	int mid;
	if(st == ed)
	{
		return;
	}
	mid = (st+ed)/2;
	
	merge_sort(st,mid);
	merge_sort(mid+1,ed);
	merge(st,mid,ed);
	return;
}


int main()
{
	int i, n;
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&s[i]); //s+i;
	}
	
	merge_sort(0,n-1);
	
	for(i=0; i<n; i++)
	{
		printf("%d ",s[i]);
	}
	
	return 0;
}
