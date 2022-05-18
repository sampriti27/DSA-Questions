Node* deleteMid(Node* head)
{
   
    
    if(head == NULL || head->next == NULL) return head;
    Node* fast=head;
    Node* slow=head;
    Node* prevnode = NULL;
    while(fast != NULL && fast->next != NULL)
    {
        prevnode=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prevnode->next=slow->next;
    return head;
    // Your Code Here
}