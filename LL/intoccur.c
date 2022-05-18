  int count(struct node* head, int search_for)
    {
        node *temp=head;
        int c=0;
        while(temp!=0)
        {
            if(temp->data==search_for){
                c++;
         }
          temp=temp->next;
        }
        return c;
    //add your code here
    }