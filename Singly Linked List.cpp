#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	Node *link;
};


int main()
{
	Node *ptr, *n, *s;
	n = (Node*)malloc(sizeof(Node));
	s = n;
	scanf("%d",&n->value);
	//printf("%d\n",n->value);
	n->link = NULL;
	while(true)
	{
		n = (Node*)malloc(sizeof(Node));	
		ptr = s;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}
		
		ptr->link = n;
		scanf("%d",&n->value);
		n->link = NULL;
		ptr = s;
		while(ptr->link != NULL)
		{
			printf("%d",ptr->value);
			ptr = ptr->link;
		}
		printf("%d",ptr->value);
		}
	
	return 0;
}
