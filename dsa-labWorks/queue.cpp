#include <iostream>
using namespace std;
#define SIZE 10

int queue[SIZE], front = - 1, rear = - 1; //global variables fron and rear set to -1
void Enqueue() { //inserting function for quwuw
   int val;
   if (rear == SIZE - 1) //condition to check queue overflow
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1) //if not then insert data
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;//rear for data in/Enqueue and front for data out/Dequeue 
   }
}
void Dequeue() { //remove the data from front of the queue
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;//always delete from the front of the queue
      front++;
   }
}
void Display() {
   if (front == - 1){ //check if the queue underflow or not
   	cout<<"Queue is empty"<<endl;
	}
   else {
      cout<<"Queue elements are : "; //show the data within the queue
      for (int i = front; i <= rear; i++){
      	cout<<queue[i]<<" ";
	  }
      cout<<endl;
   }
}
int main() {
   int choice;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>choice;
      switch (choice) {
         case 1: Enqueue();
         break;I
         case 2: Dequeue();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Choose from 1-4 only"<<endl;
      }
   } while(choice!=4);
   return 0;
}
