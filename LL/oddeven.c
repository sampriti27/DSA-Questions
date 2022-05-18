int isLengthEvenOrOdd(struct Node* head)
{
    struct Node* temp;int count=0;
    temp=head;
    while(temp!=0){
        count++;
        temp=temp->next;
        
        }
        if(count%2==0)
        return 0;
        else
        return 1;
        
        //Code here
}