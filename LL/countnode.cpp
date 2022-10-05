int countNodesinLoop(struct Node *head)
{
  Node *slow=head;
  Node *fast=head;
  int count =1;
  while(fast!=0 && fast->next!=0)
  {
      slow=slow->next;
      fast=fast->next->next;
      if (slow==fast)
      {
          slow=slow->next;
          while(slow!=fast)
          {   
            // plese help me out of this
          }
          return count;
      }
  }
     
      return 0;
 
}
