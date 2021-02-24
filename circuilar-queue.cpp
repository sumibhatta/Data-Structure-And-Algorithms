#include <iostream>
using namespace std;

#define MAX 5

struct queue{
    int qu[MAX];
    int front;
    int rear;
}qc;


void enqueue(){ //push the value to the queue only if queue is not full
if((qc.rear+1)%MAX == qc.front){
    cout<<endl<<"Queue is full"<<endl;
}else{
int item;
cout<<endl<<"Enter the value to be pushed:: ";
cin>>item;
cout<<endl<<item<<" pushed into queue"<<endl<<endl;
qc.rear = (qc.rear+1)%MAX;
qc.qu[qc.rear] = item;
}

}


void dequeue(){ //delete from the queue
if(qc.rear == qc.front){
    cout<<"queue is empty"<<endl;
} else{
    int item;
    item = qc.qu[(qc.front+1)%MAX];
    qc.front = (qc.front+1)%MAX;
    cout<<endl<<"popped element= "<<item<<endl<<endl;
}
}

void display(){ //display the values

int i;
if(qc.rear==qc.front){
    printf("Queue is empty\n");
}else{
    for(i=(qc.front+1)%MAX;i!=qc.rear;i=(i+1)%MAX){
        printf("%d\t", qc.qu[i]);
    }
    printf("%d\t",qc.qu[qc.rear]);

}
}

int main(){
qc.front = MAX-1;
qc.rear = MAX-1;
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
