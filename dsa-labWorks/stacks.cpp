#include <iostream>
using namespace std;
#define SIZE 5
int main(){
	int stack[SIZE];
	int data, choice;
	int top = 0;
	while (1){
		cout<<"\n 1.Push";
		cout<<"\n 2.Pop";
		cout<<"\n 3.View / Display";
		cout<<"\n 4.Exit";
		cout<<"\n Enter your choice:\t";
		cin>>choice;
		switch(choice){
			case 1:
				if (top<SIZE){
					cout<<"\nEnter any element:\t";
					cin>>data;
					stack[top] = data;
					top++;
				}
				else{
					cout<<"\n Stack is full.";
				}
				break;
				
			case 2:
				if (top>0){
					top--;
					cout<<"\nElement poooped is:\n"<<stack[top];
				}
				else{
					cout<<"\n Stack is Empty.";
				}
				break;
			case 3:
				if (top == 0){
					cout<<"\n Stack empty.";
				}
				else{
					int i ;
					for(i=top-1;i>=0;i--){
						cout<<stack[i]<<"\n";
					}
				}
				break;
			case 4:
				exit(0);
			default:
				cout<<"\n Select option from 1 to 4 only not others!!";			
				
		}
	}
	return 0;
}
