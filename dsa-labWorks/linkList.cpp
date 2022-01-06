#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class linkedList{	
	public:
		Node* head;
		linkedList(){
			head = NULL;
		}	
};
void atFirst(int value){
	Node* n1 = new Node();
	n1->data = value;
	n1->next = head;
	head = n1;
}
void display(){
	Node* temp = head;
	if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
}
int main() {
	  linkedList MyList;

	  //Add three elements at the start of the list.
	  MyList.atFirst(10);
	  MyList.atfirst(20);
	  MyList.atFirst(30);
	  MyList.atFirst(88);
	  retuen 0;

}
