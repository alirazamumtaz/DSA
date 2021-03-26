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

	void insertAt(int pos){
		
	}
	
	void show(){
		for ( Node *t = first -> next ; t != NULL ; t = t -> next )
			cout << t -> data << ' ';
		cout << '\n' ;
	}
};

int main(int argc, char const *argv[]){

	return 0;
}