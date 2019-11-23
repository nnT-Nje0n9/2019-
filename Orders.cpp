#include<stdio.h>
#include<stdlib.h>

struct node
{
	node *left;
	int v;
	node *right;
};
node *root = NULL;
node *s;


void Pre(node *a)
{
	if(a == NULL)
	{
		return;
	}
	printf("%d ",a->v);
	Pre(a->left);
	Pre(a->right);
}


void In(node *a)
{
	if(a == NULL)
	{
		return;
	}
	In(a->left);
	printf("%d ",a->v);
	In(a->right);
}


void Post(node *a)
{
	if(a == NULL)
	{
		return;
	}
	Post(a->left);
	Post(a->right);
	printf("%d ",a->v);
}


int main()
{
	int n, i, m;
	
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&m);
		
		if(root == NULL)
		{
			root = (node*)malloc(sizeof(node));
			root->left = NULL;
			root->right = NULL;
			root->v = m;
		}
		else
		{
			s = root;
			while(1)
			{
				if(s->v > m && s->left != NULL)
				{
					s = s->left;
				}	
				else if(s->v < m && s->right != NULL)
				{
					s = s->right;
				}
				else
				{
					break;
				}
			}
			if(s->v > m)
			{
				s->left = (node*)malloc(sizeof(node));
				s = s->left;
				s->left = NULL;
				s->right = NULL;
				s->v = m;				
			}
			else
			{
				s->right = (node*)malloc(sizeof(node));
				s = s->right;
				s->left = NULL;
				s->right = NULL;
				s->v = m;
			}
		}
	}
	printf("\n");
	printf("Preorder\n");
	Pre(root);
	printf("\n");
	printf("Inorder\n");
	In(root);
	printf("\n");
	printf("Postorder\n");
	Post(root);
	return 0;
}
