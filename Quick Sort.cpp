#include<stdio.h>
#include<vector>

using namespace std;
vector<int> s;

void swap(int i, int j)
{
	int tmp;
	
	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}

void f(int i, int j)
{
	int k, i1, j1;
	k = i;
	i1 = i;
	j1 = j;
	
	if(i>=j)
	{
		return;
	}
	
	while(i<j)
	{
		while(s[k] >= s[i] && i<j1) i++; // && i<j1 필요한가? 
		while(s[k] <= s[j] && j>i1) j--;
		
		if(i<j)
		{
			swap(i,j);	
		}
		else
		{
			swap(j,k);
		}
	}
	
	f(i1,j-1);
	f(j+1,j1);
	
}

int main()
{
	int i, j, n, tmp;
	
	scanf("%d", &n);
	s.resize(n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&s[i]);
	}
	
	f(0,n-1); // 시작 시점, 종료 시점 
	
	for(i=0; i<n; i++) // output
	{
		printf("%d ",s[i]);
	}
	
	return 0;
}
