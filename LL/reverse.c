struct Node* reverseList(struct Node *head)
    {
        struct Node *prevnode,*currentnode,*nextnode;
        prevnode=0;
        if(head==0)
        return head;
        currentnode=nextnode=head;
        while(nextnode!=0)
        {
            nextnode=nextnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;
        return head;
    }