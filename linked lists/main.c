#include <stdio.h>
#include <stdlib.h>

struct LinkedList
{
    int data;
    struct LinkedList *next;
};

int ListLength(struct LinkedList *head)
{
    int count = 0;
    struct ListNode *current = head;
    while(current != NULL)
    {
        count++;
        current=current->next;
    }
    return(count);
}

void InsertInLinkedList(struct ListNode **head, int data,int position)
{
    int k=1;
    struct ListNode *p, *q, *newNode;
    newNode = malloc(sizeof(struct ListNode));
    if(!newNode)
    {
        printf("Memory Error");
        return;
    }

    newNode->data=data;
    p=*head;
    //inserting at the beginning
    if(position == 1)
    {
        newNode->next=p;
        *head=newNode;
    }
    else
    {
        //traverse the list until the position where we want to insert
        while((p!=NULL)&&(k<position))
        {
            k++;
            q=p;
            p=p->next;
        }
        q->next=newNode;//more optimum way to do this
        newNode->next=p;

    }
}








int main()
{
    printf("Hello world!\n");
    return 0;
}
