#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
	vector<int> s;
	int n, i, j, tmp;
	
	scanf("%d",&n);
	s.resize(n); // array size option
	for(i=0; i<n; i++)
	{
		scanf("%d",&s[i]); // input
	}
	// insertion sort start
	for(i=0; i<n; i++) // insertion
	{
		for(j=i; j>0; j--)
		{
			if(s[j] < s[j-1])
			{
				tmp = s[j];     //
				s[j] = s[j-1]; // 
				s[j-1] = tmp; //swap
			}
			else
			{
				break;
			}
		}
	}
	// insertion sort end
	for(i=0; i<n; i++)
	{
		printf("%d ",s[i]); // output
	}
	
	return 0;
}
