bool areIdentical(struct Node *head1, struct Node *head2)
{
 struct Node *temp1,*temp2;
 
    temp1=head1;
    temp2=head2;
     if (temp1==0 && temp2==0)
     return true;
    
     while(temp1!=0 && temp2!=0)
     {
         if(temp1->data != temp2->data)
         {
             return false;
            
         }
         else{
             temp1=temp1->next;
             temp2=temp2->next;
         }
     }
     return (temp1 == NULL && temp2 ==NULL);//code here
}