#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node* NodeType;
int main(int argc, char** argv) {
	NodeType start;
	start = new Node;
	NodeType n1  = new Node;
	NodeType n2 = new Node;
	start->data = 20;
	start->next = n1;
	n1->data = 50;
	n1->next = n2;
	n2->data = 60;
	n2->next = NULL;
	NodeType temp;
	temp = start;
	while (temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL";
	return 0;
}
