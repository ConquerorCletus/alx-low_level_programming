#0x17-doubly linked lists
A doubly linked list is a linked list that has a pointer to the next node and the previous node. That means you can traverse the linked list in both a forward and a backward way.
------
####
	struct node{
		int data;
		struct node* next;
		struct node* prev;
		}

As shown above the node has both pointers for next and previous data in the list.

### Resources 
- [doubly linked list](https://www.youtube.com/watch?v=k0pjD12bzP0)
