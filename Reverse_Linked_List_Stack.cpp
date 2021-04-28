//Reverse using stack of STL
#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* head;
void insert(int x){
    Node* temp = new Node();
	temp->data = x;
	temp->link = NULL;
	if(head!=NULL){
		temp->link=head;
	}
	head = temp;
}
void print(){
    Node* temp;
	temp = head;
	cout<<"\nElements in list: ";
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp=temp->link;
	}
}
void reverse(){
    stack<Node*> S;
    Node* temp = new Node();
    temp = head;
    while(temp!=NULL){
        S.push(temp);
        temp = temp->link;
    }
   temp = S.top();
   head = temp;
   S.pop();
   while(!S.empty()){
       temp->link = S.top();
       S.pop();
       temp = temp->link;
   }
   temp->link = NULL;
}
int main(){
    head = NULL;
    insert(4); 
    insert(5); 
    insert(6); 
    insert(5); 
    insert(7); 
    cout<<"\nBefore Reverse: ";
    print();
    reverse();
    cout<<"\nAfter reverse: ";
    print();
}