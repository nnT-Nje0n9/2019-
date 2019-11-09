#include<bits/stdc++.h>

int main()
{
	int i;
	FILE *f;
	f = fopen("in.txt","w");
	
	srand(time(NULL));
	for(i=0; i<100; i++)
	{
		fprintf(f,"%d\n",rand());
	}
	fclose(f);
	return 0;
}
