#include <stdio.h>

struct listnode
	{
		char *item;
		struct listnode *next;
	};

int main(int argc, char *argv[])
{
	struct listnode node2 = {"world", NULL};
	struct listnode node1 = {"hello", &node2};
	struct listnode *head = &node1;

	struct listnode *lp;

	for(lp = head; lp != NULL; lp = lp->next)
		printf("%s\n", lp->item);


	return 0;
}
