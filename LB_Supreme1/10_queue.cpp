#include <bits/stdc++.h>
// #include <queue>
// #include <deque>
using namespace std;

// Basic Functions
// int main()
// {
// 	queue<int> q;
// 	q.push(5); 
// 	q.emplace(10);
// 	q.push(20);
// 	q.push(30);
// 	q.push(40);
// 	q.push(50);

// 	cout<<"Initial Size: "<<q.size()<<endl;
// 	q.pop();
// 	cout<<"Later Size: "<<q.size()<<endl;
// 	cout<<"Q back: "<<q.back()<<endl;

// 	while(!q.empty())
// 	{
// 		cout<<q.front()<<" ";
// 		q.pop();
// 	}
// }

// class  Queue
// {
// public:
// 	int* v;
// 	int size, front, back;

// 	Queue(int size)
// 	{
// 		this->size = size;
// 		v = new int[size];
// 		front = 0;
// 		back = 0;
// 	}

// 	void push(int data)
// 	{
// 		if(back == size)
// 		{
// 			cout<<"Queue is Full"<<endl;
// 		}
// 		else
// 		{
// 			v[back] = data;
// 			back++;
// 			// when q will be fulled
// 			// back will point to outside of q
// 		}
// 	}
// 	void pop()
// 	{
// 		if(front == back)	cout<<"Queue is Empty"<<endl;
// 		else
// 		{
// 			v[front] = -1;
// 			front++;
// 			if(front == back)
// 			{
// 				front = 0;
// 				v[front] = v[back];
// 				back = 0;
// 			}
// 		}
// 	}
// 	int getFront()
// 	{
// 		if(size==0)
// 		{
// 			cout<<"Queue is Empty"<<endl;
// 			return -1;
// 		}
// 		else	return v[front];
// 	}
// 	bool isEmpty()
// 	{
// 		if(front == back)	return true;
// 		return false;
// 	}
// 	int getSize()
// 	{
// 		// back is already 1 place ahead so no need +1
// 		return back-front;	
// 	}
// 	// void print(int size)
// 	// {
// 	// 	for(auto i = 0;i <5;i++)
// 	// 		cout<<v[i]<<" ";
// 	// 	cout<<endl;
// 	// 	// cout<<"front: "<<front<<endl;
// 	// 	// cout<<"back: "<<back;
// 	// }
// };

// class CircularQueue
// {
// public:
// 	int *arr;
// 	int size, front, back;
// 	CircularQueue(int size)
// 	{
// 		this->size = size;
// 		arr = new int[size];
// 		front = -1;
// 		back = -1;
// 	}
// 	void push(int data)
// 	{
// 		// queue full
// 		if(front==0 & back == size-1)
// 			cout<<"Q is full"<<endl;
// 		// single element case -> first element
// 		else if(front == -1)
// 		{
// 			front = back = 0;
// 			arr[back] = data;
// 		}
// 		// circular nature
// 		else if(back==size-1 && front != 0)
// 		{
// 			back = 0;
// 			arr[back] = data;
// 		}
// 		// normal flow
// 		else
// 		{
// 			back++;
// 			arr[back] = data;
// 		}
// 	}
// 	void pop()
// 	{
// 		// empty check
// 		if(front == -1)
// 		{
// 			cout<<"Queue is Empty"<<endl;
// 		}
// 		// single element
// 		else if(front == back)
// 		{
// 			arr[front] = -1;
// 			front = -1;
// 			back = -1;
// 		}
// 		// circular nature
// 		else if (front == size-1)
// 		{
// 			front = 0;
// 		}
// 		// normal flow
// 		else
// 		{
// 			front++;
// 		}
// 	}
// 	int getFront()
// 	{
// 		if(size==0)
// 		{
// 			cout<<"Queue is Empty"<<endl;
// 			return -1;
// 		}
// 		else	return v[front];
// 	}
// 	bool isEmpty()
// 	{
// 		if(front == back)	return true;
// 		return false;
// 	}
// 	int getSize()
// 	{
// 		// back is already 1 place ahead so no need +1
// 		return back-front;	
// 	} 
// };

// class DoubleEndedQueue
// {
// public:
// 	int size, front, back;
// 	int* arr;

// 	DoubleEndedQueue(int size)
// 	{
// 		this->size = size;
// 		arr = new int[size];
// 		front = -1; rear = -1;
// 	}
// 	void pushFront(int data)
// 	{
// 		// queue full
// 		if(front==0 & back == size-1)
// 			cout<<"Q is full"<<endl;
// 		// single element case -> first element
// 		else if(front == -1)
// 		{
// 			front = back = 0;
// 			arr[back] = data;
// 		}
// 		// circular nature
// 		else if(front == 0 && back!=size-1)
// 		{
// 			front = n-1;
// 			arr[front] = data;
// 		}
// 		// normal flow
// 		else
// 		{
// 			front--;
// 			arr[back] = data;
// 		}
// 	}
// 	void pushBack(int data)
// 	{
// 		// queue full
// 		if(front==0 & back == size-1)
// 			cout<<"Q is full"<<endl;
// 		// single element case -> first element
// 		else if(front == -1)
// 		{
// 			front = back = 0;
// 			arr[back] = data;
// 		}
// 		// circular nature		// if circular DEQueue is told then only
// 		else if(back==size-1 && front != 0)
// 		{
// 			back = 0;
// 			arr[back] = data;
// 		}
// 		// normal flow
// 		else
// 		{
// 			back++;
// 			arr[back] = data;
// 		}
// 	}
// 	void popFront()
// 	{
// 		// empty check
// 		if(front == -1)
// 		{
// 			cout<<"Queue is Empty"<<endl;
// 		}
// 		// single element
// 		else if(front == back)
// 		{
// 			arr[front] = -1;
// 			front = -1;
// 			back = -1;
// 		}
// 		// circular nature
// 		else if (front == size-1)
// 		{
// 			front = 0;
// 		}
// 		// normal flow
// 		else
// 		{
// 			front++;
// 		}
// 	}
// 	void popBack()
// 	{
// 		// empty check
// 		if(front == -1)
// 		{
// 			cout<<"Queue is Empty"<<endl;
// 		}
// 		// single element
// 		else if(front == back)
// 		{
// 			arr[front] = -1;
// 			front = -1;
// 			back = -1;
// 		}
// 		// circular nature
// 		else if (back == 0)
// 		{
// 			back == size-1;
// 		}
// 		// normal flow
// 		else
// 		{
// 			back--;
// 		}
// 	}
// };
// int main()
// {
// 	Queue q(10);
// 	q.push(5);
// 	q.push(10);
// 	q.push(15);
// 	q.push(20);
// 	q.push(25);
// 	cout<<"Size of Queue is: "<<q.getSize()<<endl;

// 	q.pop();
// 	q.pop();
// 	q.pop();
// 	q.pop();

// 	cout<<"Size of Queue is: "<<q.getSize()<<endl;
// 	// q.print(q.getSize());
// 	while(!q.isEmpty())
// 	{
// 		cout<<q.getFront()<<" ";
// 		q.pop();
// 	}
// }

// int main()
// {
// 	deque<int> dq; 
// 	dq.push_front(5);
// 	dq.push_front(10);
// 	dq.push_back(20);
// 	dq.push_back(30);
// 	cout<<"Size: "<<dq.size()<<endl;
// 	dq.pop_front();
// 	cout<<"Size: "<<dq.size()<<endl;
// 	dq.pop_back();
// 	cout<<"Size: "<<dq.size()<<endl;
// 	cout<<"Front: "<<dq.front()<<endl;
// 	cout<<"Back: "<<dq.back()<<endl;
// }

// 5. Reverse a Queue
// using stack
// void Qreverse(queue<int> & q)
// {
// 	stack<int> s;
// 	while(!q.empty())
// 	{
// 		int front = q.front();
// 		q.pop();
// 		s.push(front);
// 	}
// 	while(!s.empty())
// 	{
// 		q.push(s.top());
// 		s.pop();
// 	}
// }
// using recursion
// void Qreverse(queue<int>& q)
// {
// 	if(q.size() == 1)	return;
// 	int front = q.front();
// 	q.pop();
// 	Qreverse(q);
// 	q.push(front);
// }
// int main()
// {
// 	queue<int> q;
// 	q.push(3); 
// 	q.push(6);
// 	q.push(9);
// 	q.push(2);
// 	q.push(8);

// 	Qreverse(q);
// 	while(!q.empty())
// 	{
// 		cout<<q.front()<<" ";
// 		q.pop();
// 	}
// }

// 6. Reverse first K elements of a Queue
// void Kreverse(queue<int>& q, int k)
// {
// 	stack<int> s;
// 	int K = k;
// 	int size = q.size()-K;
// 	if(k == 0 || k>q.size())	return;
// 	while(k--)
// 	{
// 		s.push(q.front());
// 		q.pop();
// 	}
// 	while(!s.empty())
// 	{
// 		q.push(s.top());
// 		s.pop();
// 	}
// 	while(size--)
// 	{
// 		q.push(q.front());
// 		q.pop();
// 	}
// }
// int main()
// {
// queue<int> q;
// q.push(3); 
// q.push(6);
// q.push(9);
// q.push(12);
// q.push(15);

// 	int k = 3;
// 	Kreverse(q, k);
// 	while(!q.empty())
// 	{
// 		cout<<q.front()<<" ";
// 		q.pop();
// 	}
// }

// 7. Interleave first & second half of Queue
// void interLeave(queue<int>& q1)
// {
// 	queue<int> q2;
// 	int size = q1.size();
// 	while(size/2 != q2.size())
// 	{
// 		q2.push(q1.front());
// 		q1.pop();
// 	}
// 	// while(!q2.empty())
// 	// {
// 	// 	cout<<q2.front()<<" ";
// 	// 	q2.pop();
// 	// }
// 	while(!q1.empty() && !q2.empty())
// 	{
// 		q1.push(q2.front());
// 		q2.pop();
// 		q1.push(q1.front());
// 		q1.pop();
// 	}
// 	if(size &1)	// for odd no of elements
// 	{
// 		q1.push(q1.front());
// 		q1.pop();
// 	}
// }
// int main()
// {
	// queue<int> q;
	// q.push(10); 
	// q.push(20);
	// q.push(30);
	// q.push(40);
	// q.push(50);
	// q.push(60); 
	// q.push(70);
	// q.push(80);
	// q.push(90);
	
// 	interLeave(q);
// 	while(!q.empty())
// 	{
// 		cout<<q.front()<<" ";
// 		q.pop();
// 	}
// }

// 8. Find negative in every window of size K 
// void solve(int arr[], int size, int k)
// {
// 	deque<int> q;
// 	// process first window of size k
// 	for(int i=0;i<k;i++)
// 	{
// 		if(arr[i]<0)	q.push_back(i);
// 	}
// 	// remaining window ko process kro
// 	for(int i = k; i<size;i++)
// 	{
// 		// answer dedo purane window ka
// 		if(q.empty())	cout<<0<<" "; 
// 		else	cout<<arr[q.front()]<<" ";

// 		// out of window elements ko remove kardo
// 		while((!q.empty()) &&(i-q.front()>= k))
// 		{
// 			q.pop_front();
// 		}

// 		// check current element fro insertion
// 		if(arr[i]<0)	q.push_back(i);
// 	}
// 	// answer print karo for last window
// 	if(q.empty())	cout<<0<<" "; 
// 	else	cout<<arr[q.front()]<<" ";
// }
// int main()
// {
// 	int arr[] = {12,-1,-7,8,-15,30,16,28};
// 	int size = 8;
// 	int k = 3;
// 	solve(arr, size, k);
// }

// 9. First non-repeating character in a stream
// string solve(string s)
// {
// 	string ans = "";
// 	int freq[26] = {0};
// 	queue<char> q;
// 	for(int i = 0;i<s.size();i++)
// 	{
// 		char ch = s[i];
// 		freq[ch-'a']++;
// 		q.push(ch);
// 		while(!q.empty())
// 		{
// 			if(freq[q.front()-'a']>1)	q.pop(); 
// 			// storing non- repeating characters
// 			else
// 			{
// 				ans.push_back(q.front());
// 				break;
// 			}
// 		}
// 		if(q.empty())	ans.push_back('#');
// 	}
// 	return ans;
// }
// int main()
// {
// 	string s = "aabc";
// 	cout<<solve(s);
// }

// 10. 134. Gas Station
// int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
// {
// 	// kitna petrol kam padgaya
// 	int deficit = 0;
// 	// kitna petrol bacha hua h 
// 	int balance = 0;
// 	// circuit kaha se start krre ho
// 	int start = 0;
// 	for(int i = 0;i<gas.size();i++)
// 	{
// 		balance += gas[i]-cost[i];
// 		if(balance < 0)
// 		{
// 			deficit += balance;	// yaha par galti hogi
//		// deficit += abs(balance);
// 			balance = 0;
// 			start = i+1; 	// start from again next it of i
// 		}
// 		cout<<start<<" ";
// 	}
// 	if(balance + deficit >= 0)	return start;
// // 	if(balance >= deficit)	return start;
// 	else return -1;
// }
// int main()
// {
// 	vector<int> gas = {1,2,3,4,5};
// 	vector<int> cost = {3,4,5,1,2};
// 	cout<<canCompleteCircuit(gas, cost);
// }

// 11. 239. Sliding Window Maximum
// vector<int> maxSlidingWindow(vector<int>& nums, int k)
// {
// 	vector<int> ans;
// 	deque<int> q;
// 	// first window of k size
// 	for(int i = 0;i<k;i++)
// 	{
// 		// chote element remove krdo
// 		while(!q.empty() && nums[i]>= nums[q.back()])	q.pop_back();	// remove small eles
// 		// inserting index, so that we can checkout of window element
// 		q.push_back(i);
// 	}
// 	// store answer for first window
// 	ans.push_back(nums[q.front()]);
// 	// remaining windows ko process
// 	for(int i = k;i<nums.size();i++)
// 	{
// 		// out of window element ko remove krdia
// 		if(!q.empty() && i-q.front() >= k)
// 		{
// 			q.pop_front();
// 		}
// 		// ab firse current element k liye chotte element
// 		// ko remove krna h 
// 		while(!q.empty() && nums[i]>= nums[q.back()])	q.pop_back();	// remove small eles
// 		// inserting index, so that we can checkout of window element
// 		q.push_back(i);
// 		// current window ka answer store krna h
// 		ans.push_back(nums[q.front()]);
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> nums = {1,3,-1,-3,5,3,6,7};
// 	int k = 3;
// 	vector<int> ans = maxSlidingWindow(nums, k);
// 	for(auto it: ans)	cout<<it<<" ";
// }

// 12. 232. Queue using stacks
// // push- O(n) & top, pop- O(1)
// class MyQueue
// {
// public:
// 	stack<int> s1, s2;
// 	MyQueue()
// 	{

// 	}
// 	void push(int x)
// 	{
// 		while(!s1.empty())	
// 		{
// 			s2.push(s1.top());
// 			s1.pop();
// 		}
// 		s1.push(x);
// 		while(!s2.empty())	
// 		{
// 			s1.push(s2.top());
// 			s2.pop();
// 		}
// 	}
// 	int pop()
// 	{
// 		if(!s1.empty())	
// 		{
// 			int pop = s1.top();
// 			s1.pop();
// 			return pop;
// 		}
// 	}
// 	int peek()
// 	{
// 		if(!s1.empty())	
// 		{
// 			return s1.top();
// 		}
// 	}
// 	bool empty()
// 	{
// 		return (s1.empty() && s2.empty());
// 	}
// };
// // push- O(1) & top, pop- O(n)
// class MyQueue
// {
// public:
// 	stack<int> s1, s2;
// 	MyQueue()
// 	{

// 	}
// 	void push(int x)
// 	{
// 		s1.push(x);
// 	}
// 	int pop()
// 	{
// 		int pop = -1;
// 		if(s2.empty())
// 		{
// 			while(!s1.empty())
// 			{
// 				s2.push(s1.top());
// 				s1.pop();
// 			}
// 			pop = s2.top();
// 		}
// 		else	pop = s2.top();
// 		s2.pop();
// 		return pop;
// 	}
// 	int peek()
// 	{
// 		if(s2.empty())
// 		{
// 			while(!s1.empty())
// 			{
// 				s2.push(s1.top());
// 				s1.pop();
// 			}
// 			return s2.top();
// 		}
// 		else	return s2.top();
// 	}
// 	bool empty()
// 	{
// 		return (s1.empty() && s2.empty());
// 	}
// };
// int main()
// {
// 	MyQueue q;
// 	q.push(1);
// 	q.push(2);
// 	q.push(3);
// 	cout<<q.empty()<<endl;
// 	cout<<"peek: "<<q.peek()<<endl;
// 	cout<<"pop: "<<q.pop()<<endl;
// 	cout<<"peek: "<<q.peek()<<endl;
// 	cout<<"pop: "<<q.pop()<<endl;
// 	q.push(4);
// 	cout<<"pop: "<<q.pop()<<endl;
// 	cout<<"pop: "<<q.pop()<<endl;
// 	cout<<q.empty()<<endl;
// }

// 13. 225. Stacks using queue
// // using 2 queues
// class MyStack
// {
// public:
// 	queue<int> q1, q2;
// 	MyStack()
// 	{

// 	}
// 	void push(int x)
// 	{
// 		q2.push(x);
// 		while(!q1.empty())
// 		{
// 			q2.push(q1.front());
// 			q1.pop();
// 		}
// 		while(!q2.empty())
// 		{
// 			q1.push(q2.front());
// 			q2.pop();
// 		}
// 	}
// 	int pop()
// 	{
// 		int pop = q1.front();
// 		q1.pop();
// 		return pop;
// 	}
// 	int top()
// 	{
// 		return q1.front();
// 	}
// 	bool empty()
// 	{
// 		return q1.empty() && q2.empty();
// 	}
// };
// // using 1 queue
// class MyStack
// {
// public:
// 	queue<int> q;
// 	MyStack()
// 	{

// 	}
// 	void push(int x)
// 	{
// 		q.push(x);
// 		for(int i=0;i<q.size()-1;i++)
// 		{
// 			int temp = q.front();
// 			q.pop();
// 			q.push(temp);
// 		}
// 	}
// 	int pop()
// 	{
// 		int pop = q.front();
// 		q.pop();
// 		return pop;
// 	}
// 	int top()
// 	{
// 		return q.front();
// 	}
// 	bool empty()
// 	{
// 		return q.empty();
// 	}
// };
// int main()
// {
// 	MyStack s; 
// 	s.push(1);
// 	s.push(2);
// 	s.push(3);
// 	cout<<"Top: "<<s.top()<<endl;
// 	cout<<"Pop: "<<s.pop()<<endl;
// 	cout<<"Top: "<<s.top()<<endl;
// }

// 15. Sum of min and max elements of all subarrays of size k 
// int min_max_sum(vector<int>& nums, int k)
// {
// 	deque<int> q1, q2;	// q1 for max ele & q2 for min ele
// 	int ans = 0;
// 	// first window of k size
// 	for(int i = 0;i<k;i++)
// 	{
// 		// min element remove krdo 
// 		while(!q1.empty() && nums[i]>= nums[q1.back()])	q1.pop_back();	// remove small eles
// 		// max element remove kardo
// 		while(!q2.empty() && nums[i]<= nums[q2.back()])	q2.pop_back();	// remove large eles

// 		// inserting index, so that we can checkout of window element
// 		q1.push_back(i);
// 		q2.push_back(i);
// 	}
	
// 	ans += nums[q1.front()] + nums[q2.front()];

// 	// remaining windows ko process
// 	for(int i = k;i<nums.size();i++)
// 	{
// 		// out of window element ko remove krdia
// 		if(!q1.empty() && i-q1.front() >= k)
// 		{
// 			q1.pop_front();
// 		}
// 		if(!q2.empty() && i-q2.front() >= k)
// 		{
// 			q2.pop_front();
// 		}
// 		// ab firse current element k liye chotte element
// 		// ko remove krna h 
// 		while(!q1.empty() && nums[i]>= nums[q1.back()])	q1.pop_back();	// remove small eles
// 		while(!q2.empty() && nums[i]<= nums[q2.back()])	q2.pop_back();	// remove small eles

// 		// inserting index, so that we can checkout of window element
// 		q1.push_back(i);
// 		q2.push_back(i);
// 		// current window ka answer store krna h
// 		ans += nums[q1.front()] + nums[q2.front()];
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> nums = {2,5,-1,7,-3,-1,-2};
// 	int k = 4;
// 	cout<<min_max_sum(nums, k);
// }