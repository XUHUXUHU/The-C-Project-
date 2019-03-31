#include <stdio.h>
#include <stdlib.h>
#include "LinkListFunction.h"

struct link *AppendNode(struct link *head,int data){
	struct link *p = NULL,*pr = head;
	p = (struct link *)malloc(sizeof(struct link));
	if(p == NULL){
		printf("No enough memory to allocate! \n");
		exit(0);
	}
	if(head == NULL){
		head == p;
		return head;
	}else{
		while(pr->next != NULL){
			pr -> next;
		}
		pr->next = p;
	}
	p->data = data;
	p->next = NULL;
	return head;
}

void DisplayNode(struct link *head){
	struct link *p = head;
	int j = 1;
	p = p->next;
	while(p != NULL){
		printf("%5d%10d\n",j,p->data);
		p = p->next;
		j++;
	}
}

void DeleteMemory(struct link *head){
	struct link *p = head,*pr = NULL;
	while(p != NULL){
		pr = p;
		p = p->next;
		free(pr);
	}

}

struct link *DeleteNode(struct link *head,int nodeData){
	struct link *p = head,*pr = head;
	if(head = NULL){
		printf("Linked Table is empty! \n");
		return (head);
	}
	while(nodeData != p->data && p->next != NULL){
		pr = p;
		p = p->next;
	}
	if(nodeData == p->data){
		pr->next = p->next;
		free(p);
	}else{
		printf("This Node has not been found!! \n");
	}
	return head;
}

struct link *InsertNode(struct link *head,int nodeData){
	struct link *pr =head,*p = head,*temp = NULL;
	p = (struct link *)malloc(sizeof(struct link));
	if(p == NULL){
		printf("No enough memory! \n");
		exit(0);
	}
	if(head == NULL){
		head = p;
	        return head;	
	}else{
		p->next = NULL;
		p->data = nodeData;
		while(pr->data < nodeData && pr->next != NULL){
			temp = pr;
			pr = pr->next;
		}
		if(pr->data >= nodeData){
			if(pr == head){
				p->next = head;
				head = p;
			}else{
				pr = temp;
				p->next = pr->next;
				pr->next = p;
			}
		}else{
			pr->next = p;
		}
	}
	return head;
}

struct link *SortingForLinkList(struct link *head){
	struct link *p = head,*pr = NULL;
	int t;
	while(p){
		pr = p->next;
		while(pr != NULL){
			int a = p->data;
			int b = pr->data;
			if(a>b){
				t = p->data;
				p->data = pr->data;
 				pr->data = t;	
			}
			pr = pr->next;
		}
		p = p->next;
	}

}

void struct link *AddSerialForLinkList(struct link *head){
	struct link *p = head;
	int i=0;
	while(p != NULL){
		p->index = i;
		i++;
		p=p->next;
	}
}
