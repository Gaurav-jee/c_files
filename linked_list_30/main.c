#include<stdio.h>
#include<stdlib.h>

//1
typedef struct node{
	int value;
	struct node *next;
}node;


int main(){
	int length,i;
	//2
	printf("Enter size of the list: ");
	scanf("%d",&length);

	//3
	node *headNode, *currentNode, *temp;

	//4
	for(i=0 ; i<length; i++)
        {
            currentNode = (node *)malloc(sizeof(node));
    //6
        printf("Enter element %d: ",(i+1));
        scanf("%d", &currentNode->value);
		if(i==0)
            {
			headNode = temp = currentNode;
            }
		else
            {
			temp->next = currentNode;
			temp = currentNode;
            }
	 }
    temp->next = NULL;

	//traversing
	temp = headNode;
	printf("Iterating through the elements of the linked list : \n");
	while(temp != NULL){
		//12
		printf("%d \n",temp->value);
		temp = temp -> next;
	}
}
