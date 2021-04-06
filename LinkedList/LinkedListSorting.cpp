#include <iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *next;//TO point to next node, null otherwise
		//Constructor
		Node (int d, Node *n=NULL){
			data = d;
			next = n;
		}
};


class LinkedList{
	Node *first, *last;
public:
	LinkedList(){	first = new Node(0);	last = NULL;	}
	void addNodeAtStart(int d){
		Node *newN = new Node (d);
		newN -> next = first -> next;
		first -> next = newN;
		if (last == NULL)	last = newN; 
	}
	void addNodeAtEnd(int d){
		if (last == NULL)	addNodeAtStart(d);
		else{
			last -> next = new Node (d);
			last = last -> next;
		}
	}
	void swap(Node *t1, Node *t2){
		int temp = t1->data;
		t1->data = t2->data;
		t2->data = temp;
	}
	void bubbleSort(){
		Node *t1, *t2;
		for (t1=first->next;t1->next!=NULL;t1=t1->next)
			for (t2=first->next;t2->next!=NULL;t2=t2->next)
				if (t2->data > t2->next->data)
					swap(t2, t2->next);
	}
	void selectionSort(){
		Node *t1, *t2, *minNode;
		for (t1=first->next;t1->next!=NULL;t1=t1->next){
			minNode = t1;
			for (t2=t1->next;t2!=NULL;t2=t2->next)
				if (t2->data < minNode->data)
					minNode = t2;
			if (minNode != t1)
					swap(t1, minNode);
		}
	}
	void show(){
		for ( Node *t = first -> next ; t != NULL ; t = t -> next )
			cout << t -> data << ' ';
		cout << '\n' ;
	}
};

int main(){
	LinkedList list;
	list.addNodeAtStart(23);
	list.addNodeAtStart(31);
	list.addNodeAtStart(45);
	list.addNodeAtStart(13);
	list.show();
	list.addNodeAtEnd(73);
	list.addNodeAtEnd(61);
	list.show();
	//list.bubbleSort();
	list.selectionSort();
	list.show();
	return 0;
}
