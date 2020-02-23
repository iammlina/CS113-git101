//6210451411 Yosita jinda
#include <stdio.h> 
#include <stdlib.h> 

typedef struct node 
{ 
   int data; 
   struct node *next; 
};

struct node *right(struct node *head, int input)//more than
{
    struct node *first,*second, *tmp;
    first = head;
    second = head->next;
    tmp = head;
    tmp = (struct node *)malloc(sizeof(struct node));
    while(1)
	{
        if(input >= first->data && second == NULL)//last
        {
            tmp->data = input;
            tmp->next = NULL;
            first->next = tmp;
            break;
        }
        else if(input >= first->data && input < second->data)//between
        {
            tmp->data = input;
            tmp->next = second;
            first ->next = tmp;
            break;
        }
        first = first->next;
        second = second->next;
    }
    return head;
}

struct node *left(struct node *head,int input)//less th=han
{
	struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->next = head;
	tmp->data = input;
    head = tmp;
    return head;
}

struct node *createset(struct node **head, int input)
{
	struct node *tmp;
	if(*head == NULL)
	{
		*head = (struct node *)malloc(sizeof(struct node));
		(*head)->data = input;
		(*head)->next = NULL;
		//(*tail)->next = (*head)->next;
	}
	
    else if(input >= (*head)->data)//more
    {
        return right(*head,input);
    }
    
    else if(input < (*head)->data)//less
    {
        return left(*head,input);
    }
    
    return *head;
}

void print_list(struct node **head)
{
	struct node *tmp;
   for (tmp = *head; tmp; tmp = tmp->next)
   {
		printf("%d\n", tmp->data);
   }
}

int main() 
{  
	struct node *head=NULL;
	int n , x, i, input;
	while(scanf("%d",&input)==1)
	{
		if(input <= -1)
		{
			break;
		}
		head = createset(&head,input);
	}
   print_list(&head);

}
