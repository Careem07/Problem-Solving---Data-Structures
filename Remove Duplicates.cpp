SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    
SinglyLinkedListNode* firstTemp = llist;
SinglyLinkedListNode* secTemp = llist;

while (firstTemp !=NULL) {
 secTemp = firstTemp->next;    //j = i + 1
 
 while (secTemp != NULL) {
     
     if (secTemp ->data == firstTemp->data) {
        
         firstTemp->next = secTemp->next;
          secTemp = secTemp->next;
     }
     else {
         break;
     }
 }
    firstTemp = firstTemp->next; //i++
}
    
return llist;
}