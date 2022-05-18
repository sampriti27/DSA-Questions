
struct Node* reverseDLL(struct Node * head)
{
    struct Node *tail=head;
    struct Node *current=head;
    struct Node *nextnode=0;
    while(tail->next!=0)
    {
        tail=tail->next;
    }
      while(current!=0){
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
  
    head=tail;
    
     return head;
    }