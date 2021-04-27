// We will be performing push and pop at the beginning of the list as it is cost efficient and not the end which is expensive.
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
struct Node* top; // We can also name this head
void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}
void pop(){
    Node* temp = new Node;
    temp = top;
    top = temp->link;
    delete temp;
}
void print_top(){
    cout<<"Top element is "<<top->data<<"\n";
}
void print(){
    Node* temp = new Node();
    temp = top;
    cout<<"\n Elements in Stack are : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<"\n";
}
int main(){
    top = NULL;
    push(5); print();
    push(10); print();
    push(15); print();
    print_top();
    pop(); print();
    print_top();
    
}