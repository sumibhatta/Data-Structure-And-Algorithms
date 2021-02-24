#include <iostream>
using namespace std;

#define MAX 10

struct queue{
    int qu[MAX];
    int front;
    int rear;
}q1;


void enqueue(){ //push the value to the queue only if queue is not full
if(q1.rear == MAX-1){
    cout<<endl<<"Queue is full"<<endl;
}else{
int item;
cout<<endl<<"Enter the value to be pushed:: ";
cin>>item;
cout<<endl<<item<<" pushed into queue"<<endl<<endl;
q1.rear++;
q1.qu[q1.rear] = item;
}

}


void dequeue(){ //delete from the queue
if(q1.rear<q1.front){
    cout<<"queue is empty"<<endl;
} else{
    int item;
    item = q1.qu[q1.front];
    q1.front++;
    cout<<endl<<"popped element= "<<item<<endl<<endl;
}
}

void display(){ //display the values

int i;
if(q1.rear<q1.front){
    printf("Queue is empty\n");
}else{
    for(i=q1.front;i<=q1.rear;i ++){
        printf("%d\t", q1.qu[i]);
    }
}
}

int main(){
q1.front = 0;
q1.rear = -1;
int num;


do{
cout<<"Choose the number. What do you want to do?"<<endl<<"1 - Enqueue"<<endl<<"2 - Dequeue "<<endl<<"3 - DISPLAY "<<endl<<"4 - EXIT "<<endl<<endl;
cin>>num;
switch(num){
case 1:
    enqueue();
    break;

case 2:
    dequeue();
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
