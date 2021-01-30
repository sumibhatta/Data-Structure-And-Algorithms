#include <iostream>
using namespace std;

#define MAX 10

struct stack{
    int arr[MAX];
    int top;
}stack1;

void push(){ //push the value to the stack only if stack is not full
if(stack1.top == MAX-1){
    cout<<endl<<"Stack is full"<<endl;
}else{
int item;
cout<<endl<<"Enter the value to be pushed:: ";
cin>>item;
cout<<endl<<item<<" pushed into stack"<<endl<<endl;
stack1.top++;
stack1.arr[stack1.top] = item;
}

}


void pop(){ //pop from the stack
if(stack1.top == -1){
    cout<<"Stack is empty"<<endl;
} else{
    int item;
    item = stack1.arr[stack1.top];
    stack1.top--;
    cout<<endl<<"popped element= "<<item<<endl<<endl;
}
}

void display(){ //display the values
    if( stack1.top == -1){
     cout<<endl<<"Stack is empty"<<endl<<endl;
    } else{
        cout<<endl<<"Your Stack has: "<<endl;
        for(int i = stack1.top; i>=0;i--){
            cout<<stack1.arr[i]<<endl;
        }

    }
}
int main(){
stack1.top = -1;
int num;


do{
cout<<"Choose the number. What do you want to do?"<<endl<<"1 - PUSH "<<endl<<"2 - POP "<<endl<<"3 - DISPLAY "<<endl<<"4 - EXIT "<<endl<<endl;
cin>>num;
switch(num){
case 1:
    push();
    break;

case 2:
    pop();
    break;

case 3:
    display();
    break;

case 4:
    exit(0);
    break;

default:
    cout<<"Input Error, Choose options from 1-3 only"<<endl;
    break;

}
} while(num != 4);
return 0;
}
