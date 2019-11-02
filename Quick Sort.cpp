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
	int k, s1, e1;
	k = i;
	s1 = i;
	e1 = j;
	
	if(i>=j)
	{
		return;
	}
	
	while(i<j)
	{
		while(s[k] >= s[i] && i<e1) i++;
		while(s[k] <= s[j] && j>s1) j--;
		
		if(i<j)
		{
			swap(i,j);	
		}
		else
		{
			swap(j,k);
		}
		
	}
	
	f(s1,j-1);
	f(j+1,e1);
	
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
