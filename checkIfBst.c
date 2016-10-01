#include<stdio.h>
#include<malloc.h>
static int c=0;
typedef struct Node
{
	int data;
	struct Node *lptr,*rptr;
}Node;
int min=0,max=999;
int checkBST(Node *root,int min,int max)
{

		if (root != NULL) {
			if (root->data > max || root->data < min) {
				return 0;
			}
			return checkBST(root->lptr, min, root->data)
					&& checkBST(root->rptr, root->data, max);
		} else {
			return 1;
		}
	
	
}
Node* Tree(int data)
{
	Node* p=(Node *)malloc(sizeof(Node));
	p->data=data;
	p->lptr=NULL;
	p->rptr=NULL;
	return p;
	
}
int main()
{
	int c;
	Node* root=Tree(10);
	root->lptr=Tree(5);
	root->lptr->rptr=Tree(8);
	root->rptr=Tree(99);
	root->rptr->lptr=Tree(102);
	c=checkBST(root,min,max);
	if(c==1)
		printf("Its  a BST\n");
	else
		printf("Its not  a BST\n");
	return 0;
	
}
