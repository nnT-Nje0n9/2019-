#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	int i, j, n, tmp;
	int min;
	vector<int> s;
	scanf("%d", &n);
	s.resize(n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&s[i]);
	}
	
	for(i=0; i<n; i++)
	{	
		min = i;
		for(j=i; j<n; j++)
		{
			if(s[j] < s[min]) //find minimum 
			{
				min = j; 
			}
		}
		tmp = s[min];
		s[min] = s[i];
		s[i] = tmp;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",s[i]);
	}
	
	return 0;
}
