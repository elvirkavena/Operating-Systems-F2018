#include <stdio.h> 
#include <stdlib.h>

struct node 
{ 
  int data; 
  struct node *next; 
} node; 

struct node insert_node(struct node* head, int value) 
{ 
  struct node* nodeNew ,*dop;  
  nodeNew = (struct node*)malloc(sizeof(struct node));
  nodeNew->next = NULL; 
  nodeNew->data = value; 
  if(head == NULL) 
  { 
    head = nodeNew ; 
  } 
  else{ 
    dop = head; 
    while(dop->next != NULL)  
      dop = dop->next; 
    dop->next = nodeNew; 
  } 
} 

struct node delete_node (struct node *head) 
{ 
  struct node *dop; 
  if (head==NULL) 
  { 
    printf("Sorry, head is NULL, you can not delete nothing.");
  } 
  else if(head->next==NULL) 
  { 
    head=NULL; 
  } 
  else 
  { 
    int i=0; 
    dop = head; 
    while(dop->next != NULL) 
    { 
      dop = dop->next; 
      i++; 
    } 
    dop=head; 
    for (int j =0; j<i-1; j++) 
    { 
      dop = dop->next; 
    } 
    dop->next=NULL; 
  } 
}
void print_list(struct node *head)
{
  while (head != NULL)
  {
     printf(" %d ", head->data);
     head = head->next;
  }
}
int main()
{
  struct node* head = (struct node*)malloc(sizeof(struct node));
  head->next=NULL;
  head->data=1;
  insert_node(head, 5);
  insert_node(head, 2);  
  delete_node(head);
  print_list(head);

  return 0;
}
