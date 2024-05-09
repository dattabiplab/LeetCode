#include<bits/stdc++.h>
// #include <stack>
using namespace std;

void printStack(stack<int> st)
{
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

//	1. basic stack functions
// int main()
// {
// 	stack<int> st;
// 	st.push(10);		// pushing ele in stack
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);
// 	st.push(50);
// 	cout<<"Size of Stack is "<<st.size()<<endl;
// 	while(!st.empty())
// 	{
// 		cout<<st.top()<<" ";	// element on the top
// 		st.pop();
// 	}

// 	cout<<endl;

// 	stack<char> s;
// 	string p = "Biplab Datta";
// 	for(int i = 0;i<p.size();i++)	s.push(p[i]); 
// 	while(!s.empty())
// 	{
// 		cout<<s.top()<<" ";
// 		s.pop();
// 	}
// }

// 2. stack using array 
// class Stack
// {
// private:
// 	// properties
// 	int size;
// 	int *arr;
// 	int top; 
// public:
// 	Stack(int size)
// 	{
// 		this->size = size;
// 		arr = new int[size]; 
// 		top = -1;	// for empty stack top will be -1
// 	}
// 	// behaviour
// 	void push(int data)
// 	{
// 		// space available
// 		// insert
// 		if(size-top>1)
// 		{
// 			top++;
// 			arr[top] = data;
// 		}
// 		// space not available
// 		else	cout<<"Stack Overflow"<<endl;
// 	}
// 	void pop()
// 	{
// 		// stack is empty 
// 		if(top == -1)	cout<<"Stack Underflow"<<endl;
// 		else	top--;	// not empty
// 	}

// 	int getTop()
// 	{
// 		if(top == -1)	cout<<"Empty Stack"<<endl;
// 		else	return arr[top];
// 	}

// 	int getSize()
// 	{
// 		return top+1;
// 	}
// 	bool isEmpty()
// 	{
// 		if(top == -1)	return true;
// 		return false;
// 	}
// };
// int main()
// {
// 	Stack st(10);
// 	st.push(10);
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);
// 	st.push(50);

// 	while(!st.isEmpty())
// 	{
// 		cout<<st.getTop()<<" ";
// 		st.pop();
// 	}
// 	cout<<st.getSize();
// }

// 3. 2 stacks using 1 array 
// class Stack
// {
// public:
// 	int size;
// 	int *arr;
// 	int top1;
// 	int top2; 

// 	Stack(int size)
// 	{
// 		this->size = size;
// 		arr = new int[size];
// 		top1 = -1;
// 		top2 = size;
// 	}
// 	// functions

// 	void push1(int data)
// 	{
// 		if(top2-top1 == 1)	cout<<"OVERFLOW in stack 1"<<endl;		// space not available
// 		else
// 		{
// 			top1++;
// 			arr[top1] = data;
// 		}
// 	}
// 	void push2(int data)
// 	{
// 		if(top2-top1 == 1)	cout<<"OVERFLOW in stack 2"<<endl;		// space not available
// 		else
// 		{
// 			top2--;
// 			arr[top2] = data;
// 		}
// 	}
// 	void pop1()
// 	{
// 		if(top1 == -1)	cout<<"UNDERFLOW"<<endl;
// 		else
// 		{
// 			top1--;
// 		}
// 	}
// 	void pop2()
// 	{
// 		if(top2 == size)	cout<<"UNDERFLOW"<<endl;
// 		else	top2++;
// 	}
// 	void print()
// 	{
// 		for(int i =0;i<size;i++)	cout<<arr[i]<<" ";
// 	}
// };

// int main()
// {
// 	Stack st(10);
// 	st.push1(10);
// 	st.push1(20);
// 	st.push1(30);
// 	st.push1(40);
// 	st.push1(50);

// 	st.push2(10);
// 	st.push2(20);
// 	st.push2(30);
// 	st.push2(40);
// 	st.push2(50);

// 	st.print();
// }

// 4. Find Middle Element in a Stack
// void printMiddle(stack<int>& st, int& totalSize)
// {
// 	// base call 
// 	if(totalSize == 0)
// 	{
// 		cout<<"There is no element in stack";
// 		return;
// 	}
// 	// current size of stack == totalSize/2 +1
// 	if(st.size() == totalSize/2 +1)
// 	{
// 		cout<<"Middle Element is: "<<st.top();
// 		return;
// 	}
// 	int temp = st.top();
// 	st.pop();
// 	// recursive calls
// 	printMiddle(st, totalSize);
// 	// backtrack
// 	st.push(temp);
// }
// int main()
// {
// 	stack<int> st;
// 	st.push(10);		
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);
// 	st.push(50);
// 	st.push(60);
// 	st.push(70);

// 	int totalSize = st.size();
// 	printMiddle(st, totalSize);
// }

// 5. Insert at Bottom
void insertBottom(stack<int>& st, int data)
{
	if(st.size() == 0)
	{
			st.push(data);
			return;
	}
	int temp = st.top();
	st.pop();
	insertBottom(st, data);
	st.push(temp);
}
// int main()
// {
// 	stack<int> st;
// 	st.push(10);		
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);
// 	st.push(50);
// 	st.push(60);
// 	st.push(70);

// 	insertBottom(st,5);
// 	printStack(st);
// }

// 6. Reverse a Stack
// void reverseStack(stack<int> &s)
// {
// 	if(s.empty())	return;
// 	int target = s.top();
// 	s.pop();
// 	reverseStack(s);
// 	insertBottom(s, target);
// }
// int main()
// {
// 	stack<int> st;
// 	st.push(10);		
// 	st.push(20);
// 	st.push(30);
// 	st.push(40);
// 	st.push(50);
// 	st.push(60);
// 	st.push(70);
// 	cout<<"Before Reverse: ";
// 	printStack(st);
// 	reverseStack(st);
// 	cout<<"After Reverse: ";
// 	printStack(st);
// }

// 7. 20. Valid Parentheses
// bool isValid(string s)
// {
// 	stack<char> st;
// 	for(int i =0;i<s.size();i++)
// 	{
// 		char ch = s[i];
// 		// opening bracket
// 		if(ch == '(' || ch=='{' || ch=='[')	st.push(ch);
// 		// closing bracket
// 		else
// 		{
// 			if(!st.empty())		// if non-empty stack
// 			{
// 				char top = st.top();
// 				if(top == '(' && ch == ')')	st.pop();	// matching brackets
// 				else if(top == '{' && ch == '}')	st.pop();
// 				else if(top == '[' && ch == ']')	st.pop();
// 				else return false;	// brackets not matching
// 			}
// 			else	return false;
// 		}
// 	}
// 	if(st.empty())	return true;
// 	return false;
// }
// int main()
// {
// 	string s = "({[]})";
// 	cout<<isValid(s);
// }

// 8. Sort a Stack 
// void insertSorted(stack<int>& s, int target)
// {
// 	if(s.empty() || s.top()>=target)
// 	{
// 		s.push(target);
// 		return;
// 	}
// 	int temp = s.top();
// 	s.pop();
// 	insertSorted(s, target);
// 	s.push(temp);	// backtrack
// }
// void sortStack(stack<int> &s)
// {
// 	if(s.empty())	return;
// 	int temp = s.top();
// 	s.pop();
// 	sortStack(s);
// 	insertSorted(s,temp);
// }
// int main()
// {
// 	stack<int> st;
// 	st.push(7);		
// 	st.push(11);
// 	st.push(3);
// 	st.push(5);
// 	st.push(9);
// 	cout<<"Before Sort: ";
// 	printStack(st);
// 	sortStack(st);

// 	cout<<"After Sort: ";
// 	printStack(st);
// }

// 9. Remove Redundant Brackets
// 10. 155. Min Stack
// class Minstack
// {
// 	vector<pair<int,int>> s;
// public:
// 	Minstack()
// 	{

// 	}
// 	void push(int val)
// 	{
// 		if(s.empty())
// 		{
// 			pair<int,int> p = make_pair(val,val);
// 			s.push_back(p);
// 		}
// 		else
// 		{
// 			pair<int,int> p;
// 			p.first = val;
// 			p.second = min(val, s.back().second);	// min(val, top element's second )
// 			s.push_back(p);
// 		}
// 	}
// 	void pop()
// 	{
// 		s.pop_back();
// 	}
// 	int top()
// 	{
// 		return s.back().first;
// 	}
// 	int getMin()
// 	{
// 		return s.back().second;
// 	}
// };
// int main()
// {
// 	Minstack* obj = new Minstack();
// 	obj->push(2);
// 	obj->push(1);
// 	obj->push(4);
// 	obj->push(3);
// 	cout<<obj->getMin()<<endl;
// 	cout<<obj->top()<<endl;
// }

// 11. 32. Longest Valid Parentheses
// int longestValidPanrenthese(string s)
// {
// 	stack<int> st;
// 	int maxLen = 0;
// 	st.push(-1);
// 	for(int i = 0;i<s.size();i++)
// 	{
// 		if(s[i] == '(')	st.push(i);
// 		else		// if (s[i] == ')')
// 		{
// 			st.pop();	// removing first -1 then other ('s index of if case
// 			if(st.empty())	st.push(i);
// 			else
// 			{
// 				int len = i-st.top();
// 				maxLen = max(len, maxLen);
// 			}
// 		}
// 	}
// 	return maxLen;
// }
// int main()
// {
// 	string s = ")()()()())()()";
// 	// string s = ")()()(";
// 	cout<<longestValidPanrenthese(s);
// 	// cout<<cnt;
// }

// 12. Next Smaller Element
// vector<int> nextSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = v.size()-1;i>=0;i--)
// 	{
// 		int currEle = v[i];
// 		while(s.top() >= currEle)	// 4>1 & 3>1
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	// atleast -1 will be inserted
// 		s.push(currEle);
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> v = {2,1,4,3};
// 	vector<int> ans = nextSmallerElement(v);
// 	for(auto it:ans)	cout<<it<<" ";
// }

// 13. Previous Smaller Element
// vector<int> previousSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = 0;i<v.size();i++)
// 	{
// 		int currEle = v[i];
// 		while(s.top() >= currEle)	
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	// atleast -1 will be inserted
// 		s.push(currEle);
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> v = {2,1,4,3};
// 	vector<int> ans = previousSmallerElement(v);
// 	for(auto it:ans)	cout<<it<<" ";
// }

// 14. 84. Largest Rectangle in Histogram
// vector<int> previousSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = 0;i<v.size();i++)
// 	{
// 		int currEle = v[i];
// 		while(s.top() != -1 && v[s.top()] >= currEle)	// checking between elements 
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	
// 		s.push(i);	// inserting index
// 	}
// 	return ans;
// }
// vector<int> nextSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = v.size()-1;i>=0;i--)
// 	{
// 		int currEle = v[i];
// 		while(s.top() != -1 && v[s.top()] >= currEle)	// so that we donot go to -ve indexing -> error check
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	
// 		s.push(i);
// 	}
// 	return ans;
// }
// int largestRectangleArea(vector<int> &h)
// {
// 	vector<int> prev = previousSmallerElement(h);
// 	vector<int> next = nextSmallerElement(h);

// 	int maxArea = INT_MIN;
// 	int size = h.size();
// 	for(int i = 0;i<h.size();i++)
// 	{
// 		if(next[i] == -1) next[i] = size;
// 		int length = h[i];
// 		int width = next[i] - prev[i] -1; 
// 		int area = length * width;
// 		maxArea = max(area, maxArea);
// 	}
// 	return maxArea;
// }
// int main()
// {
// 	vector<int> heights = {2,1,5,6,2,3};
// 	cout<<largestRectangleArea(heights);
// }

// 15. 1047. Remove All Adjacent Duplicates In String 
// string removeDuplicates(string s)
// {
// 	stack<char> st;
// 	for(auto ch:s)
// 	{
// 		if(!st.empty() && st.top() == ch)	st.pop();	// pair up
// 		else	st.push(ch);	// for 1st case when st empty or for case when ch does not match
// 	}
// 	string ans;
// 	while(!st.empty())
// 	{
// 		ans += st.top();
// 		st.pop();
// 	}
// 	reverse(ans.begin(), ans.end());
// 	return ans;
// }
// int main()
// {
// 	string s = "abbaca";
// 	cout<<removeDuplicates(s);
// }

// 16. Minimum Brackets Reversal / Count the Reversals {gfg}
// int countRev(string s)
// {
// 	if(s.size() & 1)	return -1;	// odd size string cant form pairs
// 	int cnt = 0;
// 	stack<char> st;
// 	for(auto ch:s)
// 	{
// 		if(!st.empty() && st.top() == '{' && ch=='}')	st.pop();
// 		else st.push(ch);
// 	}
// 	while(!st.empty())
// 	{
// 		char temp = st.top();
// 		st.pop();
// 		if(temp == st.top())	cnt++;
// 		else cnt += 2;
// 		st.pop();
// 	}
// 	return cnt;
// }
// int main()
// {
// 	string s = "}{{}}{{{";
// 	cout<<countRev(s);
// }

// 17. 1019. Next Greater Node in LL 
// class ListNode
// {
// public:
// 	int val; 
// 	ListNode* next;
// 	ListNode(int val)
// 	{
// 		this->val = val;
// 		this->next = NULL;

// 	}
// };
// vector<int> nextLargerNodes(ListNode* head)
// {
// 	vector<int> ll; 
// 	while(head)
// 	{
// 		ll.push_back(head->val);
// 		head = head->next;
// 	}
// 	// vector<int> ans(ll.size());
// 	stack<int> s;
// 	for(int i = 0;i<ll.size();i++)
// 	{
// 		while(!s.empty() && ll[s.top()]<ll[i])
// 		{
// 			// means, ith element is the next greater of the element index present in stack 
// 			int kids = s.top();
// 			s.pop();
// 			// ans[kids] = ll[i];
// 			ll[kids] = ll[i];
// 		}
// 		s.push(i);
// 	}
// 	while(!s.empty())
// 	{
// 		ll[s.top()] = 0;
// 		s.pop();
// 	}
// 	ll[ll.size()-1] = 0;
// 	// return ans;
// 	return ll;
// }
// int main()
// {
// 	ListNode* first = new ListNode(2);
// 	ListNode* second = new ListNode(1);
// 	ListNode* third = new ListNode(7);
// 	ListNode* fourth = new ListNode(4);
// 	ListNode* fifth = new ListNode(3);
// 	ListNode* sixth = new ListNode(5);


// 	first->next = second;
// 	second->next = third;
// 	third->next = fourth;
// 	fourth->next = fifth;
// 	fifth->next = sixth;

// 	// ListNode* it = first;
// 	// while(it!=0)
// 	// {
// 	// 	cout<<it->val<<" ";
// 	// 	it = it->next;
// 	// }
// 	vector<int>ans = nextLargerNodes(first);
// 	for(auto it: ans)cout<<it<<" ";
// }

// 18. The Celebrity Problem {gfg}
// int celebrity(vector<vector<int>>& m, int n)
// {
// 	stack<int> s;
// 	// step 1: push all persons into stack
// 	for(int i = 0;i<n;i++)	s.push(i);
// 	while(s.size() != 1)
// 	{
// 		int a = s.top();	s.pop();
// 		int b = s.top();	s.pop();
// 		// if a knows b?
// 		if(m[a][b])
// 		{
// 			s.push(b);
// 		}
// 		// b is not celebrity, a might b
// 		else	s.push(a);
// 	}
// 	// step 3: check that single person is actually celebrity?
// 	int mightBeCelebrity = s.top();		s.pop();
// 	// celebrity should not know anyone
// 	for(int i = 0;i<n;i++)
// 	{
// 		if(m[mightBeCelebrity][i] != 0)	return -1;
// 	}
// 	// everyone should know celebrity
// 	for(int i = 0;i<n;i++)
// 	{
// 		if(m[i][mightBeCelebrity] != 1 && i!=mightBeCelebrity)	return -1;
// 	}
// 	// mightBeCelebrity is the celebrity
// 	return mightBeCelebrity;
// }
// int main()
// {
// 	vector<vector<int>> m = {{0,1,0}, {0,0,0}, {0,1,0}};
// 	int n = 3;
// 	cout<<celebrity(m,n);
// }

// 20. 901. Online stock span
// class StockSpanner
// {
// public:
// 	stack<pair<int,int>> s;		// price, span
// 	StockSpanner()
// 	{

// 	}
// 	int next(int price)
// 	{
// 		int span;
// 		while(!s.empty() && s.top()->first <= price)
// 		{
// 			span += s.top()->second;
// 			s.pop();
// 		}
// 		s.push({price,span});
// 		return span;
// 	}
// };

// 21. 71. Simplify Path
// void buildAns(stack<string>& s, string& ans)
// {
// 	if(s.empty())	return;
// 	string temp = s.top();
// 	s.pop();
// 	buildAns(s,ans);
// 	ans += temp;
// }
// string simplifyPath(string path)
// {
// 	stack<string> s; 
// 	int i = 0;
// 	while(i<path.size())
// 	{
// 		int start = i;
// 		int end = i+1; 
// 		while(end<path.size() && path[end] != '/')	++end;
// 		string minPath = path.substr(start, end-start);
// 		i = end;
// 		if(minPath == "/" or minPath == "/.")	continue;	// ignore
// 		if(minPath != "/..")	s.push(minPath);
// 		else if(!s.empty())	s.pop();	// minpath == "/.."
// 	}
// 	string ans = s.empty() ? "/" : "";	// if stack is empty return home '/'
// 	buildAns(s, ans);
// 	return ans;
// }
// int main()
// {
// 	// string s = "/../";
// 	// string s = "/home//foo/";
// 	// string s = "/a/./b/../../c/";
// 	string s = "/a//b////c/d//././/..";
// 	cout<<simplifyPath(s);
// }

// 22. 1003. Check if Word Is Valid After Substitutions
// // recursion 
// bool isValid(string s)
// {
// 	if(s.size() == 0)	return 1;
// 	int fnd = s.find("abc");
// 	if(fnd != string::npos)
// 	{	
// 		// found
// 		string tleft = s.substr(0, fnd);
// 		string tright = s.substr(fnd+3, s.size());
// 		return isValid(tleft + tright);
// 	}
// 	return 0;
// }
// // stack
// bool isValid(string s)
// {
// 	if(s[0] != 'a')	return 0;
// 	stack<char> st;
// 	for(char ch: s)
// 	{
// 		if(ch == 'a')	st.push('a');
// 		else if (ch == 'b')
// 		{
// 			if(!st.empty() && st.top() == 'a')	st.push('b');
// 			else return 0;
// 		}
// 		else if (ch == 'c')
// 		{
// 			if(!st.empty() && st.top() == 'b')
// 			{
// 				st.pop();
// 				if(!st.empty() && st.top() == 'a')	st.pop();
// 				else return 0;
// 			}
// 			else return 0;
// 		}
// 	}
// 	return st.empty();
// }
// int main()
// {
// 	string s = "aabcbc";
// 	// string s = "abccba";
// 	cout<<isValid(s);
// }

// 23. 394. Decode String	[incomplete]
// string decodeString(string s)
// {

// }
// int main()
// {
// 	string s = "3[a]2[bc]";
// 	// string s = "3[a2[c]]";
// 	cout<<decodeString(s);
// }

// 24. 85. Max Rectangle in Binary Matrix	/ Maximal Rectangle
// vector<int> previousSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = 0;i<v.size();i++)
// 	{
// 		int currEle = v[i];
// 		while(s.top() != -1 && v[s.top()] >= currEle)	// checking between elements 
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	
// 		s.push(i);	// inserting index
// 	}
// 	return ans;
// }
// vector<int> nextSmallerElement(vector<int> v)
// {
// 	vector<int> ans(v.size());
// 	stack<int> s; 
// 	s.push(-1);
// 	for(int i = v.size()-1;i>=0;i--)
// 	{
// 		int currEle = v[i];
// 		while(s.top() != -1 && v[s.top()] >= currEle)
// 		{
// 			s.pop();
// 		}
// 		ans[i] = s.top();	
// 		s.push(i);
// 	}
// 	return ans;
// }
// int largestRectangleArea(vector<int> &h)
// {
// 	vector<int> prev = previousSmallerElement(h);
// 	vector<int> next = nextSmallerElement(h);

// 	int maxArea = INT_MIN;
// 	int size = h.size();
// 	for(int i = 0;i<h.size();i++)
// 	{
// 		if(next[i] == -1) next[i] = size;
// 		int length = h[i];
// 		int width = next[i] - prev[i] -1; 
// 		int area = length * width;
// 		maxArea = max(area, maxArea);
// 	}
// 	return maxArea;
// }
// int maximalRectangle(vector<vector<char>>& mat)
// {
// 	int n = mat.size();	int m = mat[0].size();
// 	// given vector in char	converting into int
// 	vector<vector<int>> v;
// 	for(int i = 0;i<n;i++)
// 	{
// 		vector<int> temp;
// 		for(int j = 0;j<m;j++)
// 			temp.push_back(mat[i][j]-'0');
// 		v.push_back(temp);
// 	}
// 	int area = largestRectangleArea(v[0]);
// 	for(int i = 1;i<n;i++)
// 	{
// 		for(int j = 0;j<m;j++)
// 		{
// 			// let's update current row with previous row's values
// 			if(v[i][j])		v[i][j] += v[i-1][j];
// 			// if any row ele contains 0 then other values above it will be neglected
// 			else	v[i][j]	= 0;
// 		}
// 		area = max(area, largestRectangleArea(v[i]));
// 	}
// 	return area;
// }
// int main()
// {
// 	vector<vector<char>> matrix = {
// 		{'1','0','1','0','0'},
// 		{'1','0','1','1','1'},
// 		{'1','1','1','1','1'},
// 		{'1','0','0','1','0'}
// 	};
// 	cout<<maximalRectangle(matrix);
// }

// 25. 853. Car Fleet
// class Car
// {
// public:
// 	int pos; int speed;
// 	Car(int p, int s):pos(p),speed(s){};		// initialization list
// };
// static bool myComp(Car& a, Car& b)		// comparator function for my sorting
// {
// 	return a.pos<b.pos;
// }
// int carFleet(int target, vector<int>& position, vector<int>& speed)
// {
// 	vector<Car> cars; 
// 	for(int i = 0;i<position.size();i++)
// 	{
// 		Car car(position[i],speed[i]);
// 		cars.push_back(car);
// 	}
// 	sort(cars.begin(), cars.end(), myComp);
// 	stack<float> st;
// 	for(auto car: cars)
// 	{
// 		float time = (target-car.pos)/((float)car.speed);
// 		while(!st.empty() && time >= st.top())
// 		{
// 			st.pop();
// 		}
// 		st.push(time);
// 	}
// 	return st.size();
// }
// int main()
// {
// 	vector<int> position = {10,8,0,5,3};
// 	vector<int> speed = {2,4,1,1,3};
// 	int target = 12;
// 	cout<<carFleet(target, position, speed);
// }

// 26. 1776. Car Fleet 2
// vector<double> getCollisionTimes(vector<vector<int>>& cars)
// {

// }
// int main()
// {
// 	vector<vector<int>> cars = {{1,2},{2,1},{4,3},{7,2}};
// }