nt isLeaf(Node *node)
{
if (node == NULL)
return 0;
if (node->lptr == NULL && node->rptr == NULL)
return 1;
return 0;
}

void onlyLeft(Node * a)
{
if( a==NULL)
return;
if(isLeaf(a->lptr))
printf("\%c,",a->lptr->data);
order(a->lptr);
order(a->rptr);
}