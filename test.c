#include <stdio.h>
#include <stdlib.h>


struct node_st
{
	int data;
	struct node_st *next;

};


struct node_st *sorted_insert_list(int num, struct node_st *list)
{
	struct node_str *node = list;
	struct node_st *ndata;
	ndata = (struct node_st *)malloc(sizeof(struct node_st));
	ndata->data = num;
	ndata->next = NULL;
	if(!node)
	{
		while(!(node->next))
		{
			if(node->next->data > ndata->data)
			{
				ndata->next = node->next;
				node->next = ndata;
				return list;
			}
			node = node->next;
		}
		node->next = ndata;
		return list;
	}
	return ndata;
}


int main(void)
{	
		
		return EXIT_SUCCESS;
}


