#include<iostream>
using namespace std;
#define max_size 105
class Stack{
    int top;
    int A[max_size];
    public:
        Stack(){
            top = -1;
        }
        void push(int x){
            top++;
            if(top >= max_size){
                cout<<"\n Stack is full";
            }
            else{
                A[top] = x;
            }
        }
        void pop(){
            if(top == -1){
                cout<<"\n Stack is already empty ";
            }
            top--;
        }
        void top_print(){
            if(top == -1){
                cout<<"\n Stack is empty ";
            }
            cout<<"\n Top element is "<<A[top];
        }
        void print(){
            int i;
            cout<<"\n Stack elements are: ";
            for(i=0;i<=top;i++){
                cout<<A[i]<<" ";
            }
            cout<<"\n";
        }
};
int main(){
    Stack S;
    int quit = 0;
    int option;
    int x;
    while(quit==0){
        cout<<"\n Menu: ";
        cout<<"\n 1. Push";
        cout<<"\n 2. Pop";
        cout<<"\n 3. Print Top";
        cout<<"\n 4. Exit";
        cout<<"\n Enter the option number you want to perform: ";
        cin>>option;
        if(option == 1){
            cout<<"\n Enter element to push: ";
            cin>>x;
            S.push(x);
            S.print();
        }
        else if(option == 2){
            S.pop();
            cout<<"\n An element has been popped!";
            S.print();      
        }
        else if(option == 3){
            S.top_print();
            
        }
        else{
            quit = 1;
        }
    }
   
}