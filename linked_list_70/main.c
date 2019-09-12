#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head, *curr = NULL, *temp= NULL;

void create();
void display();
void insert_pos();
void append();
void push();
void delete_node();
void pop_first();
void pop_end();
void search_node();
void sum_nodes();

int main()
{
    int s=1;
    printf("\n\t\tLINKED LIST MENU ::\n");
    while(s!=0)
        {
            printf("\n\n\n0. to Exit\n");
            printf("1. Create linked list\n");
            printf("2. Display\n");
            printf("3. insert\n");
            printf("4. append\n");
            printf("5. push\n");
            printf("6. delete\n");
            printf("7. delete first node\n");
            printf("8. delete last node\n");
            printf("9. search for a node\n");
            printf("10. sum of all nodes\n");

            printf("press the option number!");
            scanf("%d",&s);
            switch (s)
            {
            case 0:
                {
                    exit(0);
                }
            case 1:
                {
                   create();
                   break;
                }
            case 2:
                {
                    display();
                    break;
                }
            case 3:
                {
                    insert_pos();
                    break;
                }
            case 4:
                {
                    append();
                    break;
                }
            case 5:
                {
                    push();
                    break;
                }
            case 6:
                {
                    delete_node();
                    break;
                }
            case 7:
                {
                    pop_first();
                    break;
                }
            case 8:
                {
                    pop_end();
                    break;
                }
            case 9:
                {
                    search_node();
                    break;
                }
            case 10:
                {
                    sum_nodes();
                    break;
                }
            }

        }

    return 0;
}

void create()
{
    int n;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        curr = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&curr->data);
        curr->next = NULL;
        if(i==0)
        {
            head = temp = curr;
        }
        else
        {
            temp->next = curr;
            temp = curr;
        }
        temp->next= NULL;
    }
}

void display()
{
    struct node* t;
    t = head;
    while(t!=NULL)
    {
        printf("%d=>",t->data);
        t=t->next;
    }

}

void insert_pos()
{
    struct node *custom,*t;
    int pos, i;
    printf("enter the position at which you want to insert the node");
    scanf("%d",&pos);
    printf("enter the data you want to enter !");
    t=head;
    for(i=1;i<pos-1;i++)
    {
        t=t->next;
    }

    custom = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&custom->data);
    custom->next = t->next;
    t->next=custom;
}

void append()
{
    struct node *t, *newNode = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter the node data you want to append:\n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    t = head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=newNode;
}


void push()
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter the node data you want to push:\n");
    scanf("%d",&newNode->data);
    newNode->next = head;
    head = newNode;
}

void delete_node()
{
    struct node *t1, *t2;
    t1 = head;
    int n;

    printf("enter the position of node :");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        t2 = t1;
        t1 = t1->next;

    }
    t2->next = t1->next;
    free(t1);

}

void pop_first()
{
    struct node *t;
    t = head;
    t->next = head;
    free(t);
}

void pop_end()
{
    struct node *t1, *t2;
    t1 = head;
    while(t1!=NULL)
    {
        t1 = t1->next;
    }

    t2 = t1->next;
    free(t2);

    t1->next = NULL;
}

void search_node()
{
    int search_data, count=1;
    printf("enter the data you want to search for:\n");
    scanf("%d",&search_data);
    struct node *t;
    t = head;
    while(t->data!=search_data)
    {
        t = t->next;
        count++;
    }
    printf("the data is in node-> %d",count);
}


void sum_nodes()
{
    int sum=0;
    struct node *t;
    t = head;
    while(t->next!=NULL)
    {
        t = t->next;
        sum += t->data;
    }
    printf("The sum of the node datas is :%d",sum);

}
