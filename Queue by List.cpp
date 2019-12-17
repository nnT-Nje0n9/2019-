#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	Node *next;	
};

struct Queue
{
	Node *front, *rear;
};

int QIsEmpty(Queue *pq)
{
	if(pq->front == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void inqueue(Queue *pq, int n)
{
	Node *newnode = (Node*)malloc(sizeof(Node));
	newnode->next = NULL;
	newnode->value = n;
	
	if(QIsEmpty(pq))
	{
		pq->front = newnode;
		pq->rear = newnode;
	}
	else
	{
		pq->rear->next = newnode;
		pq->rear = pq->rear->next;
	}

}


int dequeue(Queue *pq)
{
	if(QIsEmpty(pq))
	{
		printf("Queue Is Empty!");
		return -1;
	}
	
	int data;
	Node *Delnode;
	Delnode = pq->front;
	data = Delnode->value;
	pq->front = pq->front->next;
	
	free(Delnode);
	return data;
}

int main()
{
	Queue q;
	q.front = NULL;
	q.rear = NULL;
	int n = 0;
		
	while(true)
	{
		scanf("%d",&n);
		if(n == -1)
		{
			break;
		}
		inqueue(&q,n);
	}
	
	do
	{
		printf("%d ",dequeue(&q));
	} while(!QIsEmpty(&q));
	
	
	return 0;
}
