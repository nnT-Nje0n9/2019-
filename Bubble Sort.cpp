#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	int i, j, n, tmp;
	vector<int> s;
	scanf("%d", &n);
	s.resize(n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&s[i]);
	}
	// Bubble Sort
	for(i=n-1; i>0; i--) 
	{
		for(j=0; j<i; j++) 
		{
			if(s[j] > s[j+1]) //Ascending order
			{
				tmp = s[j]; // swap
				s[j] = s[j+1];
				s[j+1] = tmp;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",s[i]);
	}
	
	return 0;
}
