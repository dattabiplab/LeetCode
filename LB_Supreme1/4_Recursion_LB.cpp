#include <bits/stdc++.h>
using namespace std;

// RECURSION
// 1. Exponentiation
// int exponentiation(int a, int b)
// {
// 	if(b==0)	return 1;
// 	return a*exponentiation(a,b-1);
// }
// int main()
// {
// 	int a = 2,b = 5;
// 	cout<<exponentiation(a,b);
// }

// 2. Factorial
// int factorial(int n)
// {
// 	if(n==0)	return 1;
// 	return n*factorial(n-1);
// }
// int main()
// {
// 	int n = 5;
// 	cout<<factorial(5);
// }

// 3. Print Counting
// void printCounting(int n)
// {
// 	if(n==0)	return;
// 	printCounting(n-1);
// 	cout<<n<<" ";
// }
// int main()
// {
// 	int n = 5;
// 	printCounting(n);
// }

// 4. Print Reverse Counting
// void printReverseCounting(int n)
// {
// 	if(n==0)	return;
// 	cout<<n<<" ";
// 	printReverseCounting(n-1);
// }
// int main()
// {
// 	int n = 5;
// 	printReverseCounting(n);
// }

// 5. Fibonacci Number (nth term)
// int fib(int n)
// {
// 	if(n==1)	return 0;	// first term
// 	if(n==2)	return 1;	// second term
// 	return fib(n-1) + fib(n-2);
// }
// int main()
// {
// 	int n = 5;
// 	cout<<fib(n);
// }

// 6. 70. Climbing Stairs
// int climbStairs(int n)
// {
// 	if(n==0 || n==1)	return 1; 
// 	return climbStairs(n-1) + climbStairs(n-2);
// }
// int main()
// {
// 	int n = 7;
// 	cout<<climbStairs(n);
// }

// 7. Print Elements of an array using Recursion
// void arrayElements(array<int,5> a,int i)
// {
// 	if(i>=a.size())	return;
// 	cout<<a[i]<<" ";
// 	arrayElements(a,i+1);

// 		// print reverse elements
// 	// arrayElements(a,i+1);
// 	// cout<<a[i]<<" ";
// }
// void print(int a[], int n)
// {
// 	if(n==0) return;
// 	cout<<a[0]<<" ";
// 	// we are passing next index of array each time
// 	// we are reducing the size of array each time
// 	print(a+1,n-1);
// }
// int main()
// {
// 	array<int,5> arr = {1,2,3,4,5};
// 	int i=0;
// 	arrayElements(arr,i);
// 	int ar[5] = {10,20,30,40,50};
// 		// little bit complex way
// 	int n = 5;
// 	print(ar,n);
// }

// 8. Find Maximum Element of an array using Recursion
// int maxElement(int arr[], int n, int i)
// {
// 	if(i+1>n)	return INT_MIN;
// 	return max(arr[i],maxElement(arr,n,i+1));
// }
// void findMax(int arr[], int n, int i, int& maxi)	
// // we are dereferencing maxi otherwise it will be pass by value
// {
// 	if(i>=n)	return;
// 	if(arr[i]>maxi)
// 	{
// 		maxi = arr[i];
// 	}
// 	findMax(arr,n,i+1,maxi);
// }
// int main()
// {
// 	int arr[] = {10,30,15,21,44,26,17};
// 	int n = 7;
// 	int i=0;
// 	// cout<<maxElement(arr,n,i);
// 		// or
// 	int maxi = INT_MIN;
// 	findMax(arr,n,i,maxi);
// 	cout<<maxi;
// }

// 9. Find Minimum Element of an array using Recursion
// void findMin(int arr[], int n, int i, int& mini)
// {
// 	if(i>=n)	return;
// 	// if(arr[i]<mini)
// 	// {
// 	// 	mini = arr[i];
// 	// }
// 			// or
// 	mini = min(arr[i],mini);
// 	findMin(arr,n,i+1,mini);
// }
// int main()
// {
// 	int arr[] = {10,30,15,21,44,26,17};
// 	int n = 7;
// 	int i=0;
// 	int mini = INT_MAX;
// 	findMin(arr,n,i,mini);
// 	cout<<mini;
// }

// 10. Find Index of a key in a string using recursion
// int findIndex(string& s, char& key, int& n, int i)
// {
// 	if(i>n)	return -1;
// 	if(s[i]==key)
// 	{
// 		return i;
// 	}
// 	return findIndex(s,key,n,i+1);
// }
// int main()
// {
// 	string s = "lovebabbar";
// 	char key = 'r';
// 	// cout<<s.find(key);
// 	int i =0;
// 	int n = s.size();
// 	cout<<findIndex(s,key,n,i);
// }

// 11. Print Digits of a Number
// void printDigits(int n)
// {
// 	if(n==0)	return;
// 	printDigits(n/10);
// 	cout<<n%10<<" ";
// }
// int main()
// {
// 	int n = 647;
// 	printDigits(n);
// }

// 12. array is sorted or not
// bool isSorted(int a[], int& n, int i)
// {
// 		// if I have reached i+1 position that means all ele are in sorted manner
// 	if(i+1>=n)	return true;
// 		// if any 1 ele is not sorted return false
// 	if(a[i]>a[i+1])	return false;
// 		// if either any if is not executed check for next ele
// 	isSorted(a,n,i+1);
// }
// int main()
// {
// 	int arr[] = {10,20,30,40,50,60};
// 	int n = 6;
// 	int i=0;
// 	cout<<isSorted(arr,n,i);
// }

// 13. Binary Search
// int BinarySearch(vector<int>& v, int key, int start, int end)
// {
// 	int mid = (start+end)/2;
// 	if(start<end)
// 	{
// 		if(v[mid] == key)	return mid;		// [base case]
// 		else if(key<v[mid])	return BinarySearch(v,key,start, mid-1);
// 		else return BinarySearch(v,key,mid+1,end);
// 	}
// 		// when start>end 	[base case]
// 	return -1;
// }
// int main()
// {
// 	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
// 	int target = 0;
// 	int n = v.size();
// 	int start = 0, end = n-1;
// 	cout<<BinarySearch(v, target, start, end);
// }

// 14. Subsequences of a String
// void printSubsequences(string s, string op, int i)
// {
// 	if(i>=s.size())
// 	{
// 		cout<<op<<endl;
// 		return;
// 	}
// 	// exclude
// 	printSubsequences(s,op,i+1);

// 	// include
// 	op.push_back(s[i]); //including ith char of string in output
// 	printSubsequences(s,op,i+1);
// 	// op.pop_back();	//if we do include first we also have to do pop_back
// }
// int main()
// {
// 	string s = "abc";
// 	string output = "";
// 	int i = 0;
// 	printSubsequences(s,output,i);
// }

// 15. Find min no. of coins reqd. to reach target from Infinite supply of coins in an array 
// int solve(vector<int>& a, int t)
// {
// 	if(t==0)	return 0;
// 	if(t<0)	return INT_MAX;
// 	int mini = INT_MAX;
// 	for(int i=0;i<a.size();i++)
// 	{
// 		int ans = solve(a, t-a[i]);
// 		if(ans!= INT_MAX)	
// 		// if ans = int_max+1 will change to negative value which will be taken by mini
// 			mini = min(mini,ans+1);
// 	}
// 	return mini;
// }
// int main()
// {
// 	vector<int> coins = {1,2};
// 	int target = 3;
// 	int ans = solve(coins,target);
// 	cout<<ans;
// }

// 16. Cut Into Segments
// int maxSegments(int n, int x, int y, int z)
// {
// 	if(n==0)	return 0;
// 	if(n<0)		return INT_MIN;
// 	// when we cutted x length from n we also have to consider that x length,i.e why +1
// 	int ans1 = maxSegments(n-x,x,y,z)+1;
// 	int ans2 = maxSegments(n-y,x,y,z)+1;
// 	int ans3 = maxSegments(n-z,x,y,z)+1;
// 	int ans = max(ans1, max(ans2, ans3));
// 	return ans;
// }
// int main()
// {
// 	int n = 7;
// 	int x = 5;
// 	int y = 2;
// 	int z = 2;
// 	int ans = maxSegments(n,x,y,z);
// 	// ans = valid(>0) or invalid(<0)
// 	if(ans<0)	ans = 0;
// 	cout<<ans;
// }

// 17. Maximum sum of non-adjacent elements
// void maxSum(vector<int>& v, int i, int sum, int& maxi)
// {
// 	if(i>=v.size())
// 	{
// 		maxi = max(sum, maxi);
// 		return;
// 	}
// 	// include	//neglecting adjacent element i+1 index
// 	maxSum(v,i+2,sum+v[i],maxi);
// 	// exclude
// 	maxSum(v,i+1,sum,maxi);
// }
// int main()
// {
// 	vector<int> v = {2,1,4,9};
// 	int sum = 0;
// 	int maxi = INT_MIN;
// 	int i = 0;
// 	maxSum(v,i,sum,maxi);
// 	cout<<maxi;
// }

// 18. Print Array (Linear Traversal of an Array)
// void printArray(int a[], int n, int& count)
// {
// 	count++;
// 	if(n==0)	return;
// 	// cout<<*a<<" ";
// 	printArray(a+1,n-1,count);
// }
// int main()
// {
// 	int a[]= {1,2,3,4,50};
// 	int n = 5;
// 	int count = 0;
// 	printArray(a,n,count);
// 	cout<<count;
// }

// 19. Print all Subarrays from an array
// void printSubarray(vector<int>& v, int start, int end)
// {
// 	if(start>= v.size())	return;
// 		// after printing 1 set resetting start again
// 	if(end>= v.size())
// 	{
// 		start++; 
// 		end = start;
// 	}
// 	for(int i = start;i<=end;i++)
// 	{
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl; 
// 	printSubarray(v,start,end+1);
// }
// int main()
// {
// 	vector<int> v = {1,2,3,4,5};
// 	int start = 0, end = start;
// 	printSubarray(v, start, end);
// }

// // 20. 279. Perfect Squares
// int numSquaresHelper(int n)
// {	
// 		// after deduction when reach at 0 means perfect square found
// 	if(n == 0)	return 1;
// 		// after many deduction when n becomes negative
// 	if(n < 0)	return 0;
// 	int ans = INT_MAX;
// 	int i = 1;
// 	int end = sqrt(n);
// 	while(i <= end)
// 	{
// 		int perfectSquare = i * i;
// 		int numberOfPerfectSquares = 1 + numSquaresHelper(n - perfectSquare);
// 			// finding the smallest node
// 		if(numberOfPerfectSquares < ans)	ans = numberOfPerfectSquares;
// 		i++;
// 	}
// 	return ans;
// }
// int numSquares(int n)
// {
// 		// due to extra 1 we are deducting from it
// 	return numSquaresHelper(n) - 1;
// }
// int main()
// {
// 	int n = 13;
// 	cout<<numSquares(n);
// }

// MERGE SORT
// void merge(int arr[], int s, int e)
// {
// 	int mid = (s+e)/2;
// 	int leftSize = mid - s + 1;
// 	int rightSize = e - mid;

// 	int* left = new int[leftSize];
// 	int* right = new int[rightSize];

// 	int k = s;
// 	for(int i=0;i<leftSize;i++)
// 	{
// 		left[i] = arr[k];
// 		k++;
// 	}
// 	k = mid+1;
// 	for(int i=0;i<rightSize;i++)
// 	{
// 		right[i] = arr[k];
// 		k++;
// 	}

// 	int leftIndex = 0, rightIndex = 0;
// 	int mainArrIndex = s;

// 	while(leftIndex<leftSize && rightIndex<rightSize)
// 	{
// 		if(left[leftIndex] < right[rightIndex])
// 		{
// 			arr[mainArrIndex++] = left[leftIndex++];
// 		}
// 		else	arr[mainArrIndex++] = right[rightIndex++];
// 	}

// 	while(leftIndex<leftSize)
// 	{
// 		arr[mainArrIndex++] = left[leftIndex++];
// 	}

// 	while(rightIndex<rightSize)
// 	{
// 		arr[mainArrIndex++] = right[rightIndex++];
// 	}
// }
// void mergeSort(int arr[], int s, int e)
// {
// 	if(s >= e)	return;
// 	int mid = (s+e)/2; 
// 	// dividing into left wala part
// 	mergeSort(arr,s,mid);
// 	// dividing into right wala part
// 	mergeSort(arr,mid+1,e);
// 	// merging part
// 	merge(arr,s,e);
// }
// int main()
// {
// 	int arr[] = {4,5,13,2,12};
// 	int n = 5;
// 	int s = 0, e = n-1;
// 	mergeSort(arr,s,e);
// 	for(int i=0;i<n;i++)	cout<<arr[i]<<" ";
// }

// 1. Count Inversions {Hackerrank}
		// method 1
// long countInversions(vector<int> a)	// O(n^2)
// {
// 	long count = 0;
// 	for(int i =0;i<a.size();i++)
// 	{
// 		for(int j=i+1;j<a.size();j++)
// 		{
// 			if(a[i]>a[j]) count++; 
// 		}
// 	}
// 	return count;
// }
		// method 2
// long merge(vector<int>& a,vector<int>& temp, int start, int mid, int end)
// {
// 	long c = 0;
// 	int i = start, j = mid+1, k = start;
// 	while(i<=mid && j<=end)
// 	{
// 		if(a[i]<=a[j])
// 		{
// 			temp[k++] = a[i++];
// 		}
// 		else	//a[i]>a[j]	inversion time
// 		{
// 			temp[k++] = a[j++];
// 			c += mid-i+1;
// 		}
// 	}
// 	while(i<=mid)
// 	{
// 		temp[k++] = a[i++];
// 	}
// 	while(j<=end)
// 	{
// 		temp[k++] = a[j++];
// 	}
// 	while(start<=end)
// 	{
// 		a[start] = temp[start];
// 		++start;
// 	}
// 	return c;
// }
// long mergeSort(vector<int>& a,vector<int>& temp, int start, int end)
// {
// 	long c = 0;
// 	if(start>= end) return 0;
// 	int mid = start + (end-start)/2; 
// 	c += mergeSort(a,temp,start,mid);
// 	c += mergeSort(a,temp,mid+1,end);
// 	c += merge(a,temp,start,mid,end);
// 	return c;
// }
// long countInversions(vector<int> a)	// TC= O(nlogn), SC= O(n)
// {
// 	long count = 0;		// inversion counts
// 	vector<int> temp(a.size(),0);
// 	count = mergeSort(a,temp,0,a.size()-1);
// 	// for(auto it:a) cout<<it<<" ";
// 	return count;
// }
// int main()
// {
// 	vector<int> arr = {8,4,2,1};
// 	long n = countInversions(arr);
// 	cout<<n;
// }

// 2. InPlace Merge Sort 
		// method 1
// void merge(vector<int>& a,vector<int>& temp,int start,int mid,int end)
// {
// 	int i = start, j = mid+1, k = start;
// 	while(i<=mid && j<=end)
// 	{
// 		if(a[i]<=a[j])	temp[k++] = a[i++];
// 		else	temp[k++] = a[j++];
// 	}
// 	while(i<=mid)	temp[k++] = a[i++];
// 	while(j<=end)	temp[k++] = a[j++];
// 	while(start<=end)
// 	{
// 		a[start] = temp[start];
// 		start++;
// 	}
// }
		// method 2
// void InPlaceMergeSort(vector<int>& a,int start,int end)
// {
// 	int total_size = end-start+1;
// 	int gap = (total_size/2) + (total_size%2);
// 	while(gap>0)
// 	{
// 		int i = start, j = start+gap;
// 		while(j<=end)
// 		{
// 			if(a[i]>a[j])	swap(a[i],a[j]);
// 			i++;j++;
// 		}
// 		gap = gap<=1 ? 0 : (gap/2) + (gap%2);
// 		// for once gap =1 will work after still again 1 comes it will set gap =0
// 	}
// }
// void mergeSort(vector<int>& a,vector<int>& temp,int start,int end)
// {
// 	if(start>=end) return;
// 	int mid = (start+end)>>1;
// 	mergeSort(a,temp,start,mid);
// 	mergeSort(a,temp,mid+1,end);
// 	// merge(a,temp,start,mid,end);
// 	InPlaceMergeSort(a,start,end);
// }
// void Sort(vector<int>& a)
// {
// 	vector<int> temp(a.size(),0);
// 	int start = 0, end = a.size()-1;
// 	// mergeSort(a,temp,start,end);	//normal mergeSort [TC= O(nlogn), SC= O(n)]
// 	InPlaceMergeSort(a,start,end);
// }
// int main()
// {
// 	vector<int> arr = {8,4,2,1};
// 	Sort(arr);
// 	for(auto it:arr) cout<<it<<" ";
// }
// 3. 53. Maximum Subarray
// int maxSubArray(vector<int>& a)
// {

// }
// int main()
// {
// 	vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
// }

// QUICK SORT
// int partition(int arr[], int s, int e)
// {
// 	// step1: choose pivot element
// 	int pivotIndex = s;
// 	int pivotElement = arr[s]; 

// 	// step2: find right position for pivot element & place it there
// 	int count = 0;
// 	for(int i=s+1;i<=e;i++)
// 	{
// 		if(arr[i] <= pivotElement)	count++;
// 	}
// 	// jab mein loop se bahar hua, toh mere paas pivot ki right position ka index ready hein
// 	int rightIndexOfPivot = s + count;
// 	swap(arr[rightIndexOfPivot], arr[pivotIndex]);
// 	pivotIndex = rightIndexOfPivot;

// 	// step3: left me chote & right me bade
// 	int i = s, j = e;
// 	while(i<pivotIndex && pivotIndex<j)
// 	{
// 	// 2 case ho sakte h
// 		// A-> no need to swap
// 		while(arr[i] < pivotElement)	i++;
// 		while(pivotElement < arr[i])	j--;
// 		// B-> you found the elements to swap 
// 		if(i<pivotIndex && pivotIndex<j)	swap(arr[i], arr[j]);
// 	}
// 	return pivotIndex;
// }
// void QuickSort(int arr[], int s, int e)
// {
// 	// base case
// 	if(s >= e) return;
// 	// partition logic
// 	int p = partition(arr, s, e);
// 	// recursive calls
// 	// left -> pivot element
// 	QuickSort(arr, s, p-1);
// 	// pivot element ->right
// 	QuickSort(arr, p+1, e);
// }
// int main()
// {
// 	int arr[] = {8,3,4,1,20,50,30};
// 	int n = 7;
// 	int s = 0, e = n-1;
// 	QuickSort(arr, s, e);
// 	for(int i = 0;i<n;i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// }
// another way to choose pivot_index for QuickSort
// void QuickSort(vector<int>& a,int start, int end)
// {
// 	// base case
// 	if(start >= end) return;
// 	int i = start-1;
// 	int j = start;
// 	int pivot_index = end;
// 	while(j<pivot_index)
// 	{
// 		if(a[j]<a[pivot_index])
// 		{
// 			i++;	swap(a[i],a[j]);
// 		}
// 		j++;
// 	}
// 	i++;
// 	// i is the right position for pivot element that's why we do swap 
// 	swap(a[i],a[pivot_index]);
// 	QuickSort(a,start,i-1);
// 	QuickSort(a,i+1,end);
// }
// int main()
// {
// 	vector<int>  arr = {8,3,4,1,20,50,30};
// 	int n = arr.size();
// 	int s = 0, e = n-1;
// 	QuickSort(arr, s, e);
// 	for(int i = 0;i<n;i++)	cout<<arr[i]<<" ";
// }

// BACKTRACKING
// 1. Print all Permutations
// void printPermutation(string& s, int i)
// {
// 	// base case
// 	if(i >= s.length())
// 	{
// 		cout<<s<<" ";
// 		return;
// 	}
// 	for(int j = i;j<s.length();j++)
// 	{
// 		swap(s[i],s[j]); 
// 		// recursion call
// 		printPermutation(s,i+1);
// 		// backtracking-> to recreate the original input string
// 		swap(s[i], s[j]);
//	// either do an extra swap or pass string by value
// 	}
// }
// int main()
// {
// 	string s = "abc";
// 	printPermutation(s,0);
// }

// 2. Rat in a Maze Problem-1 {gfg}
// bool isSafe(int row, int col,int x, int y, vector<vector<int>> &m, vector<vector<bool>> &v)
// {
// 	if(((x>=0 && x<row) && (y>=0 && y<col)) && (m[x][y]==1) && (v[x][y]==false))	return true;
// 	else return false;
// }
// void solveMaze(vector<vector<int>> &m, int row, int col,int x, int y,
// 	vector<vector<bool>> &visited, vector<string> &path, string o){
// 	// base case
// 	if(x==row-1 && y == col-1)
// 	{
// 		 path.push_back(o);
// 		 return;
// 	}
// 	// down i+1,j
// 	if(isSafe(row,col,x+1,y,m,visited))
// 	{
// 		visited[x+1][y] = true;
// 		solveMaze(m,row,col,x+1,y,visited,path,o+'D');
// 		// backtracking
// 		visited[x+1][y] = false;
// 	}
// 	// left i,j-1
// 	if(isSafe(row,col,x,y-1,m,visited))
// 	{
// 		visited[x][y-1] = true;
// 		solveMaze(m,row,col,x,y-1,visited,path,o+'L');
// 		// backtracking
// 		visited[x][y-1] = false;
// 	}
// 	// right i,j+1
// 	if(isSafe(row,col,x,y+1,m,visited))
// 	{
// 		visited[x][y+1] = true;
// 		solveMaze(m,row,col,x,y+1,visited,path,o+'R');
// 		// backtracking
// 		visited[x][y+1] = false;
// 	}
// 	// up i-1,j
// 	if(isSafe(row,col,x-1,y,m,visited))
// 	{
// 		visited[x-1][y] = true;
// 		solveMaze(m,row,col,x-1,y,visited,path,o+'U');
// 		// backtracking
// 		visited[x-1][y] = false;
// 	}
// }
// vector<string> findPath(vector<vector<int>> &m, int n)
// {
// 	int row = n;
// 	int col = n;

// 	vector<string> path;
// 	string output = "";

// 	vector<vector<bool>> visited(row,vector<bool> (col,false));
// 	if(m[0][0] = 0) return path;

// 	visited[0][0] = true;
// 	solveMaze(m,row,col,0,0,visited,path,output);
// 	return path;
// }
// int main()
// {
// 	int n;cin>>n; 
// 	vector<vector<int>> maze(n, vector<int> (n,0));
// 	for(int i = 0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++) cin>>maze[i][j]; 
// 	}
// 	vector<string> result = findPath(maze,n);
// 	sort(result.begin(),result.end());
// 	for(auto i:result) cout<<i<<" ";
// }

// bool isSafe(int row, int col,int x, int y, vector<vector<int>> &m, vector<vector<bool>> &v)
// {
// 	if(((x>=0 && x<row) && (y>=0 && y<col)) && (m[x][y]==1) && (v[x][y]==false))	return true;
// 	else return false;
// }
// void solveMaze(vector<vector<int>> &m, int row, int col,int x, int y,
// 	vector<vector<bool>> &visited, vector<string> &path, string o){

// 	int dx[4] = {1,0,0,-1};
// 	int dy[4] = {0,-1,1,0};
// 	char direction[4] = {'D','L','R','U'};
// 	// base case
// 	if(x==row-1 && y == col-1)
// 	{
// 		 path.push_back(o);
// 		 return;
// 	}
// 	for(int k=0;k<4;k++)
// 	{
// 		int newx = x + dx[k];  
// 		int newy = y + dy[k];
// 		char dir = direction[k];
// 		if(isSafe(row,col,newx,newy,m,visited))
// 		{
// 			visited[newx][newy] = true;
// 			solveMaze(m,row,col,newx,newy,visited,path,o+dir); 
// 			// backtrack
// 			visited[newx][newy] = false;
// 		}
// 	}
// }
// vector<string> findPath(vector<vector<int>> &m, int n)
// {
// 	int row = n;
// 	int col = n;

// 	vector<string> path;
// 	string output = "";

// 	vector<vector<bool>> visited(row,vector<bool> (col,false));
// 	if(m[0][0] = 0) return path;

// 	visited[0][0] = true;
// 	solveMaze(m,row,col,0,0,visited,path,output);
// 	return path;
// }
// int main()
// {
// 	int n;cin>>n; 
// 	vector<vector<int>> maze(n, vector<int> (n,0));
// 	for(int i = 0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++) cin>>maze[i][j]; 
// 	}
// 	vector<string> result = findPath(maze,n);
// 	sort(result.begin(),result.end());
// 	for(auto i:result) cout<<i<<" ";
// }

// 3. 51. N-Queens
// void printSolution(vector<vector<char>> &board, int n)
// {
// 	for(int i =0;i<n;i++)
// 	{
// 		for(int j = 0;j<n;j++)
// 		{
// 			cout<<board[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	cout<<endl<<endl;
// }
// 	// isSafe function of O(n)
// // bool isSafe_n(vector<vector<char>> &board, int row, int col, int n)
// // {
// // 	int i = row;
// // 	int j = col;
// // 	// check in same row 
// // 	while(j>=0)
// // 	{
// // 		if(board[i][j] == 'Q')	return false;
// // 		j--;
// // 	}

// // 	i = row;
// // 	j = col;
// // 	// check in upper left diagonal
// // 	while(i>=0 && j>=0)
// // 	{
// // 		if(board[i][j] == 'Q')	return false;
// // 		i--; j--;
// // 	}
// // 	i = row;
// // 	j = col;
// // 	// check in bottom left diagonal
// // 	while(i<n && j>=0)
// // 	{
// // 		if(board[i][j] == 'Q')	return false;
// // 		i++; j--;
// // 	}
// // 	// kahin par bhi queen nahi mila
// // 	// iska matlab yeh position safe hein
// // 	return true;
// // }
// 	// isSafe function of O(1) -> by map
// unordered_map<int,bool> rowCheck;
// unordered_map<int,bool> upperLeftDiagonalCheck;
// unordered_map<int,bool> bottomLeftDiagonalCheck;

// bool isSafe_1(vector<vector<char>> &board, int row, int col, int n)
// {
// 	if(rowCheck[row] == true)	return false;
// 	if(upperLeftDiagonalCheck[n-1+col-row] == true)	return false;
// 	if(bottomLeftDiagonalCheck[col+row] == true)	return false;
// 	return true;
// }
// void solve(vector<vector<char>> &board, int n, int col)
// {
// 	// base case
// 	if(col>=n)
// 	{
// 		printSolution(board,n);
// 		return;
// 	}
// 	for(int row = 0;row<n;row++)
// 	{
// 	// // solve 1 case 
// 	// 	if(isSafe_n(board, row, col, n))
// 	// 	{
// 	// 		board[row][col] = 'Q';
// 	// 		// recursion
// 	// 		solve(board, n, col+1); 
// 	// 		// backtracking
// 	// 		board[row][col] = '-';
// 	// 	}
// 		// OR 
// 		// solve 1 case 
// 		if(isSafe_1(board, row, col, n))
// 		{
// 			board[row][col] = 'Q';
// 				// maps assigning
// 			rowCheck[row] = true;
// 			upperLeftDiagonalCheck[n-1+col-row] = true;
// 			bottomLeftDiagonalCheck[col+row] = true;
// 			// recursion
// 			solve(board, n, col+1); 
// 			// backtracking
// 			board[row][col] = '-';
// 			rowCheck[row] = false;
// 			upperLeftDiagonalCheck[n-1+col-row] = false;
// 			bottomLeftDiagonalCheck[col+row] = false;
// 		}
// 	}
// }
// int main()
// {
// 	int n = 4;
// 	vector<vector<char>> board(n,vector<char> (n,'-'));
// 	int col = 0;
// 	solve(board,n,col);
// }

	// Leetcode Solution
// unordered_map<int,bool> rowCheck;
// unordered_map<int,bool> upperLeftDiagonalCheck;
// unordered_map<int,bool> bottomLeftDiagonalCheck;
// void storeSolution(vector<vector<char>> &board, int n,vector<vector<string>>& ans)
// {	
// 	vector<string> temp;
// 	for(int i =0;i<n;i++)
// 	{	
// 		string output = "";
// 		for(int j = 0;j<n;j++)
// 		{
// 			output.push_back(board[i][j]);
// 		}
// 		temp.push_back(output);
// 	}
// 	ans.push_back(temp);
// }
// bool isSafe_1(vector<vector<char>> &board, int row, int col, int n)
// {
// 	if(rowCheck[row] == true)	return false;
// 	if(upperLeftDiagonalCheck[n-1+col-row] == true)	return false;
// 	if(bottomLeftDiagonalCheck[col+row] == true)	return false;
// 	return true;
// }
// void solve(vector<vector<char>> &board, int n, int col, vector<vector<string>>& ans)
// {
// 	// base case
// 	if(col>=n)
// 	{
// 		storeSolution(board,n,ans);
// 		return;
// 	}
// 	for(int row = 0;row<n;row++)
// 	{
// 		// solve 1 case 
// 		if(isSafe_1(board, row, col, n))
// 		{
// 			board[row][col] = 'Q';
// 				// maps assigning
// 			rowCheck[row] = true;
// 			upperLeftDiagonalCheck[n-1+col-row] = true;
// 			bottomLeftDiagonalCheck[col+row] = true;
// 			// recursion
// 			solve(board, n, col+1, ans); 
// 			// backtracking
// 			board[row][col] = '.';
// 			rowCheck[row] = false;
// 			upperLeftDiagonalCheck[n-1+col-row] = false;
// 			bottomLeftDiagonalCheck[col+row] = false;
// 		}
// 	}
// }
// vector<vector<string>> solveQueens(int n)
// {
// 	vector<vector<char>> board(n,vector<char> (n,'.'));
// 	vector<vector<string>> ans;
// 	int col = 0;
// 	solve(board,n,col,ans);
// 	return ans;
// }
// int main()
// {
// 	int n = 4;
// 	vector<vector<string>> board = solveQueens(n);
// 	for(int i = 0;i<n;i++)
// 	{
// 		for(int j = 0;j<n;j++)	cout<<board[i][j]<<" ";
// 			cout<<endl;
// 	}
// }

// 4. 22. Generate Parentheses
	// by reducing 
// void solve(vector<string>& ans, int n, int open, int close, string output)
// {
// 	// base case
// 	if(open==0 && close==0)
// 	{
// 		ans.push_back(output);
// 		return;
// 	}
// 	// include open bracket
// 	if(open>0)	// we have to make sure that we have open brackets first of all
// 	{
// 		output.push_back('(');
// 		solve(ans,n,open-1,close,output);
// 		// backtracking
// 		output.pop_back();
// 	}
// 	// include close bracket
// 	if(close>open)
// 	{
// 		output.push_back(')');
// 		solve(ans,n,open,close-1,output);
// 		// backtracking
// 		output.pop_back();
// 	}
// }
// vector<string> generateParentheses(int n)
// {
// 	int open = n, close = n;
// 	vector<string> ans;
// 	string output = "";
// 	solve(ans,n,open,close,output);
// 	return ans;
// }
// int main()
// {
// 	int n = 2;
// 	vector<string> ans = generateParentheses(n);
// 	for(auto it:ans)	cout<<it<<" ";
// }

// 5. 17. Letter Combinations of a Phone Number (as old mobile phones)
// [2:"abc", 3:"def", 4:"ghi", 5:"jkl", 6:"mno", 7:"pqrs", 8:"tuv", 9:"wxyz"]
// void solve(vector<string>& ans, int index, string digits, vector<string>& mapping, string output)
// {
// 	// base case 
// 	if(index >= digits.size())
// 	{
// 		ans.push_back(output);
// 		return;
// 	}
// 	// 1 value solve baki recursion
// 	int digit = digits[index] - '0';
// 	string value = mapping[digit];
// 	for(int i = 0;i<value.size();i++)
// 	{
// 		char ch = value[i];
// 		// including
// 		output.push_back(ch);
// 		// recursive call
// 		solve(ans,index+1,digits,mapping,output);
// 		// backtracking (excluding)
// 		output.pop_back();
// 	}
// }
// vector<string> letterCombinations(string digits)
// {
// 	vector<string> ans;
// 	if(digits.size() == 0) return ans;
// 	int index = 0;
// 	string output = "";
// 	vector<string> mapping(10);
// 	mapping[2] = "abc";
// 	mapping[3] = "def";
// 	mapping[4] = "ghi";
// 	mapping[5] = "jkl";
// 	mapping[6] = "mno";
// 	mapping[7] = "pqrs";
// 	mapping[8] = "tub";
// 	mapping[9] = "wxyz";
// 	solve(ans,index,digits,mapping,output);
// 	return ans;
// }
// int main()
// {
// 	string digits = "23";
// 	vector<string> ans = letterCombinations(digits);
// 	for(auto it: ans)	cout<<it<<" ";
// }

// 6. 39. Combination Sum
// void combinationSum_helper(vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& v,int index)
// {
// 		// base case
// 	if(target == 0)
// 	{
// 		ans.push_back(v);
// 		return;
// 	}
// 	if(target <0)	return;
// 	for(int i =index;i<candidates.size();i++)
// 	{
// 		v.push_back(candidates[i]);
// 		combinationSum_helper(candidates,target-candidates[i],ans,v,i);
// 		v.pop_back();
// 	}
// }
// vector<vector<int>> combinationSum(vector<int>& candidates,int& target)
// {
// 	vector<vector<int>> ans;
// 	vector<int> v;
// 	combinationSum_helper(candidates,target,ans,v,0);
	
// 	return ans;
// }
// int main()
// {
// 	int target = 7;
// 	vector<int> candidates = {2,3,6,7};
// 	vector<vector<int>> ans = combinationSum(candidates,target);
// 	for(int i=0;i<ans.size();i++)
// 	{
// 		for(int j=0;j<ans[i].size();j++)	cout<<ans[i][j]<<",";
// 		cout<<endl;
// 	}
// }

// 7. 40. Combination Sum II
// void combinationSum_helper2(vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& v,int index)
// {
// 		// base case
// 	if(target == 0)
// 	{
// 		ans.push_back(v);
// 		return;
// 	}
// 	if(target <0)	return;
// 	for(int i =index;i<candidates.size();i++)
// 	{
// 		// to prevent from creating duplicate combinations 
// 		if(i>index && candidates[i-1] == candidates[i])	continue;
// 		v.push_back(candidates[i]);
// 		combinationSum_helper2(candidates,target-candidates[i],ans,v,i+1);
// 		// by passing index = i we are choosing repeating element
// 		// to prevent it we are passing index = i+1 so next element will be choosen
// 		v.pop_back();
// 	}
// }
// vector<vector<int>> combinationSum2(vector<int>& candidates,int& target)
// {
// 	// to get serially similar elements together
// 	sort(candidates.begin(),candidates.end());	
// 	vector<vector<int>> ans;
// 	vector<int> v;
// 	combinationSum_helper2(candidates,target,ans,v,0);
// 		// to prevent repeatative combination we made a set to neglect them
// 	// // this way increases the complexity of code & it gives TLE
// 	// set<vector<int>> st;
// 	// for(auto ele:ans)
// 	// {
// 	// 	// complexity of insert is logn and for n ele we get nlogn complexity
// 	// 	st.insert(ele);
// 	// }
// 	// ans.clear();	// ans is cleared
// 	// for(auto ele:st)
// 	// {
// 	// 	ans.push_back(ele);
// 	// }
// 	return ans;
// }
// int main()
// {
// 	int target = 5;
// 	vector<int> candidates = {2,5,2,1,2};
// 	vector<vector<int>> ans = combinationSum2(candidates,target);
// 	for(int i=0;i<ans.size();i++)
// 	{
// 		for(int j=0;j<ans[i].size();j++)	cout<<ans[i][j]<<",";
// 		cout<<endl;
// 	}
// }

// 8. 47. Permutations II
// void permuteUnique_helper(vector<vector<int>>& ans,vector<int>& a, int start)
// {
// 	// base
// 	if(start == a.size())
// 	{
// 		ans.push_back(a);
// 		return;
// 	}
// 	unordered_map<int,bool> visited;
// 	for(int i=start;i<a.size();i++)
// 	{
// 		if(visited.find(a[i]) != visited.end())	continue;
// 		visited[a[i]] = true;
// 		swap(a[i],a[start]); 
// 		permuteUnique_helper(ans,a,start+1);
// 		swap(a[i],a[start]); 
// 	}
// }
// vector<vector<int>> permuteUnique(vector<int>& a)
// {
// 	vector<vector<int>> ans;
// 	permuteUnique_helper(ans,a,0);
// 	return ans;
// }
// int main()
// {
// 	vector<int> nums = {1,1,2};
// 	vector<vector<int>> ans = permuteUnique(nums); 
// 	for(int i=0;i<ans.size();i++)
// 	{
// 		for(int j=0;j<ans[i].size();j++)
// 			cout<<ans[i][j]<<" "; 
// 		cout<<endl;
// 	}
// }

// 9. 526. Beautiful Arrangement
// int countArrangement(int n)
// {

// }
// int main()
// {
// 	int n = 2;
// 	int ans = countArrangement(n);
// 	cout<<ans;
// }

// 10. 1655. Distribute Repeating Integers
// bool canDistribute(vector<int>& nums, vector<int>& quantity)
// {

// }
// int main()
// {
// 	vector<int> nums = {1,2,3,4};
// 	vector<int> quantity = {2};
// 	cout<<canDistribute(nums,quantity);
// }