#include <bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
using namespace std;

class Node
{
public:
	int data;
	Node* prev;
	Node* next;

	Node()
	{
		this->data = 0;
		this->prev = NULL;
		this->next = NULL;
	}
	Node(int val)
	{
		this->data = val;
		this->prev = NULL;
		this->next = NULL;
	}
};
int lengthOfNode(Node* & head)
{
	int len = 0;
	Node* temp = head;
	while(temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return len;
}
void printNode(Node* &head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void printNodeBackwarad(Node* &tail)
{
	Node* temp = tail;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<endl;
}
void insertHead(Node* &head, Node* &tail, int data)
{
	Node* newNode = new Node(data);
	// LL is empty
	if(head == NULL)
	{
		head = newNode;
		tail = newNode;
		return;
	}
	// LL is non-empty
	else
	{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
		return;
	}
}
void insertTail(Node* &head, Node* &tail, int data)
{
	Node* newNode = new Node(data);
	// LL is empty
	if(head == NULL)
	{
		head = newNode;
		tail = newNode;
		return;
	}
	// LL is non-empty
	else
	{
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
		return;
	}
}
void insertAtPosition(int position, Node* &head, Node* &tail, int data)
{
	Node* newNode = new Node(data);
	// LL is empty
	if(head == NULL)
	{
		head = newNode;
		tail = newNode;
		return;
	}
	// LL is non-empty
	if(position == 0)
	{
		insertHead(head,tail,data);
		return;
	}
	int len = lengthOfNode(head);
	if(position >= len)
	{
		// newNode->prev = tail;
		// tail->next = newNode;
		// tail = newNode;
		// return;
		insertTail(head,tail,data);
	}
	else
	{
		int i = 0;
		Node* pastNode = head;
		while(i<position-1)
		{
			pastNode = pastNode->next;
			i++;
		}
		Node* currNode = pastNode->next;
		// step 3
		pastNode->next = newNode;
		// step 4
		newNode->prev = pastNode;
		// step 5
		currNode->prev = newNode;
		// step 6
		newNode->next = currNode;
		return;
	}
}
void deleteAtPosition(int position, Node* &head, Node* &tail)
{
	// LL is empty
	if(head == NULL)
	{
		cout<<"Can't delete, LL is empty"<<endl;
		return;
	}
	// LL is non-empty
	Node* ptr = head;
	// single node
	if(head->next == NULL)
	{
		head = NULL;
		tail = NULL;
		delete ptr;
		return;
	}
	// at beginning
	if(position == 0)
	{
		head = head->next;
		head->prev = NULL;
		ptr->next = NULL;
		delete ptr;
		return;
	}
	int len = lengthOfNode(head);
	// at last
	if(position >= len || position == len-1)
	{
		ptr = tail;
		tail = tail->prev;
		tail->next = NULL;
		ptr->prev = NULL;
		delete ptr;
		return;
	}
	// any position
	else
	{
		int i = 0;
		while(i!=position)
		{
			ptr = ptr->next;
			i++;
		}
		Node* pastNode = ptr->prev;
		Node* postNode = ptr->next;
		pastNode->next = postNode;
		postNode->prev = pastNode;
		ptr->prev = NULL;
		ptr->next = NULL;
		delete ptr;
		return;
	}
}
int main()
{
	// creating node 
	Node* first = new Node(10);
	Node* second = new Node(20);
	Node* third = new Node(30);
	Node* fourth = new Node(40);
	Node* last = new Node(50);

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = last;

	last->prev = fourth;
	fourth->prev = third;
	third->prev = second;
	second->prev = first;


	// printNode(first);
	// printNodeBackwarad(last);
	// cout<<lengthOfNode(first)<<endl;

	// insertHead(first,last,5);
	// printNode(first);

	// Node* head = NULL;
	// Node* tail = NULL;

	// insertHead(head,tail,10);
	// printNode(head);

	// insertTail(first,last,100);
	// cout<<"Insert at Tail: "<<endl;
	// printNode(first);
	// printNodeBackwarad(last);

	Node* head = NULL;
	Node* tail = NULL;

	// insertTail(head,tail,100);
	// printNode(head);

	// insertAtPosition(2,head,tail,101);
	// printNode(head);
	// insertAtPosition(3,first,last,101);
	printNode(first);

	// deleteAtPosition(4,head,tail);
	// deleteAtPosition(0,first,last);
	// printNode(first);
	deleteAtPosition(4,first,last);
	printNode(first);

}

