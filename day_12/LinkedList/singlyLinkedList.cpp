// #include <iostream>
// using namespace std;

// class Node
// {

//     //  create a new node-->
//     int value;
//     Node *next;
//     Node(int value)
//     {
//         this->value = value;
//         this->next = nullptr;
//     }
// };

// int main()
// {

//     return 0;
// }
//============================================
// insert at the beginning

// point the next of the new node to the current head . update the head to the new node
//// Node* newNode = new Node(val); <---- // create a new node
// newNode->next = this-> head;
// this-> head = newNode

// After the biginnig
//=============================
// insertion at the end;
// create a new node
// traverse the list to find the last node
// point the next of the last node to the new node


/*
void insertAtend(int val)
{
    Node *newNode = new Node(val);
    if (this->head == nullptr) // list is empty
    {
        this->head = newNode;
        return;
    }
    Node *temp = this->head;
    while (temp->new != nullptr)
    { // traverse to the last node
    create a temp node->
    temp-> temp->next;
    }
    temp-> next = newNode;
}
*/

//===========================================

// insert at a given position
// create a new node

// traverse the list to the node just before the desire position
// point the next of new node to the current node at the position
// update the next of the previous to the new node

// when i am insert in 3 
// so go to the previous 3-1 = 2 
// and then 2 F 3 between 2 and 3 is F

// code

// void insertAtPosition ( int val, int pos){
//     Node* newNode = new Node(val);
//     if(pos ==1) // insert at the head
//     {
//         newNode-> this->head;
//         this-> head = newNode;
//         return;

//     }

//     Node* temp = this->head;
//     for(int i =1; i<pos-1; i++){
//         // iterart ho raha hai to new temp var lenge
        
//         if(temp ==nullptr) // postion is out of bound
//         {
//             return;
//         }
//         temp-> temp->next;

//     }
//     newNode-> next = temp->next;
//     temp-> next = newNode;


//=============================
// delete from the end
// traverse the list tothe second last node
// delete the last node by updating the next of the second last node to nullptr


// void deleteFromEnd(){
//     if(this-> head == nullptr) // list is empty
//     {
//         return ;
//     }

//     if(this->head->next == nullptr){ // only one element
// delete this-> head;
// this->head = nullptr;
// return;
//     }
//     Node* temp = this->head;
//     while(temp-> next->next!= nullptr) // traverse and create the temp and phle me le aayenge
//     {
//         temp = temp->next
//     }
//     delete temp->next; // delete kiye temp ke next ko
//     temp-> next = nullptr; // after the deletion second last element ko nullptr ko de diye


// }

// =============================================================

// delete from a given position
// traverse the list to the node just before the desired position
// update the next pointer of the previous node to skip the node to be deleted
// delete the node

// code------>

// voide deleteAtposition(int pos){
//     if(this-> head ==nullptr) // list is empty
//     {
//         return;
//     }
//     if(pos ==1){
//         Node* temp = this-> head;
//         this-> head = this->head->next;
//         delete temp;
//         return;
//     }

//     Node* temp = this-> head;
//     for(int i =1; i<pos-1; i++){
//         if(temp ==nullptr || temp->next ==nullptr){
//             return;
//         }
//         temp = temp-> next;


//     }
//     //at this point ., temp is the (pos-1)th node
//     Node* nodeTodelete = temp->next; // the node to be deleted
//     temp->next = temp->next->next; // bypass the node to be deleted
//     delete nodeTodelete; // delete the node

// }

// ======================================================================================>
// traverse of a linked list
// start from the head
// continue to the next node untill you reach the end of the list

// print the linked list

// void printList(){
//     // create a new node
//     Node* temp = this->head; // start from the head
  //    also use Node* temp = head
    // while(temp != nullptr){  // satrt traverse till the end when its not getting null point
//     cout<<temp->data<<"->";
//     temp = temp->next;

//     }
//     cout<<"NULL"<<endl;

// }

//searching the key

// void printList(){
//     Node * temp =head;
//     while(temp != nullptr){
//         if(temp-> data ==key ) // element fount
//         {
//             return true;
//         }

//         temp = temp->next
//     }
//     return false;

// }