#include <iostream>
#include "list.cpp"

using namespace std;

int main()
{
	printf("Starting tests...\n");
	struct nodeStruct *head = NULL;
	struct nodeStruct* firstNode = List_createNode(0);
	List_insertHead(&head, firstNode);	
	struct nodeStruct* lastNode = List_createNode(1);
	List_insertTail(&head, lastNode);
	lastNode = List_createNode(2);
	List_insertTail(&head, lastNode);
	lastNode = List_createNode(3);
	List_insertTail(&head, lastNode);
	lastNode = List_createNode(3);
	List_insertTail(&head, lastNode);
	List_printNodes(&head);

	return 0;
}

