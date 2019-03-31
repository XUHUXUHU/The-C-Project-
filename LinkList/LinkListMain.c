#include <stdio.h>
#include "LinkListFunction.h"

int main(){
	struct link *head = NULL;
 	head = AppendNode(head,2);
	head = AppendNode(head,4);
	head = AppendNode(head,23);
	head = AppendNode(head,21);
	head = AppendNode(head,7);
	head = AppendNode(head,89);
	head = AppendNode(head,4);

	SortingForLinkList(head);

	DisplayNode(head);

	DeleteMemory(head);

	return 0;
}
