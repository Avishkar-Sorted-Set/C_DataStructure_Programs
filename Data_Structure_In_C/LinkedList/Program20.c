//Reverse singly Circular LinkedList
#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
	int data;
	struct Demo* next;
}Demo;
struct Demo* head =NULL;
struct Demo* createNode() {
	struct Demo* newnode = (struct Demo*)malloc(sizeof(struct Demo));   
	printf("Enter Node\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void addNode() {
	struct Demo* newnode = createNode();
	if(head==NULL) {

		head = newnode;
		newnode->next = head;
	}else {
		struct Demo* temp = head;
		while(temp->next!=head) {
			temp = temp->next;
		}
		temp->next = newnode;
		temp->next = head;
	}
}
int countNodes() {		
	struct Demo* temp = head;
	int count=0;
	while(temp->next!=NULL) {
		count++;
		temp=temp->next;
	}
	return count;
}
void printLL() {
	struct Demo* temp = head;
	while(temp->next!=head) {
		printf("| %d |->",temp->data);
		temp=temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void ReverseLL() {
        if(head == NULL) {
                printf("List is empty\n");
        }
        Demo* prv = NULL;
        Demo* temp = head;
        Demo* nxt;
        while(temp!=NULL) {
                nxt = temp -> next;
                temp-> next = prv;
                prv = temp;
                temp = nxt;
        }
        head = prv;
	while(prv->next!=NULL) {
		prv = prv->next;
	}
	prv->next = head;
}	
void main() {
	int n;
	printf("Enter No of Nodes You Want\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		addNode();
	}

	ReverseLL();
	printLL();
}