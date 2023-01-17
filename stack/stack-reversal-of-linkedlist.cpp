
void Reverse(){
    if(head == NULL)return;
    stack<struct Node*> S;
    Node* temp = head;
    while(temp != NULL){
        S.push(temp);
        temp = temp->link;
    }
    temp = S.top(); head = temp;
    S.pop();
    while(!S.empty()){
        temp->link = S.top();
        S.pop();
        temp = temp->link;
    }
    temp->link = NULL;
}