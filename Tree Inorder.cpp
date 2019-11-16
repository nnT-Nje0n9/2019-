#include<bits/stdc++.h>

void tree(char t[],int n)
{
	if(t[n-1] == 0)
	{
		return;
	}
	tree(t,n*2);
	printf("%c",t[n-1]);
	tree(t,n*2+1);
}

int main()
{
	char t[100010] = {0,};
	scanf("%s",t);
	tree(t,1);
}
