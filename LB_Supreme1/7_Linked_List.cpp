#include <bits/stdc++.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node* bottom;	// Qn. 26
	Node* random;	// Qn. 27

	Node()
	{
		this->data = 0;
		this->next = NULL;
		this->bottom = NULL;
		this->random = NULL;
	}
	Node(int val)
	{
		this->data = val;
		this->next = NULL;
		this->bottom = NULL;
		this->random = NULL;
	}
	// ~Node()
	// {
	// 	delete this;
	// }
};

int lenOfNode(Node* &head)
{
	int len = 0;
	Node* temp = head;
	while(temp!=NULL)
	{
		temp = temp->next;
		len++;
	}
	return len;
}
void printNode(Node* &head)
{
	// Node* ptr = new Node();
	// ptr->next = first;
	Node* ptr = head;// if we try to access ptr->data will get error
	while(ptr != NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}
void printFlattenNode(Node* &head)		// Qn. 26
{
	// Node* ptr = new Node();
	// ptr->next = first;
	Node* ptr = head;// if we try to access ptr->data will get error
	while(ptr != NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->bottom;
	}
	cout<<endl;
}

// void insertOnlyAtHead(Node* &head,int data)	
// {
// 	// without & a copy of head will form
// 	Node* newNode = new Node(data);
// 	newNode->next = head;
// 	head = newNode;
// }
// void insertAtHead(Node* &head,Node* &tail,int data)	
// {
// 	// without & a copy of head will form
// 	Node* newNode = new Node(data);
// 	newNode->next = head;
// 	if(head == NULL)
// 	{
// 		tail = newNode;
// 	}
// 	head = newNode;
// }

// void insertAtTail(Node* &head, Node* &tail,int data)	
// {
// 	Node* newNode = new Node(data);
// 	if(tail == NULL)
// 	{
// 		tail = newNode;
// 		//it will be useful when both head & tail are NULL i.e empty LL
// 		head = newNode;	
// 	}
// 	else
// 	{
// 		tail->next = newNode;
// 	}
// 	tail = newNode;
// }

// void insertAtPosition(int position,Node*& head, Node*& tail, int data)
// {
// 	// at the beginning
// 	if(position == 0)
// 	{
// 		insertAtHead(head,tail,data);
// 		return;
// 	}
// 	if(position >= lenOfNode(head))
// 	{
// 		insertAtTail(head,tail,data);
// 		return;
// 	}
// 	if(head==NULL)	// empty LL
// 	{
// 		Node* newNode = new Node(data);
// 		newNode->next = head;
// 		head = newNode;
// 		tail = newNode;
// 		return;
// 	}
// 	else
// 	{
// 		Node* prev = head;
// 		int i = 0;
// 		while(i<position)
// 		{
// 			prev = prev->next;
// 			i++;
// 		}
// 		Node* newNode = new Node(data);
// 		Node* curr = prev->next;
// 		newNode->next = curr;
// 		prev->next = newNode;
// 	}
// }

// void deleteNode(int position, Node* &head, Node* &tail)
// {
// 	// cout<<temp->data<<" "<<temp->next->data<<endl;
// 	// cout<<&(head);
// 	// if(head == temp)	cout<<1;

// 	if(head == NULL)
// 	{
// 		cout<<"LL is empty, can't delete";
// 		return;
// 	}
// 	// head position
// 	if(position == 0)
// 	{
// 		Node* temp = head;
// 		cout<<"temp "<<temp->data<<" head "<<head->data<<endl;
// 		cout<<"temp "<<temp<<" head "<<head<<endl;

// 		head = head->next;
// 		temp->next = NULL;
// 		delete temp;
// 		return;
// 	}
// 	int len = lenOfNode(head);
// 	// at last position
// 	if(position >= len)
// 	{
// 		Node* prev = head;
// 		int i = 0;
// 		// cout<<len<<"hello";
// 		while(i<len-2)		// i starts from 0 so position-1 -1
// 		{
// 			prev = prev->next;
// 			i++;
// 		}
// 		prev->next = NULL;
// 		Node* temp = tail;
// 		tail = prev;
// 		delete temp;
// 		return;
// 	}
// 	// at any position
// 	else
// 	{
// 		int i = 0;
// 		Node* prev = head;
// 		while(i<position-1)
// 		{
// 			prev = prev->next;
// 			i++;
// 		}
// 		Node* curr = prev->next;
// 		prev->next = curr->next;
// 		curr->next = NULL;
// 		delete curr;
// 		return;
// 	}
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* last = new Node(50);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = last;

// 		// printing LL
// 	// printNode(first);

// 		// insert at head 
// 	Node* head = NULL;
// 	Node* tail = NULL;
// 	// Node* head = new Node(0);

// 	// inserting only at head without need of tail
// 	// insertOnlyAtHead(head,0);
// 	// insertOnlyAtHead(head,1);
// 	// insertOnlyAtHead(head,2);
// 	// insertOnlyAtHead(head,3);
// 	// insertOnlyAtHead(head,4);
// 	// insertOnlyAtHead(head,5);
// 	// printNode(head);

// 	// insertAtHead(head,tail,5);
// 	// insertAtHead(head,tail,10);
// 	// insertAtHead(head,tail,20);
// 	// insertAtHead(head,tail,30);
// 	// insertAtHead(head,tail,40);
// 	// printNode(head);

// 	// insertAtTail(first,60);
// 	// insertAtTail(head,tail,60);

// 	// insertAtTail(head,tail,70);
// 	// insertAtTail(head,tail,80);
// 	// insertAtTail(head,tail,90);
// 	// insertAtTail(head,tail,100);

// 	// insertAtPosition(11,head,tail,69);
// 	// printNode(head);

// 	// deleteNode(0,head,tail);
// 	// printNode(head);
// 	// deleteNode(20,head,tail);
// 	// printNode(head);
// 	// deleteNode(3,head,tail);
// 	// printNode(head);
// }

// 10. Reverse a LL using recursion, loop
// Node* helper(Node* &prev, Node* &curr)
// {
// 	if(curr == NULL)	return prev;
	
// 	// solve 1 case
// 	Node* nextNode = curr->next;
// 	curr->next = prev;
// 	helper(curr,nextNode);
// }
// Node* reverse_recursion(Node* &head)
// {
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	head = helper(prev,curr);
// 	return head;
// }
// Node* reverse_loop(Node* &head)
// {
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	Node* nextNode;
// 	while(curr != NULL)
// 	{
// 		nextNode = curr->next;
// 		curr->next = prev;
// 		prev = curr;
// 		curr = nextNode;
// 	}
// 	head = prev;
// 	return head;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* last = new Node(50);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = last;

// 	printNode(first);

// 	// Node* head = reverse_recursion(first);
// 	Node* head = reverse_loop(first);
// 	printNode(head);
// }

// 11. Find Middle of a LL
// Node* getMiddle(Node* &head)
// {
// 	int len = lenOfNode(head);
// 	Node* ptr = head;
// 	int i = 0;
// 	if(len%2 == 0)		// even
// 	{
// 		while(i!=len/2-1)	// for getting 1st mid element
// 		{
// 			ptr = ptr->next;
// 			i++;
// 		}	
// 	}
// 	else		// odd
// 	{
// 		while(i!=len/2)
// 		{
// 			ptr = ptr->next;
// 			i++;
// 		}
// 	}
// 	return ptr;
// }
// Node* getMiddle_SlowFast(Node* &head)
// {
// 	if(head == NULL)
// 	{
// 		cout<<"LL empty"<<endl;
// 		return head;
// 	}
// 	if(head->next == NULL)
// 	{
// 		// single node 
// 		return head;
// 	}
// 	// more then a single node  
// 	Node* slow = head;
// 	Node* fast = head;
// 	// Node* fast = head->next;	// to get 1st mid node for even no. of nodes
// 	while(fast != NULL)
// 	{
// 		fast = fast->next;	// fast moved one place
// 		if(fast != NULL)	// if fast is not pointing to null then
// 		{
// 			fast = fast->next;	// move fast by another place
// 			slow = slow->next;	// fast moved 2 times now slow move 1 time
// 		}
// 	}
// 	return slow;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* last = new Node(60);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = last;

// 	printNode(first);

// 	// Node* middle = getMiddle(first);
// 	// cout<<"Middle Element is "<<middle->data<<endl;
// 	cout<<"Middle Element is "<<getMiddle_SlowFast(first)->data<<endl;
// }

// 12. K-groups Reverse LL 
// Node* reverseKNodes(Node* &head, int k)
// {
// 	if(head == NULL)
// 	{
// 		cout<<"LL is empty"<<endl;
// 		return head;
// 	}
// 	int len = lenOfNode(head);
// 	if(k>len)
// 	{
// 		// cout<<"Enter valid value for k"<<endl;
// 		return head;
// 	}

// 	// it means number of nodes in LL is >= k
// 	// 1. using loop reverse k nodes 
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	Node* nextNode = curr->next;
// 	int count = 0;
// 	while(count < k)
// 	{
// 		nextNode = curr->next;
// 		curr->next = prev;
// 		prev = curr;
// 		curr = nextNode;
// 		count++;
// 	}
// 	// 2. connect head to recursion ans
// 	if(nextNode!=NULL)	// we still have nodes left to reverse
// 	{
// 		// we gave nextNode as our new head bcoz newNode will
// 		// come to the point from where again reverse will start
// 		head->next = reverseKNodes(nextNode,k);
// 	}
// 	// 3. return prev
// 	return prev;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* last = new Node(60);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = last;

// 	printNode(first);
// 	Node* head = reverseKNodes(first,4);
// 	printNode(head);
// }

// 13. LL is Circular
// bool isCircular_1Pointer(Node* &head)
// {
// 	Node* temp = head->next;
// 	// either temp will reach to head or temp will reach NULL
// 	// in both case stop
// 	while(temp!=head && temp!=NULL)
// 	{
// 		temp = temp->next;
// 	}
// 	// based on the final position of temp we will decide
// 	if(temp==NULL)	return false;
// 	return true;
// }
// bool isCircular_SlowFast(Node* &head)
// {
// 	Node* slow = head;
// 	Node* fast = head->next;
// 	while(fast != NULL && fast->next != NULL)
// 	{
// 		if(slow == fast)	return true;	// both again reached at head
// 		slow = slow->next;	// moving 1 time
// 		fast = fast->next->next;	// moving 2 times
// 	}
// 	return false;
// }
// bool isCircular_map(Node* &head)
// {
// 	Node* temp = head;
// 	map<Node*, bool> mpp;
// 	// temp is not present and also temp is not NULL hence add in map
// 	while(mpp.find(temp) == mpp.end() && temp != NULL)
// 	{
// 		mpp[temp] = true;
// 		temp = temp->next;
// 	}
// 	// now if temp is present in map returning true
// 	if(mpp.find(temp) != mpp.end())	return true;
// 	return false;	// hence temp is in now NULL
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* last = new Node(60);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = last;
// 	// last->next = first;

// 	isCircular_1Pointer(first)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
// 	isCircular_SlowFast(first)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
// 	isCircular_map(first)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
// }

// 14. Check loop is present in LL or not
// Floyd cycle detection algorithm	(slow & fast)
// bool checkForLoop(Node* &head)
// {
// 	Node* slow = head;
// 	Node* fast = head;
// 	while(fast!=NULL)
// 	{
// 		fast = fast->next->next;
// 		slow = slow->next;
// 		if(slow == fast)	return true;	// loop present
// 		if(fast == NULL	|| fast->next == NULL)	return false; // loop absent
// 	}
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* sixth = new Node(60);
// 	Node* seventh = new Node(70);
// 	Node* eighth = new Node(80);
// 	Node* last = new Node(90);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;
// 	//loop creating
// 	// last->next = fifth;

// 	checkForLoop(first)?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
// }

// 15. Starting Point of a Cycle
// Node* startingPoint(Node* &head)
// {
// 	Node* slow = head;
// 	Node* fast = head;
// 	// step 1 - meet slow & fast
// 	while(fast != NULL)
// 	{
// 		fast = fast->next;
// 		if(fast != NULL)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 		if(slow == fast)	break;
// 	}
// 	// step 2 - make slow from head
// 	slow = head;
// 	// step 3- move both slow & fast with speed 1 step
// // 	while(fast != NULL)
// // 	{
// // 		fast = fast->next;
// // 		slow = slow->next;
// // 		if(slow == fast)	return slow;
// //	 }	
// 	// instead of this loop we can also use
// 	while(slow != fast)
// 	{
// 		fast = fast->next;
// 		slow = slow->next;
// 	}
// 	return slow;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* sixth = new Node(60);
// 	Node* seventh = new Node(70);
// 	Node* eighth = new Node(80);
// 	Node* last = new Node(90);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;
// 	//loop creating
// 	last->next = fifth;

// 	cout<<startingPoint(first)->data<<endl;
// }

// 16. Remove Loop from Cycle
// void removeLoop(Node* &head)
// {
// 	Node* slow = head;
// 	Node* fast = head;
// 	while(fast != NULL)
// 	{
// 		fast = fast->next;
// 		if(fast != NULL)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 		if(slow == fast)	break;
// 	}
// 	slow = head;
// 	Node* prev = fast;
// 	while(slow != fast)
// 	{
// 		prev = fast;
// 		fast = fast->next;
// 		slow = slow->next;
// 	}
// 	prev->next = NULL;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* sixth = new Node(60);
// 	Node* seventh = new Node(70);
// 	Node* eighth = new Node(80);
// 	Node* last = new Node(90);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;
// 	//loop creating
// 	last->next = fifth;

// 	removeLoop(first);
// 	printNode(first);
// }

// 17. Check whether your LL is palindrome or not
// Node* midNode(Node* &head)
// {
// 	// cout<<"mid";
// 	Node* slow = head;
// 	Node* fast = head->next;	
// 	while(fast != NULL)
// 	{ 
// 		fast = fast->next;
// 		if(fast!= NULL)
// 		{
// 			fast = fast->next;
// 			slow = slow->next;
// 		}
// 	}
// 	return slow;
// }
// Node* reverseNode(Node* &head)
// {
// 	// cout<<"rev"; 
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	Node* nextNode = curr->next;
// 	while(curr != NULL)
// 	{
// 		nextNode = curr->next;
// 		curr->next = prev;			
// 		prev = curr;
// 		curr = nextNode;
// 	}
// 	return prev;
// }
// bool checkPalindrome(Node* &head)
// {
// // empty LL or single node LL 
// 	if(head == NULL	|| head->next == NULL)	return head;
// 	// find middle 
// 	Node* mid = midNode(head);
// 	// reverse after middle Node
// 	Node* revKaHead = reverseNode(mid->next);
// 	// join the reverseNode with the middle to compare
// 	mid->next = revKaHead;
// 	// take 2 pointers
// 	Node* ptr1 = head;
// 	Node* ptr2 = revKaHead;
// 	// while ptr2 after middle is not null do compare
// 	// by the time ptr1 will get mid ele during odd case ptr2 will reach NULL
// 	while(ptr2 != NULL)
// 	{
// 		if(ptr1->data != ptr2->data)	return false;
// 		ptr1 = ptr1->next;
// 		ptr2 = ptr2->next;
// 	}
// 	return true;
// }
//  int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* sixth = new Node(40);
// 	Node* seventh = new Node(30);
// 	Node* eighth = new Node(20);
// 	Node* last = new Node(10);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;

// 	printNode(first);
// 	cout<<checkPalindrome(first);
// 	// printNode(first);
// }

// 18. Remove Duplicate from a sorted LL
// void removeDuplicate(Node* &head)
// {
// 	// empty LL or single node LL 
// 	if(head == NULL	|| head->next == NULL)	return;
// 	Node* curr = head;
// 	while(curr != NULL)
// 	{
// 		Node* temp = curr->next;
// 		// next ele from curr should not be NULL, if null then its next or data will give error
// 		if((curr->next != NULL) and (curr->data == curr->next->data))
// 		{
// 			// equal
// 			curr->next = curr->next->next;
// 			// delete node
// 			temp->next = NULL;
// 			delete temp;
// 		}
// 		else
// 		{
// 			// not equal
// 			curr = curr->next;
// 		}
// 	}
// }
//  int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(20);
// 	Node* fourth = new Node(30);
// 	Node* fifth = new Node(40);
// 	Node* sixth = new Node(40);
// 	Node* seventh = new Node(50);
// 	Node* eighth = new Node(50);
// 	Node* last = new Node(60);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;

// 	printNode(first);
// 	removeDuplicate(first);
// 	printNode(first);
// }

// 20. Sort 0's, 1's & 2's in a LL
// void sort_M1(Node* &head)
// {
// 	if(head == NULL	|| head->next == NULL)	return;
// 	Node* temp = head;
// 	int zero = 0, one = 0, two = 0;
// 	while(temp!=NULL)
// 	{
// 		if(temp->data == 0)	zero++;
// 		else if(temp->data == 1)	one++;
// 		else if(temp->data == 2)	two++;
// 		temp = temp->next;
// 	}
// 	temp = head;
// 	while(zero--)
// 	{
// 		temp->data = 0;
// 		temp = temp->next; 
// 	}
// 	while(one--)
// 	{
// 		temp->data = 1;
// 		temp = temp->next; 
// 	}
// 	while(two--)
// 	{
// 		temp->data = 2;
// 		temp = temp->next; 
// 	}
// }
// void sort_M2(Node* &head)
// {
// 	if(head == NULL	|| head->next == NULL)	return;
// 	Node* zeroHead = new Node(-1);
// 	Node* zeroTail = zeroHead;
// 	Node* oneHead = new Node(-1);
// 	Node* oneTail = oneHead;
// 	Node* twoHead = new Node(-1);
// 	Node* twoTail = twoHead;

// 	Node* curr = head;
// 	while(curr != NULL)
// 	{
// 		int data = curr->data;
// 		if(data == 0)
// 		{
// 			// take out the zero wali node
// 			Node* temp = curr;
// 			curr = curr->next;
// 			temp-> next = NULL;

// 			// append the zero node in zeroHead LL 
// 			zeroTail->next = temp;	// attaching temp to zeroTail
// 			zeroTail = temp;	// moving zeroTail
// 		}
// 		else if(data == 1)
// 		{
// 			// take out the one wali node
// 			Node* temp = curr;
// 			curr = curr->next;
// 			temp-> next = NULL;

// 			// append the one node in onwHead LL 
// 			oneTail->next = temp;	
// 			oneTail = temp;	
// 		}
// 		else if(data == 2)
// 		{
// 			// take out the two wali node
// 			Node* temp = curr;
// 			curr = curr->next;
// 			temp-> next = NULL;

// 			// append the two node in twoHead LL 
// 			twoTail->next = temp;	
// 			twoTail = temp;	
// 		}
// 	}
// 	// abb yha par 0,1,2 LL ready hein (above)

// 	// removing dummy nodes
// 	curr = zeroHead;
// 	zeroHead = zeroHead->next;
// 	delete curr;

// 	curr = oneHead;
// 	oneHead = oneHead->next;
// 	delete curr;

// 	curr = twoHead;
// 	twoHead = twoHead->next;
// 	delete curr;

// 	// joining the nodes 
// 	if(oneHead != NULL)
// 	{
// 		// one wali list in non empty
// 		zeroTail->next = oneHead;
// 		if(twoHead != NULL)
// 		{
// 			oneTail->next = twoHead;
// 		}
// 	}
// 	else
// 	{
// 		// one wali list in empty
// 		if(twoHead != NULL)
// 		{
// 			zeroTail->next = twoHead;
// 		}
// 	}

// 	head = zeroHead;
// }
// int main()
// {
// 	Node* first = new Node(1);
// 	Node* second = new Node(2);
// 	Node* third = new Node(2);
// 	Node* fourth = new Node(0);
// 	Node* fifth = new Node(0);
// 	Node* sixth = new Node(0);
// 	Node* seventh = new Node(2);
// 	Node* eighth = new Node(2);
// 	Node* last = new Node(1);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;

// 	printNode(first);
// 	// sort_M1(first);
// 	sort_M2(first);
// 	printNode(first);
// }

// 21. Add two numbers represented by LL
// Node* reverseNode(Node* head)
// {
// 	Node* prev = NULL;
// 	Node* curr = head;
// 	Node* nextNode = curr->next;
// 	while(curr != NULL)
// 	{
// 		nextNode = curr->next;
// 		curr->next = prev;
// 		prev = curr;
// 		curr = nextNode;
// 	}
// 	return prev;
// }
// Node* addNodes(Node* &head1, Node* &head2)
// {
// 	// step 1: reverse nodes 
// 	Node* h1 = reverseNode(head1);
// 	Node* h2 = reverseNode(head2);
// 	// step 2: add nodes 
// 	Node* ansHead = NULL;
// 	Node* ansTail = NULL;
// 	Node* temp1 = h1;
// 	Node* temp2 = h2;
// 	int carry = 0;
// 	// when both LL are not empty
// 	while(temp1!=NULL && temp2!=NULL)
// 	{
// 		int sum = carry + (temp1->data) + (temp2->data);
// 		int digit = sum%10;
// 		carry = sum/10;
// 		// create a newNode for the digit 
// 		Node* newNode = new Node(digit);

// 		if(ansHead == NULL)
// 		{
// 			// adding 1st node 
// 			ansHead = newNode;
// 			ansTail = newNode;
// 		}
// 		else
// 		{	
// 			// nodes allready present
// 			ansTail->next = newNode;
// 			ansTail = newNode;
// 		}
// 		temp1 = temp1->next;
// 		temp2 = temp2->next;
// 	}
// 	// when temp1 LL is not empty
// 	while(temp1!=NULL)
// 	{
// 		int sum = carry + (temp1->data);
// 		int digit = sum%10;
// 		carry = sum/10;
// 		// create a newNode for the digit 
// 		Node* newNode = new Node(digit);
// 		ansTail->next = newNode;
// 		ansTail = newNode;
// 		temp1 = temp1->next;
// 	}
// 	// when temp2 LL is not empty
// 	while(temp2!=NULL)
// 	{
// 		int sum = carry + (temp2->data);
// 		int digit = sum%10;
// 		carry = sum/10;
// 		// create a newNode for the digit 
// 		Node* newNode = new Node(digit);
// 		ansTail->next = newNode;
// 		ansTail = newNode;
// 		temp2 = temp2->next;
// 	}
// 	// when there is still carry left
// 	while(carry != 0)
// 	{
// 		int sum = carry;
// 		int digit = sum%10;
// 		carry = sum/10;
// 		// create a newNode for the digit 
// 		Node* newNode = new Node(digit);
// 		ansTail->next = newNode;
// 		ansTail = newNode;
// 	}
// 	// step 3: reverse the ans
// 	ansHead = reverseNode(ansHead);
// 	return ansHead;
// }
// int main()
// {
// 		// TEST CASE 1
// 	Node* first1 = new Node(2);
// 	Node* second1 = new Node(4);	
	
// 	Node* first2 = new Node(2);
// 	Node* second2 = new Node(3);
// 	Node* third2 = new Node(4);

// 	first1->next = second1;

// 	first2->next = second2;
// 	second2->next = third2;
// 		// TEST CASE 2
// 	Node* first1 = new Node(9);
// 	Node* second1 = new Node(9);
	
// 	Node* first2 = new Node(9);
// 	Node* second2 = new Node(9);

// 	first1->next = second1;
// 	first2->next = second2;

// 	printNode(first1);
// 	printNode(first2);
// 	Node* sumAns = addNodes(first1, first2);
// 	printNode(sumAns);
// }

// 22. Kth node from the end (Get Node Value)	{HackerRank}
// void help(Node* &head, int& pos, int& ans)
// {
// 	if(head==0)	return;
// 	help(head->next, pos, ans);

// 	if(pos == 0)
// 	{
// 		ans = head->data;
// 	}
// 	pos--;
// }
// int getNode(Node* &head, int pos)
// {
// 	int ans = -1;
// 	help(head, pos, ans);
// 	return ans;
// }
// int main()
// {
// 	Node* first = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);
// 	Node* sixth = new Node(60);
// 	Node* seventh = new Node(70);
// 	Node* eighth = new Node(80);
// 	Node* last = new Node(90);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = last;

// 	printNode(first);
// 	int position = 4;
// 	cout<<getNode(first, position);
	
// }

// 23. 160. Intersection of two LL
// Node* getIntersection(Node* &headA, Node* &headB)
// {
// 	Node* a = headA;
// 	Node* b = headB;

// 	while(a && b)
// 	{
// 		// while going forward checking if at anypoint both are in same addresses
// 		// if(a->next == b->next)	return a->next;	// both a & b now just before the intersected node
// 		if(a == b)	return a;	// both a & b now in intersected node
// 		a = a->next;
// 		b = b->next;
// 	}
// 	if(a==0 && b==0 && a!=b)		return 0;	// both a & b are not intersected
// 	if(a == 0)
// 	{
// 		// b is larger
// 		int blen = 0;
// 		// finding length of b 
// 		while(b != 0)
// 		{
// 			b++;
// 			b = b->next;
// 		}
// 		// moving headB to forward where headA & headB start from same distance from intersection 
// 		while(blen--)
// 		{
// 			headB = headB->next;
// 		}
// 	}
// 	else
// 	{
// 		// a is larger
// 		int alen = 0;
// 		while(a != 0)
// 		{
// 			a++;
// 			a = a->next;
// 		}
// 		while(alen--)
// 		{
// 			headA = headA->next;
// 		}
// 	}
// 	// until they match run the loop 
// 	while(headA != headB)
// 	{
// 		headA = headA->next;
// 		headB = headB->next;
// 	}
// 	// both are in same position
// 	return headA;
// }
// int main()
// {
// 	Node* headA = new Node(10);
// 	Node* second = new Node(20);
// 	Node* third = new Node(30);
// 	Node* fourth = new Node(40);
// 	Node* fifth = new Node(50);

// 	Node* headB = new Node(60);
// 	Node* seventh = new Node(70);
// 	Node* eighth = new Node(80);

// 	headA->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;

// 	headB->next = seventh;
// 	seventh->next = eighth;
// 	eighth->next = fourth;                                

// 	printNode(headA);
// 	printNode(headB);
// 	Node* intersect = getIntersection(headA,headB);
// 	cout<<intersect->data;
// }

// 24. 21. Merge two sorted LL
// Node* merge2Lists(Node* left, Node* right)
// {
// 	if(left == 0)	return right;
// 	if(right == 0)	return left;

// 	Node* ans = new Node(-1);
// 	Node* ptr = ans;
// 	while(left && right)
// 	{
// 		if(left->data <= right->data)
// 		{
// 			ptr->next = left;
// 			ptr = left;
// 			left = left->next;
// 		}
// 		else
// 		{
// 			ptr->next = right;
// 			ptr = right;
// 			right = right->next;
// 		}
// 	}
// 	// for remaining nodes
// 	if(left)	ptr->next = left;
// 	if(right)	ptr->next = right;
// 	return ans->next;	// ans node starts with -1 so next of it
// }
// int main()
// {
//  	Node* left = new Node(1);
// 	Node* second = new Node(3);
// 	Node* third = new Node(5);

// 	Node* right = new Node(2);
// 	Node* seventh = new Node(4);
// 	Node* eighth = new Node(5);

// 	left->next = second;
// 	second->next = third;

// 	right->next = seventh;
// 	seventh->next = eighth;

// 	Node* ans = merge2Lists(left,right);
// 	printNode(ans);
// }

// 25. 148. Sort List (using merge sort algorithm)
// Node* findMid(Node* head)
// {
// 	Node* slow = head;
// 	Node* fast = head->next;
// 	while(fast && fast->next)
// 	{
// 		fast = fast->next->next;
// 		slow = slow->next;
// 	}
// 	return slow;
// }
// Node* mergeLists(Node* left, Node* right)
// {
// 	if(left == 0)	return right;
// 	if(right == 0)	return left;

// 	Node* ans = new Node(-1);
// 	Node* ptr = ans;
// 	while(left && right)
// 	{
// 		if(left->data <= right->data)
// 		{
// 			ptr->next = left;
// 			ptr = left;
// 			left = left->next;
// 		}
// 		else
// 		{
// 			ptr->next = right;
// 			ptr = right;
// 			right = right->next;
// 		}
// 	}
// 	if(left)	ptr->next = left;
// 	if(right)	ptr->next = right;
// 	return ans->next;	
// }
// Node* sortList(Node* head)
// {
// 	// base case
// 	// null node or single node
// 	if(head==0 || head->next==0)	return head;

// // a. mid
// 	Node* mid = findMid(head);
// // b. using mid divide array
// 	Node* left = head;
// 	Node* right = mid->next;
// 	mid->next = 0;
// // c. RE divide  
// 	left = sortList(left);
// 	right = sortList(right);
// // d. merge
// 	Node* merged = mergeLists(left,right);
// 	return merged;
// }
// int main()
// {
//  	Node* left = new Node(1);
// 	Node* second = new Node(3);
// 	Node* third = new Node(5);

// 	Node* right = new Node(2);
// 	Node* seventh = new Node(4);
// 	Node* eighth = new Node(5);

// 	left->next = second;
// 	second->next = third;
// 	third->next = right;
// 	right->next = seventh;
// 	seventh->next = eighth;

// 	Node* ans = sortList(left);
// 	printNode(ans);
// }

// 26. Flatten Linked List {gfg}
// Node* merge(Node* a, Node* b)
// {
// 	if(!a)	return b;	// a is Null return b
// 	if(!b)	return a;	// b is Null return a
// 	Node* ans = 0;		// initialise by Null = 0
// 	if(a->data < b->data)
// 	{
// 		ans = a;
// 		a->bottom = merge(a->bottom,b);
// 	}
// 	else
// 	{
// 		ans = b;
// 		b->bottom = merge(a,b->bottom);
// 	}
// 	return ans;
// }
// Node* flatten(Node * root)
// {
// 	if(!root)	return 0;
// 	Node* mergeLL = merge(root,flatten(root->next));
// 	return mergeLL;
// }
// int main()
// {
//  	Node* first = new Node(5);
// 	Node* second = new Node(10);
// 	Node* third = new Node(19);
// 	Node* fourth = new Node(28);

// 	Node* f2 = new Node(7);
// 	Node* f3 = new Node(8);
// 	Node* f4 = new Node(30);

// 	Node* s2 = new Node(20);

// 	Node* t2 = new Node(22);
// 	Node* t3 = new Node(50);

// 	Node* fo2 = new Node(35);
// 	Node* fo3 = new Node(40);
// 	Node* fo4 = new Node(45);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;

// 	first->bottom = f2;
// 	f2->bottom = f3;
// 	f3->bottom = f4;

// 	second->bottom = s2;

// 	third->bottom = t2;
// 	t2->bottom = t3;

// 	fourth->bottom = fo2;
// 	fo2->bottom = fo3;
// 	fo3->bottom = fo4;

// 	Node* ans = flatten(first);
// 	printFlattenNode(ans);
// }

// 27. 138. Copy LL with Random Pointer
//	//	SC- O(n)	Using Map
// Node* helper(Node* head, unordered_map<Node*, Node*>& mp)
// {
// 	if(head==0)	return 0;
// 	Node* newHead = new Node(head->data); 
// 	mp[head] = newHead;		// both old & new ptrs are stored
// 	newHead->next = helper(head->next,mp);	// by rec new LL is formed
// 	if(head->random)
// 	{
// 		newHead->random = mp[head->random];		
// 	}
// 	return newHead;
// }
// Node* copyRandomList(Node* head)
// {
// 	unordered_map<Node*, Node*> mp;		// old & new ptrs
// 	return helper(head,mp);
// }
//	//	SC- O(1)	Just by changing links
// Node* copyRandomList(Node* head)
// {
// 	if(!head)	return 0;
// 	// 1.	clone nodes
// 	Node* it = head;
// 	while(it)
// 	{
// 		Node* clonedNode = new Node(it->data); 
// 		clonedNode->next = it->next;
// 		it->next = clonedNode;
// 		it = it->next->next;
// 	}
// 	// 2. assign random links with the help of old nodes
// 	it = head;
// 	while(it)
// 	{
// 		Node* clonedNode = it->next;
// 		// if it->random is valid then put it otherwise put null
// 		clonedNode->random = it->random ? it->random->next : nullptr;
// 		it = it->next->next;
// 	}
// 	// 3. Detach old nodes from new nodes
// 	it = head;
// 	Node* clonedHead = it->next;
// 	while(it)
// 	{
// 		Node* clonedNode = it->next;	// just used as an iterator
// 		it->next = it->next->next;
// 		if(clonedNode->next)	// for last ele it will be NULL
// 		{
// 			clonedNode->next = clonedNode->next->next;
// 		}
// 		it = it->next;
// 	}
// 	return clonedHead;
// }
// int main()
// {
//  	Node* first = new Node(7);
// 	Node* second = new Node(13);
// 	Node* third = new Node(11);
// 	Node* fourth = new Node(10);
// 	Node* fifth = new Node(1);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;

// 	first->random = 0;
// 	second->random = first;
// 	third->random = fifth;
// 	fourth->random = third;
// 	fifth->random = first;

// 	Node* ans = copyRandomList(first);
// 	printNode(ans);
// }

// 28. 61. Rotate List
// Node* rotateRight(Node* head,int k)
// {
// 	if(!head)	return 0;

// 	int len = lenOfNode(head);
// 	int actualRotateK = k%len;
// 	if(actualRotateK == 0)	return head;

// 	int newLastNodePos = len-(k%len)-1;
// 	Node* it = head;
// 	while(newLastNodePos--)
// 	{
// 		it = it->next;
// 	}
// 	// setting the new Head 
// 	Node* newHead = it->next;
// 	// creating the new NULL at the end  
// 	it->next = 0;
// 	// again assigining it to the newHead for connection between old & new head
// 	it = newHead;
// 	while(it->next)
// 	{
// 		it = it->next;
// 	}
// 	// connecting the old head to new head 
// 	it->next = head;
// 	return newHead;
// }
// int main()
// {
//  	Node* first = new Node(7);
// 	Node* second = new Node(13);
// 	Node* third = new Node(11);
// 	Node* fourth = new Node(10);
// 	Node* fifth = new Node(1);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;

// 	int k = 2;
// 	cout<<"Before Rotation: "<<endl;
// 	printNode(first);

// 	Node* ans = rotateRight(first,k);
// 	cout<<"After Rotation: "<<endl;
// 	printNode(ans);
// }

// 29. Delete N Nodes after M Nodes in a LL {gfg}
// void linkDelete(Node* head, int m, int n)
// {
// 	if(!head)	return;
// 	Node* it = head;
// 	// if we loop 2(=m) times then we will skip the ele i.e we do m-1 times
// 	for(int i = 0;i<m-1;i++)	
// 	{
// 		// if M nodes are N.A. 
// 		if(!it)	return;		// it reached null
// 		it = it->next;
// 	}
// 	// now it-> would be at Mth node 
// 	if(!it)	return;

// 	Node* MthNode = it;
// 	it = MthNode->next;
// 	for(int i =0 ;i<n;i++)
// 	{
// 		if(!it)	return;
// 		Node* temp = it->next;
// 		delete it;
// 		it = temp;
// 	}
// 	MthNode->next = it;
// 	linkDelete(it,m,n);

// }
// int main()
// {
//  	Node* first = new Node(9);
// 	Node* second = new Node(1);
// 	Node* third = new Node(5);
// 	Node* fourth = new Node(9);
// 	Node* fifth = new Node(10);
// 	Node* sixth = new Node(1);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;

// 	int M = 2, N = 1;
// 	cout<<"Before Delete: "<<endl;
// 	printNode(first);

// 	linkDelete(first,M,N);
// 	cout<<"After Delete: "<<endl;
// 	printNode(first);
// }

/// 30. 2058. Find the Minimum & Maximum Number of Nodes Between Critical Points 
// vector<int> NodesBetweenCriticalPoints(Node* head)
// {
// 	vector<int> ans = {-1, -1};		// {minDist, maxDist}
// 	Node* prev = head;
// 	if(!prev)	return ans;		// empty LL
// 	Node* curr = head->next;
// 	if(!curr)	return ans;		// single node
// 	Node* nxt = head->next->next;
// 	if(!nxt)	return ans;		// double node

// 	int firstCP = -1;
// 	int lastCP = -1;
// 	int minDist = INT_MAX;
// 	int index = 1;
// 	while(nxt)
// 	{
// 		bool isCP = ((prev->data<curr->data && curr->data>nxt->data) || 
// 			(prev->data>curr->data && curr->data<nxt->data))? true: false;
// 		if(isCP && firstCP == -1)	// for 1st cp
// 		{
// 			firstCP = index;
// 			lastCP = index;
// 		}
// 		else if(isCP)	// other cp's
// 		{
// 			minDist = min(minDist, index-lastCP);	// min(minDist, curr index pos - last CP pos)
// 			lastCP = index;		// updating lastCP
// 		}

// 		++index;
// 		prev = prev->next;
// 		curr = curr->next;
// 		nxt = nxt->next;
// 	}
// 	if(firstCP == lastCP)	return ans;		// only 1 CP
// 	else
// 	{
// 		ans[0] = minDist;
// 		ans[1] = lastCP-firstCP;
// 	}
// 	return ans;
// }
// int main()
// {
//  	Node* first = new Node(5);
// 	Node* second = new Node(3);
// 	Node* third = new Node(1);
// 	Node* fourth = new Node(2);
// 	Node* fifth = new Node(5);
// 	Node* sixth = new Node(1);
// 	Node* seventh = new Node(2);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;

// 	vector<int> ans = NodesBetweenCriticalPoints(first);
// 	// printNode(first);
// 	cout<<ans[0]<<" "<<ans[1];
// }

// 31. 2181. Merge Nodes in Between Zeros
// Node* mergeNodes(Node* head)
// {
// 	if(!head)	return 0;
// 	Node* slow = head, *fast = head->next, *lastNode = 0;
// 	int sum = 0;
// 	while(fast)
// 	{
// 		if(fast->data != 0)	sum += fast->data;
// 		else
// 		{
// 			// fast encountered 0
// 			slow->data = sum;
// 			lastNode = slow;
// 			slow = slow->next;
// 			sum = 0;
// 		}
// 		fast = fast->next;
// 	}
// 	lastNode->next = 0;		// making last node 0
// 	// deleting all the remaining nodes of old LL 
// 	Node* temp = slow;
// 	while(temp)
// 	{
// 		Node* nxt = temp->next;
// 		delete temp;
// 		temp = nxt;
// 	}
// 	return head;
// }
// int main()
// {
//  	Node* first = new Node(0);
// 	Node* second = new Node(3);
// 	Node* third = new Node(1);
// 	Node* fourth = new Node(0);
// 	Node* fifth = new Node(4);
// 	Node* sixth = new Node(5);
// 	Node* seventh = new Node(2);
// 	Node* eighth = new Node(0);

// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;
// 	sixth->next = seventh;
// 	seventh->next = eighth;

// 	Node* ans = mergeNodes(first);
// 	printNode(ans);
// }

// 32. Recursively create & print LL
// Node* newNode(int data)
// {
// 	Node *new_node = new Node;
// 	new_node->data = data;
// 	new_node->next = NULL;
// 	return new_node;
// }
// Node* insertEnd(Node* head, int data)	// O(n)
// {
// 	if(head == NULL)	return newNode(data);
// 	else	head->next = insertEnd(head->next, data);
// 	return head;
// }
// void traverse(Node* head)	// O(n)
// {
// 	if(head == NULL)	return;
// 	cout<<head->data<<" ";
// 	traverse(head->next);
// }
// int main()
// {
// 	Node* head = NULL;
// 	head = insertEnd(head, 0);
// 	head = insertEnd(head, 1);
// 	head = insertEnd(head, 2);
// 	head = insertEnd(head, 3);
// 	head = insertEnd(head, 4);
// 	head = insertEnd(head, 5);
// 	head = insertEnd(head, 6);
// 	traverse(head);
// }