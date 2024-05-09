#include <bits/stdc++.h>
using namespace std;

// int main()
// {
	
// }

// BASICS

// 1. Decimal To Binary
// int decimalToBinary(int n)
// {
// 	int binaryno = 0, i=0;
// 	// decimal operations wise
// 	// while(n>0)
// 	// {
// 	// 	int bit = n%2;
// 	// 	// cout<<bit<<endl;
// 	// 	// storing the bits into as a 10 decimal number
// 	// 	binaryno = bit * floor(pow(10,i++)) + binaryno;
// 	// 	// cout<<i<<" "<<binaryno<<endl;
// 	// 	n/=2;
// 	// }
// 	// bitwise operations wise
// 	while(n>0)
// 	{
// 		int bit = n&1;
// 		binaryno = bit * floor(pow(10,i++)) + binaryno;
// 		n = n>>1;
// 	}
// 	return binaryno;
// }
// int main()
// {
// 	cout<<decimalToBinary(10);
// 	// cout<<decimalToBinary(1023);
// 	// passing int limit
// 	// cout<<decimalToBinary(1024);
// }

// 2. Binary To Decimal
// int binaryToDecimal(int n)
// {
// 	int decno =0,i=0;
// 	while(n)
// 	{
// 		int dig = n%10;
// 		decno = dig* floor(pow(2,i++)) + decno;
// 		n/=10;
// 	}
// 	return decno;
// }
// int main()
// {
// 	cout<<binaryToDecimal(1010);
// }

// 3. Reverse Integer
// int reverseInt(int n)
// {
// 	bool isNeg = false;
// 	if(n<0)
// 	{
// 		isNeg = true;
// 		n = -n;
// 	}
// 	// if given input is less then -2^31 return 0.
// 	// equal sign is given bcoz if INTMIN is given as input
// 	// and we try to make positive then positive of INT_MIN will overflow
// 	if(n<=INT_MIN) return 0;
// 	int num = 0;
// 	while(n)
// 	{
// 		int ldig = n%10;
// 		num = num * 10 + ldig;
// 		n/=10;
// 		// during calculation if num becomes greater then (INT_MAX/10) then 
// 		// adding any no. next will overflow it hence return 0
// 		if(num>INT_MAX/10) return 0;
// 	}
// 	return isNeg? -num : num;
// }
// int main()
// {
// 	cout<<reverseInt(-120)<<endl;
// 	cout<<reverseInt(1534236469);
// }

// 4. Set Kth Bit
// int setBit(int n,int k)
// {
// 	// pushing left side
// 	// int mask = 1<<k;
// 	// int ans = n|mask;
// 	// return ans;
// 	// one line
// 	return n|(1<<k);
// }
// int main()
// {
// 	int n = 10,k=2;
// 	cout<<setBit(n,k);
// }

// ARRAY

// 1. Linear Search in Array
// bool LinearSearch(int arr[],int size,int key)
// {
// 	for(int i=0;i<size;i++)
// 	{
// 		if(arr[i]==key) return true;
// 	}
// 	return false;
// }
// int main()
// {
// 	int n;cin>>n;
// 	int arr[n];
// 	int key1,key2;
// 	for(int i=0;i<n;i++) cin>>arr[i];
// 	cin>>key1>>key2;  
// 	LinearSearch(arr,n,key1)?cout<<"Present"<<endl:cout<<"Absent"<<endl;
// 	LinearSearch(arr,n,key2)?cout<<"Present"<<endl:cout<<"Absent"<<endl;
// }

// 2. Maximum number
// int main()
// {
// 	int arr[6] = {10,50,20,30,70,60};
// 	int maxi = INT_MIN,mini=INT_MAX;
// 	for(int i=0;i<6;i++)
// 	{
// 		if(arr[i]>maxi) maxi = arr[i];
// 		if(arr[i]<mini) mini = arr[i];
// 	}
// 	cout<<maxi<<" "<<mini;
// }

// 3. Count 0's & 1's
// int main()
// {
// 	int arr[10] = {1,0,0,30,10,1,2,0,1,1};
// 	int one=0,zero=0;
// 	for(int i=0;i<10;i++)
// 	{
// 		if(arr[i]==1) one++;
// 		if(arr[i]==0) zero++;
// 	}
// 	cout<<zero<<" "<<one;
// }

// 4. Print extreme points of an array
// int main()
// {
// 	int arr[6] = {10,50,20,30,70,60};
// 	// method 1
// 	int start = 0,end=6-1;
// 	while(true)
// 	{
// 		if(start>end) break;
// 		cout<<arr[start]<<" "<<arr[end]<<" ";
// 		start++;end--;
// 	}
// 	cout<<endl;
// 	// method 2
// 	for(int i=0;i<6/2;i++)
// 	{
// 		cout<<arr[i]<<" "<<arr[6-1-i]<<" ";
// 	}
// }

// 5. Reverse an array
// int main()
// {
// 	// int arr[6] = {10,50,20,30,70,60};
// 	int arr[5] = {10,50,20,70,60};
// 	int start = 0,end=5-1;
// 	while(true)
// 	{
// 		if(start>end) break;
// 		swap(arr[start],arr[end]);
// 		start++;end--;
// 	}
// 	for(int i=0;i<5;i++) cout<<arr[i]<<" ";
// }

// 6. Find Unique element { every element occurs twice except one}
// int main()
// {
// 	vector<int> a{1,2,4,2,1,3,6,5,5,6,4};
// 	int ans =0;
// 	for(int i=0;i<a.size();i++) ans^=a[i];
// 	cout<<ans;
// }

// 7. Union of 2 arrays	{no duplicates}
	// create an ans array
	// put all element of a[] & b[]
// int main()
// {
// 	vector<int> a{1,2,3,5,7,9};
// 	vector<int> b{0,4,6,8};
// 	vector<int> ans;
	
// 	for(int i=0;i<a.size();i++) ans.push_back(a[i]);
// 	for(int i=0;i<b.size();i++) ans.push_back(b[i]);
// 	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
// }

// 8. Intersection of 2 arrays	{common between 2 arrays}
// int main()
// {
// 	vector<int> b{1,2,3,3,4,6,8};
// 	vector<int> a{3,3,4,9,10};
// 	vector<int> ans;

// 	for(int i=0;i<a.size();i++)
// 	{
// 		int ele = a[i];
// 		for(int j=0;j<b.size();j++)
// 		{
// 			if(ele==b[j])
// 			{
// 				// if there are multiple same no to prevent 
// 				// duplicate no we replace same no with -1
// 				b[j]=-1 ;	// if there is neg no put INT_MIN
// 				ans.push_back(ele);
// 			}
// 		}
// 	}
// 	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
// }

// 9. Union of 2 arrays	{with duplicates}
	// create an ans array
	// put all element of a[] & b[]
	// using both intersection algo and turning same no into INT_MIN
// int main()
// {
// 	vector<int> a{1,2,3,3,4,6,8};
// 	vector<int> b{3,3,4,9,10};
// 	vector<int> ans;
	
// 	for(int i=0;i<a.size();i++)
// 	{
// 		int ele = a[i];
// 		for(int j=0;j<b.size();j++)
// 		{
// 			if(ele==b[j]) b[j]=INT_MIN; 
// 		}
// 	}
// 	for(int i=0;i<a.size();i++)	ans.push_back(a[i]);
// 		// neglecting all INT_MIN nos. 
// 	for(int i=0;i<b.size();i++)	if(b[i]!=INT_MIN) ans.push_back(b[i]);
// 	for(auto value:ans) cout<<value<<" ";
// }

// 10. Pair Sum:- Find a pair that upon addition gives value equal to sum
// int main()
// {
// 	vector<int> a{1,3,5,7,2,4,6};
// 	int sum =9,count=0;
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=i+1;j<a.size();j++)
// 		{
// 			if(a[i]+a[j]==sum) cout<<a[i]<<" "<<a[j]<<endl;
// 			count++;
// 		}
// 	}
// 	cout<<count;
// }

// 11. Three Sum
// int main()
// {
// 	vector<int> a{1,3,5,7,2,4,6};
// 	int sum =10,count=0;
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=i+1;j<a.size();j++)
// 		{
// 			for(int k=j+1;k<a.size();k++)
// 			{
// 				if(a[i]+a[j]+a[k]==sum) cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
// 				count++;
// 			}
// 		}
// 	}
// 	cout<<count;
// }

// 12. Sort 0's & 1's
// int main()
// {
// 	vector<int> a{0,1,1,0,1,0,1,0,0};
// 	int start =0,end=a.size()-1,index=0;
// 	// when index & end will meet at same place the whole 'a' will be sorted
// 	while(index!=end)
// 	{
// 		if(a[index]==0)
// 		{
// 			swap(a[index],a[start]);
// 			index++;start++;
// 		}
// 		else
// 		{
// 			swap(a[index],a[end]);
// 			// we are not doing index++ becoz when i will be swapped with end
// 			// there comes a new value which to be processed again
// 			// index++;
// 			end--;
// 		}
// 	}
// 	for(auto val: a) cout<<val<<" ";
// }

// 13. Sort 0's, 1's & 2's
// int main()
// {
// 	vector<int> a= {2,0,2,1,1,0,2,2,2,0,0,0,1,1,1};
// 	int s=0,m=0,e=a.size()-1;
// 	while(m<=e)
// 	{
// 		if(a[m]==0)
// 		{
// 			swap(a[m],a[s]);
// 			m++;s++;
// 		}
// 		else if(a[m]==1) m++; 
// 		else{
// 			swap(a[m],a[e]);
// 			e--;
// 		} 
// 	}
// 	for(auto val:a) cout<<val<<" ";
// }

// 14. Move all -ve no. to one side of array (order maintain not reqd)
// int main()
// {
// 	vector<int> a= {1,2,-3,4,-5,6};
// 	int s=0,e=a.size()-1;  
// 	while(s<e)
// 	{
// 		if(a[s]<0)	s++;
// 		else if(a[e]>0)	e--;
// 		else{
// 			swap(a[s],a[e]);
// 		}
// 	}
// 	for(auto val:a) cout<<val<<" ";
// }

// 15. Find the duplicate element
// int main()
// {
// 	vector<int> a= {1,3,4,2,3};
// 	// Method 1
// 	// int sum=0;
// 	// int size = a.size();
// 	// int naturalSum = (size*(size-1))/2;
// 	// for(auto val:a) sum+=val; 
// 	// int dup = sum-naturalSum;
// 	// cout<<dup;

// 	// Method 2
// 	// for(int i=0;i<a.size();i++)
// 	// {
// 	// 	// already visited
// 	// 	if(a[abs(a[i])]<0)
// 	// 	{
// 	// 		cout<<abs(a[i]); break;
// 	// 	}
// 	// 	// visited mark
// 	// 	a[abs(a[i])] *= -1;
// 	// }

// 	// Method 3
// 	// until both element match
// 	while(a[0]!=a[a[0]])
// 	{
// 		swap(a[0],a[a[0]]);
// 	}
// 	cout<<a[0];
// }

// 16. Find missing elements from array with duplicates from range upto number 1 to n
// int main()
// {
// 	vector<int> a= {1,3,5,3,4};
// 	// Method 1 
// 	// for(int i=0;i<a.size();i++)
// 	// {
// 	// 	int ind = abs(a[i]);
// 	// 	if(a[ind-1]>0) a[ind-1] *= -1;
// 	// }
// 	// for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
// 	// for(int i=0;i<a.size();i++) if(a[i]>0) cout<<i+1;

// 	// Method 2
// 	int i=0;
// 	while(i<a.size())
// 	{
// 		int num = a[i];
// 		if(i+1!=num)
// 		{
// 			swap(a[i],a[a[i]-1]);
// 		}
// 		else i++;
// 	}
// 	for(int i=0;i<a.size();i++)
// 	{
// 		if(i+1!=a[i]) cout<<i+1<<" ";
// 	}
// }

// 17. Find first repeating element
// int main()
// {
// 	vector<int> a= {1,5,3,4,3,5,6};
// 	int n= a.size();
// 	bool flag =0;
// 	// TC= O(n*n)
// 	// for(int i=0;i<n;i++)
// 	// {
// 	// 	for(int j=i+1;j<n;j++)
// 	// 	{
// 	// 		if(a[i]==a[j])
// 	// 		{
// 	// 			 cout<<i+1; 
// 	// 			 flag = 1;
// 	// 		}
// 	// 	}		if(flag==1) break;
// 	// }
// 	// TC= O(n+n)
// 	vector<int> cnt(1000*n,0);
// 	// or
// 	// unordered_map<int,int> cnt;
// 	for(int i=0;i<n;i++)
// 	{
// 		cnt[a[i]]++;
// 	}
// 	for(int i=0;i<n;i++)
// 	{
// 		if(cnt[a[i]]>1)
// 			{
// 				 cout<<i+1; 
// 				 flag = 1;
// 			}
// 		if(flag==1) break;
// 	}
// }

// 18. Find commond element in 3 sorted arrays
// int main()
// {
// 	vector<int> a = {1,5,10,20,40,80};
// 	vector<int> b = {6,7,20,80,100};
// 	vector<int> c = {3,4,15,20,30,70,80,120};
// 	// int maxi = max(a.size(),max(b.size(),c.size()));
// 	vector<int> ans;
// 	// set<int> st;	// for not saving duplicate common elements
// 	int i,j,k;
// 	i=j=k=0;
// 	while(i<a.size() && j<b.size() && k<c.size())
// 	{
// 		if(a[i]==b[j] && b[j]==c[k])
// 		{
// 			// cout<<a[i]<<" ";
// 			ans.push_back(a[i]);
// 			// st.insert(a[i]);
// 			i++;j++;k++; 
// 		}
// 		else if(a[i]<b[j]) i++;
// 		else if(b[j]<c[k]) j++;
// 		else k++;		// now k is smaller then everyone
// 	}
// 	for(auto v:ans) cout<<v<<" ";
// 	// for(auto v:st) cout<<v<<" ";
// }

// 19. Adding 2 numbers represented by 2 arrays
// string add(vector<int> a,vector<int> b)
// {
// 	int carry = 0;
// 	int i = a.size()-1, j=b.size()-1;
// 	string ans;
// 	while(i>=0 && j>=0)
// 	{
// 		int x = a[i] + b[j] + carry;
// 		int digit = x%10;
// 		ans.push_back(digit + '0');
// 		carry = x/10;
// 		i--;j--;
// 	}
// 	// if any element in arr A is left
// 	while(i>=0)
// 	{
// 		int x = a[i] + 0 + carry;
// 		int digit = x%10;
// 		ans.push_back(digit + '0');
// 		carry = x/10;
// 		i--;
// 	}
// 	// if any element in arr B is left
// 	while(j>=0)
// 	{
// 		int x = 0 + b[j] + carry;
// 		int digit = x%10;
// 		ans.push_back(digit + '0');
// 		carry = x/10;
// 		j--;
// 	}
// 	// if any carry is left
// 	if(carry)	ans.push_back(carry + '0');
// 	// removing last zeros if any 
// 	while(ans.back()=='0')	ans.pop_back();
// 	// or
// 	// while(ans[ans.size()-1] == '0')	ans.pop_back();
// 	reverse(ans.begin(),ans.end());
// 	return ans;
// }
// int main()
// {
// 	vector<int> a = {0,9,5,4,9};
// 	vector<int> b = {2,1,4};
// 	string ans = add(a,b);
// 	cout<<ans;
// }

// 20. Factorial of big numbers
// vector<int> factorial(int n)
// {
// 	vector<int> ans;
// 	ans.push_back(1);
// 	int carry = 0;
// 	for(int i = 2;i<=n;i++)
// 	{
// 		// inner loop is only use for multiplying each ele in ans by i 
// 		for(int j=0;j<ans.size();j++)
// 		{
// 			int x = ans[j] * i + carry;
// 			ans[j] = x%10;
// 			carry = x/10;
// 		}
// 		// if carry is too big store carry by modulo by 10
// 		while(carry)
// 		{
// 			ans.push_back(carry%10);
// 			carry/=10;
// 		}
// 	}
// 	reverse(ans.begin(),ans.end());
// 	return ans;
// }
// int main()
// {
// 	int n;cin>>n; 
// 	vector<int> ans = factorial(n); 
// 	for(auto it: ans) cout<<it;
// }

// 21. 121. Best Time to Buy & Sell stock -> level 1
// void findProfit(vector<int>& prices, int buy, int sell, int& profit)
// {
// 	if(buy >= prices.size())	return;
// 	if(sell>=prices.size())
// 	{
// 		buy++;
// 		sell = buy;
// 	}
// 	for(int i = buy;i<sell;i++)
// 	{
// 		int value = prices[sell]-prices[i]; 
// 		if(value>profit)	profit = value;
// 	}
// 	findProfit(prices, buy, sell+1, profit);
// }
// void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit)
// {
// 	if(i >= prices.size())	return;
// 	if(prices[i]<minPrice)	minPrice = prices[i];
// 	int todaysProfit = prices[i] - minPrice;
// 	if(todaysProfit>maxProfit)	maxProfit = todaysProfit;
// 	maxProfitFinder(prices, i+1, minPrice, maxProfit);
// }
// int maxProfit(vector<int>& prices)
// {
// 	// int profit = 0;
// 	// int buy = 0, sell = buy;
// 	// findProfit(prices, buy, sell, profit);
// 	// return profit;

// 		// OR
// 	int minPrice = INT_MAX;
// 	int maxProfit = INT_MIN;
// 	maxProfitFinder(prices, 0, minPrice, maxProfit);	// TC- O(N+1)
// 	return maxProfit;
// }
// int main()
// {
// 	vector<int> prices = {7,1,5,3,6,4};
// 	int ans = maxProfit(prices);
// 	cout<<ans;
// }

// 22. 198. House Robber
// void robHelp(vector<int>& nums, int i, int& maxMoney)
// {
// 		// this function will not work for nums = {2,1,1,2} -> o/p = 4
// 	if(i>=nums.size() or i+2>=nums.size())	return;
// 	int stolen = nums[i] + nums[i+2];
// 	if(stolen>maxMoney)	maxMoney = stolen;
// 	robHelp(nums, i+1, maxMoney);
// }
// int robHelp(vector<int> nums, int i)
// {
// 	if(i >= nums.size())	return 0;
// 		// robbing 1st house & next next house of it
// 	int rob1 = nums[i] + robHelp(nums, i+2);
// 		// not robbing 1st house so going for next house of it
// 	int rob2 = 0 + robHelp(nums, i+1);
// 	return max(rob1, rob2);
// }
// int rob(vector<int>& nums)
// {
// // 		// this function will not work for nums = {2,1,1,2} -> o/p = 4
// 	// int maxMoney = INT_MIN;
// 	// robHelp(nums,0, maxMoney);

// 		return robHelp(nums, 0);
// }
// int main()
// {
// 	vector<int> nums = {2,1,1,2};
// 	int ans = rob(nums);
// 	cout<<ans;
// }

// 23. 983. Minimum Cost For Tickets {incomplete}
// int minCostTickets(vector<int>& days, vector<int>& costs)
// {
	
// }
// int main()
// {
// 	vector<int> days = {1,4,6,7,8,20};
// 	vector<int> costs = {2,7,15};
// 	cout<<minCostTickets(days, costs);
// }

// 2D ARRAY

// 1. Row-wise access
// int main()
// {
// 	int a[3][3] = {{1,2,3},{4,5,6},{2,4,8}};
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)	cout<<a[i][j]<<" ";
// 		cout<<endl;
// 	}
// }

// 2. Col-wise access
// int main()
// {
// 	int a[3][3] = {{1,2,3},{4,5,6},{2,4,8}};
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)	cout<<a[j][i]<<" ";
// 		// swap i and j
// 		cout<<endl;
// 	}
// }

// 3. Row-wise sum
// int main()
// {
// 	vector<vector<int>> a = {{1,2,3},{4,5,6},{2,4,8}};
// 	for(int i=0;i<a.size();i++)
// 	{
// 		int sum=0;
// 		for(int j=0;j<a[i].size();j++)
// 		{
// 			sum+=a[i][j];
// 		}
// 		cout<<"Sum of Row-"<<i<<" is "<<sum;
// 		cout<<endl;
// 	}
// }

// 4. Linear Search
// bool LinearSearch(vector<vector<int>> a,int key)
// {
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=0;j<a[i].size();j++)
// 		{
// 			if(a[i][j]==key) return true;
// 		}
// 	}
// 	return false;
// }
// int main()
// {
// 	vector<vector<int>> a = {{1,2,3},{4,5,6},{2,4,8}};
// 	int key= 20;
// 	LinearSearch(a,key)?cout<<"Present":cout<<"Absent";
// }

// 5. Max/min in 2D array
// pair<int,int> MaxMin(vector<vector<int>> a)
// {
// 	int maxi=INT_MIN,mini=INT_MAX;
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=0;j<a[i].size();j++)
// 		{
// 			if(a[i][j]>maxi) maxi=a[i][j]; 
// 			if(a[i][j]<mini) mini=a[i][j]; 
// 		}
// 	}
// 	return {maxi,mini};
// }
// int main()
// {
// 	vector<vector<int>> a = {{1,2,3},{4,5,6},{2,4,8}};
// 	int key= 20;
// 	cout<<"Max-"<<MaxMin(a).first<<" Min-"<<MaxMin(a).second;
// }

// 6. Transpose a matrix
// void printArr(vector<vector<int>> a)
// {
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=0;j<a[i].size();j++)
// 		{
// 			cout<<a[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }
// void transposeArr(vector<vector<int>>& a,vector<vector<int>>& transpose)
// {
// 	for(int i=0;i<a.size();i++)
// 	{
// 		for(int j=0;j<a[i].size();j++)
// 		{
// 			transpose[j][i] =a[i][j];
// 		}
// 	}
// }
// int main()
// {
// 	vector<vector<int>> a = {{1,2,3},{4,5,6},{2,4,8}};
// 	cout<<"Original Matrix"<<endl;
// 	printArr(a);
// 	// we have to give size of the transpose matrix also
// 	vector<vector<int>> transpose(3,vector<int>(3,0));
// 	transposeArr(a,transpose);
// 	cout<<"After Tranpose"<<endl;
// 	printArr(transpose);
// }

// 7. Wave Print 
// void wavePrintMatrix(vector<vector<int>> v)
// {
// 	int col = v.size();
// 	int row = v[0].size();
// 	for(int i=0;i<row;i++)
// 	{
// 		// Top To Bottom
// 		if(i%2==0)
// 		{
// 			for(int j=0;j<col;j++) cout<<v[j][i]<<" ";

// 		}
// 		// Bottom To Top
// 		else
// 		{
// 			for(int j=col-1;j>-1;j--) cout<<v[j][i]<<" ";
// 		}
// 		cout<<endl;
// 	}
// }
// int main()
// {
// 	vector<vector<int>> v 
// 	{
// 		{1,2,3,4},
// 		{5,6,7,8},
// 		{9,10,11,12},
// 		{13,14,15,16},
// 		{17,18,19,20}
// 	};
// 	wavePrintMatrix(v);
// }

// 8. Spiral Print
// vector<int> spiralPrintMatrix(vector<vector<int>> v)
// {
// 	vector<int> ans;
// 	int row = v.size(), col= v[0].size();
// 	int totalElements = row*col;
// 	// cout<<row<<col;
// 	int startRow = 0, endCol = col-1;
// 	int endRow = row-1, startCol = 0;
// 	int count = 0;
// 	while(count<totalElements)
// 	{
// 		// 1. print start row
// 		// we are using startCol becoz we are going col wise & row is fixed
// 		for(int i = startCol;i<endCol && count<totalElements;i++)
// 		{
// 			// cout<<v[startRow][i]<<" ";
// 			ans.push_back(v[startRow][i]);
// 			count++;
// 		}
// 		// cout<<endl;
// 		// 2. print end col
// 		// while pushing ele in vec if count crosses total break loop
// 		for(int i = startRow;i<endRow && count<totalElements;i++)
// 		{
// 			// cout<<v[i][endCol]<<" ";
// 			ans.push_back(v[i][endCol]);
// 			count++;
// 		}
// 		// cout<<endl;
// 		// 3. print end row 
// 		for(int i = endCol;i>startCol && count<totalElements;i--)
// 		{
// 			// cout<<v[endRow][i]<<" ";
// 			ans.push_back(v[endRow][i]);
// 			count++;
// 		}
// 		// cout<<endl;
// 		// 4. print start col
// 		for(int i = endRow;i>startRow && count<totalElements;i--) 
// 		{
// 			// cout<<v[i][startCol]<<" ";
// 			ans.push_back(v[i][startCol]);
// 			count++;
// 		}
// 		// cout<<endl;
// 		startRow++;
// 		endCol--;
// 		endRow--;
// 		startCol++;
// 		// break;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<vector<int>> v = 
// 	{
// 		{1,2,3,4,5,6},
// 		{7,8,9,10,11,12},
// 		{13,14,15,16,17,18},
// 		{19,20,21,22,23,24},
// 		{25,26,27,28,29,30}
// 	};
// 	vector<int> ans = spiralPrintMatrix(v);
// 	for(auto it: ans)	cout<<it<<" ";
// }

// Binary Search
// int BinarySearch(vector<int> a, int target)
// {
// 	int st = 0,end = a.size()-1; 
// 	while(st<=end)
// 	{
// 		int mid = st + (end-st)/2;
// 		if(a[mid]==target) return mid;
// 		going right side
// 		else if(a[mid]<target) st = mid+1;
// 		going left side
// 		else end = mid+1;
// 		mid = st + (end-st)/2;
// 	}
// 	return -1;
// }
// int main()
// {
// 	vector<int> a = {2,4,6,8,10,12,16};
// 	int target = 12;
// 	int indexOfTarget = BinarySearch(a,target);
// 	if (indexOfTarget== -1 )cout<<"Element is not present";
// 	else cout<<"Index is "<<indexOfTarget;
//  // 		in-built function
//  // cout<<binary_search(a.begin(),a.end(),4);
// }

// 1. Find the first occurence of an element
// int firstOccurence(vector<int> a,int target)
// {
// 	int st = 0,end= a.size()-1;
// 	int mid = (st+end)/2,ans = -1;
// 	while(st<=end)
// 	{
// 			/*store ans then go to left to look any left*/
// 		if(a[mid]==target)
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else if(a[mid]<target)	st = mid+1;
// 		else end = mid-1;
// 		mid = (st+end)/2;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> a = {1,3,4,4,4,4,4,6,7,9};
// 	cout<<firstOccurence(a,4);
// }

// 2. Find the last occurence of an element
// int lastOccurence(vector<int> a,int target)
// {
// 	int st = 0,end= a.size()-1;
// 	int mid = (st+end)/2,ans = -1;
// 	while(st<=end)
// 	{
// 			/*store ans then go to right to look any element left or not*/
// 		if(a[mid]==target)
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		else if(a[mid]<target)	st = mid+1;
// 		else end = mid-1;
// 		mid = (st+end)/2;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> a = {1,3,4,4,4,4,4,6,7,9};
// 	cout<<lastOccurence(a,4);
// }

// 3. Find the Total occurence of an element
// int lastOccurence(vector<int> a,int target)
// {
// 	int st = 0,end= a.size()-1;
// 	int mid = (st+end)/2,ans = -1;
// 	while(st<=end)
// 	{
// 		if(a[mid]==target)
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		else if(a[mid]<target)	st = mid+1;
// 		else end = mid-1;
// 		mid = (st+end)/2;
// 	}
// 	return ans;
// }
// int firstOccurence(vector<int> a,int target)
// {
// 	int st = 0,end= a.size()-1;
// 	int mid = (st+end)/2,ans = -1;
// 	while(st<=end)
// 	{
// 		if(a[mid]==target)
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else if(a[mid]<target)	st = mid+1;
// 		else end = mid-1;
// 		mid = (st+end)/2;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> a = {1,3,4,4,4,4,4,6,7,9};
//  	int totalOccurence = lastOccurence(a,4)-firstOccurence(a,4)+1;
// 	cout<<"Total occurence is "<<totalOccurence;
// }

// 4. Find the Missing Element
// int missingElement(vector<int> a)
// {
// 	int st = 0,end = a.size()-1;
// 	int mid = st+ (end-st)/2, ans = -1;
// 	while(st<=end)
// 	{
// 	// occurence of element which break the pattern
// 		if(a[mid]-mid==2)
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else st = mid+1;
// 		mid = st+ (end-st)/2;
// 	}
// 	return ans+1;
// }
// int main()
// {
// 	vector<int> a = {1,2,3,4,5,6,7,8};
// 	cout<<missingElement(a);
// }

// 5. Peak element in a mountain array
// int PeakElement(vector<int> a)
// {
// 	int st = 0,end = a.size()-1;
// 	int mid = st + (end-st)/2;
// 	while(st<end)
// 	{
// 		// we cant use this way since we dont know a[mid-1 or mid+1] will goto
// 		// a valid index or not

// 		// if(a[mid-1]<a[mid] && a[mid]>a[mid+1]) return a[mid]; 
// 		// else if(a[mid-1]<a[mid])	st = mid-1; 
// 		// else	end = mid+1;

// 			// or 	since we are doing end=mid that's why st<end
// 		if(a[mid]<a[mid+1]) st = mid+1;
// 		else end = mid;
// 		mid = st + (end-st)/2;
// 	}
// 	return a[st]; //or a[end] both will lead to same point
// }
// int main()
// {
// 	vector<int> a = {0,1,4,5,2,1};
// 	cout<<PeakElement(a);
// }

// 6. Find Pivot using BS
// int PivotElement(vector<int> a)
// {
// 	int st = 0, end = a.size()-1;
// 	int mid = st + (end-st)/2;
// 	while(st<=end)
// 	{
// 		// when only 1 ele is left in array
// 		if(st==end) return a[st];
// 		// when mid is present on the pivot element 
// 		if(mid<=end && a[mid]>a[mid+1]) return a[mid];
// 		// when mid is present one step away from the pivot element 
// 		if(st<=mid-1 && a[mid-1]>a[mid]) return a[mid-1];
// 		// when mid element is present in the second(sorted part) line of element & 
// 		// pivot ele is present in 1st line
// 		if(a[st]>a[mid])	end = mid-1; 
// 		// or the mid is present in 1st & pivot ele is present in 2nd line
// 		else	st = mid+1;
// 		mid = st + (end-st)/2;
// 	}
// 	return -1;
// }
// int main()
// {
// 	vector<int> a = {8,9,10,2,4,6,7};
// 	cout<<PivotElement(a);
// }

// 7. Search in a Rotated & Sorted Array
// int PivotElement(vector<int> a)
// {
// 	int st = 0, end = a.size()-1;
// 	int mid = st + (end-st)/2;
// 	while(st<=end)
// 	{
// 		if(st==end) return st;
// 		if(mid<=end && a[mid]>a[mid+1]) return mid;
// 		if(st<=mid-1 && a[mid-1]>a[mid]) return mid-1;
// 		if(a[st]>a[mid])	end = mid-1; 
// 		else	st = mid+1;
// 		mid = st + (end-st)/2;
// 	}
// 	return -1;
// }
// int BinarySearch(vector<int> a,int st,int end, int target)
// {
// 	while(st<=end)
// 	{
// 		int mid = st + (end-st)/2;
// 		if(a[mid]==target) return mid;
// 		else if(a[mid]<target) st = mid+1;
// 		else end = mid+1;
// 		mid = st + (end-st)/2;
// 	}
// 	return -1;
// }
// int search(vector<int> a,int target)
// {
// 	int pivotIndex = PivotElement(a); 
// 	int	ans;
// 	if(a[0]<=target && target<=a[pivotIndex])	ans = BinarySearch(a,0,pivotIndex,target);
// 	else	ans = BinarySearch(a,pivotIndex+1,a.size()-1,target);
// 	return ans;
// }
// int main()
// {
// 	vector<int> a = {8,9,10,2,4,6,7};
// 	cout<<search(a,7);
// }

// 8. Square Root using BS
// int squareRoot(int n)
// {
// 	int st = 0, end = n;
// 	int mid = st + (end-st)/2,ans =-1; 
// 	while(st<=end)
// 	{
// 		int square = mid * mid;
// 		// equal part
// 		if(square == n)	return mid;
// 		// goto left part 
// 		if(square>n) end = mid-1;
// 		// goto right part 
// 		else
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		mid = st + (end-st)/2;
// 	}
// 	return ans;
// }
// // doing for 3 decimal precision
// double precision(int n)
// {
// 	double ans = squareRoot(n);
// 	double finalAns = ans, decimal=3;
// 	double step = 0.1;
// 	for(int i = 1; i<=decimal; i++)
// 	{
// 		for(double j = ans;j*j<=n;j+=step)
// 		{
// 			finalAns = j;
// 		}
// 		step/=10;
// 	}
// 	return finalAns;
// }
// int main()
// {
// 	int n;cin>>n; 
// 	cout<<precision(n);
// }

// 9. BS in a nearly sorted array in log time
// int BSNearlySorted(vector<int> v, int target)
// {
// 	int st = 0,end = v.size()-1;
// 	int mid = st + (end-st)/2;
// 	while(st<=end)
// 	{
// 		if(v[mid]== target)	return mid;
// 			// to always get proper index we also pass cases
// 		if(mid-1>=0 && v[mid-1] == target)	return mid-1;
// 		if(mid+1<v.size() && v[mid+1] == target)	return mid+1;
// 		if(v[mid]<target)	st = mid+2;
// 		else	end = mid-2;
// 		mid = st + (end-st)/2;
// 	}
// 	return false;
// }
// int main()
// {
// 	vector<int> v = {10,3,40,20,50,80,70};
// 	cout<<BSNearlySorted(v,70);
// }

// 10. Division of 2 no. using BS
// int quotient(int dividend,int divisor)
// {
// 	// for negative numbers also
// 	int st = 0,end = abs(dividend);
// 	int mid = st+(end-st)/2,ans=-1;
// 	while(st<=end)
// 	{
// 		// perfect solution
// 		if(abs(mid*divisor) == abs(dividend))
// 		{
// 			 ans = mid;
// 			 break;
// 		}
// 		// not perfect solution
// 		if(abs(mid*divisor)<abs(dividend))
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		else end = mid-1;
// 		mid = st+(end-st)/2;
// 	}
// 	// for +ve number
// 	if((dividend<0 && divisor<0) || (dividend>0 && divisor>0))	return ans;
// 	// for -ve number
// 	else	return -ans;
// }
// int main()
// {
// 	cout<<quotient(-1000,-5);
// }

// 11. Find odd occuring element using BS
// int oddOccurence(vector<int> v)
// {
// 	int st = 0, end = v.size()-1;
// 	int mid = st + (end-st)/2;
// 	while(st<=end)
// 	{
// 		if(st==end)	return st;
// 		// index is even
// 		if(mid%2==0)
// 		{
// 			if(v[mid]==v[mid+1])	st = mid+2;
// 			else	end = mid;
// 		}
// 		// index is odd
// 		else
// 		{
// 			if(v[mid]==v[mid-1])	st = mid+1;
// 			else	end = mid-1;
// 		}
// 		mid = st + (end-st)/2;
// 	}
// }
// int main()
// {
// 	vector<int> v = {1,1,2,2,3,3,4,4,3,600,600,4,4};
// 	cout<<v[oddOccurence(v)];
// }

// 12. 532. K-diff pairs in an array	[distinct pairs, i!=j]
// int findPairs(vector<int> v,int k)
// {
// 	int i=0,j=1;
// 	// int ans=0;
// 	// for dinstinct pairs we will use set
// 	set<pair<int,int>> ans;
// 	sort(v.begin(),v.end());
// 	while(j<v.size())
// 	{
// 		int diff = v[j]-v[i];
// 		// if diff and k is same move pointers forward
// 		if(diff==k)
// 		{
// 			ans.insert({v[i],v[j]});
// 			cout<<v[i]<<" "<<v[j]<<endl;
// 			i++;j++;
// 		}
// 		// if diff is greater then k to reduce the gap between them move i forward
// 		else if(diff>k) i++; 
// 		// if diff is lesser then k to reduce the gap between them move j forward
// 		else j++;
// 		// if both pointers point at same point move j forward
// 		if(i==j) j++;
// 	}
// 	return ans.size();
// }

// int BinarySearch(vector<int> a,int st, int target)
// {
// 	int end = a.size()-1; 
// 	while(st<=end)
// 	{
// 		int mid = st + (end-st)/2;
// 		if(a[mid]==target) return mid;
// 		// going right side
// 		else if(a[mid]<target) st = mid+1;
// 		// going left side
// 		else end = mid+1;
// 		mid = st + (end-st)/2;
// 	}
// 	return -1;
// }
// int findPairsBS(vector<int> v,int k)
// {
// 	set<pair<int,int>> ans;
// 	for(int i=0;i<v.size();i++)
// 	{
// 		int num = v[i]+k;
// 		// check for num in right side subarray of the array
// 		// since all ele in left side of array will be small
// 		if(BinarySearch(v,i+1,num) != -1)
// 		{
// 			ans.insert({v[i],num});
// 		}
// 	}
// 	return ans.size();
// }
// int main()
// {
// 	// vector<int> v = {1,3,1,5,4};
// 	vector<int> v = {1,1,1,1,1};
// 	int k = 2;
// 	// METHOD 1 using 2 pointer
// 	// cout<<"Number of Pairs "<<findPairs(v,k);
// 	// METHOD 2 using binary search
// 	cout<<"Number of Pairs "<<findPairsBS(v,k);
// }

// 13. 658. Find 'k' closest element to a given value in an array
// // 2 pointer approach
// vector<int> findClosestElements(vector<int>& v, int k, int x)
// {
// 	int L = 0, H = v.size()-1;
// 	while(H-L>=k)
// 	{
// 		if(x-v[L] > v[H]-x)	L++;
// 		else H--;
// 	}
// 	vector<int> ans;
// 	for(int i=L;i<=H;i++)	ans.push_back(v[i]);
// 	return ans;

// 	// we can directly use STL in online compiler in this way
// 	// return vector<int>(ans.begin()+L,ans.begin()+H+1);
// }

// // BS + 2 pointer approach
// int LowerBound(vector<int> v,int x)
// {
// 	int st = 0, end = v.size()-1;
// 	int mid = st + (end-st)/2;
// 	int ans;
// 	while(st<=end)
// 	{
// 		if(v[mid]==x)	return mid;
// 		else if(v[mid]>x)	end = mid-1;
// 		else
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		mid = st + (end-st)/2;
// 	}
// 	// cout<<v[ans]<<endl;
// 	return ans;
// }
// vector<int> findClosestElements(vector<int>& v, int k, int x)
// {
// 	vector<int> ans;
// 	int h = LowerBound(v,x);
// 	int l = h-1;
// 	while(k--)
// 	{
// 		// when High is in 0th index then l-- will not work
// 		if(l<0)	h++;
// 		// when High is in last index then h++ will not work
// 		else if(h>=v.size())	l--;
// 		else if(abs(x-v[l])>abs(v[h]-x))	h++;
// 		else l--;
// 	}
// 	// for(int i=l;i<=h;i++)	ans.push_back(v[i]);
// 	// return ans;

// 	// here +1 with h is not done bcoz h is already 1 step away from bound 
// 	return vector<int>(v.begin()+l+1,v.begin()+h);
// }
// int main()
// {
// 	// TEST CASE 1
// 	// vector<int> v = {1,2,3,4,5};
// 	// int k = 4, x = 1;

// 	// TEST CASE 2
// 	// vector<int> v = {12,16,22,30,35,39,42,45,48,50,53,55,56};
// 	// int k = 4, x = 35;

// 	// TEST CASE 3
// 	vector<int> v = {3,5,8,10};
// 	int k = 2, x = 15;
// 	vector<int> a;
// 	a = findClosestElements(v,k,x);
// 	for(auto it: a) cout<<it<<" ";
// }

// 14. Exponential Search
// int BS(vector<int> v, int start, int end, int k)
// {
// 	while(start<=end)
// 	{
// 		int mid = (start + end)/2;
// 		if(v[mid]==k)	return mid;
// 		else if(v[mid]>k)	end = mid-1;
// 		else start = mid+1;
// 	}
// 	return -1;
// }
// int ExponentialSearch(vector<int> v,int k)
// {
// 	int n = v.size();
// 	if(v[0]==k)	return 0;
// 	int i=1;
// 	while(i<n && v[i]<=k)	i*=2;
// 	return	BS(v,i/2,min(i,n-1),k);
// }
// int main()
// {
// 	vector<int> v = {3,4,5,6,11,13,14,15,56,70};
// 	int k = 13;
// 	cout<<"Index is "<<ExponentialSearch(v,k);
// }

// 15. Unbounded Binary Search
// int main()
// {
// 	// vector<int> v = {3,4,5,6,11,13,14,15,56,70};		#an infinite array
// 	// int k = 13;		#a target to search  
// 	int i = 0, j =1;
// 	while(v[j]<k)
// 	{
// 		i =j;
// 		j = j*2;
// 	}
// 	cout<<BS(v,i,j,k);
// }

// 16. Book Allocation	[Allocate min no of pages {gfg}]
// bool isPossibleSolution(vector<int> v, int size, int m, int sol)
// {
// 	int pageSum = 0;
// 	int c = 1;
// 	for(int i=0;i<size;i++)
// 	{
// 		if(v[i]>sol)	return false;
// 		if(pageSum+v[i]>sol)
// 		{
// 			pageSum = v[i]; 
// 			c++;
// 			if(c>m)	return false;
// 		}
// 		else	pageSum += v[i];
// 	}
// 	return true;
// }
// int findPages(vector<int> v,int m)
// {
// 	int size = v.size();
// 	if(m>size)	return -1;
// 	// int sum=0;
// 	// for(int i = 0;i<v.size();i++)	sum +=v[i];
// 	// int end = sum;
// 	int st =0;
// 	int end = accumulate(v.begin(),v.end(),0);
// 	int ans = -1;
// 	while(st<=end)
// 	{
// 		int mid = (st+end)>>1;
// 		if(isPossibleSolution(v,size,m,mid))
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else	st = mid+1;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> pages = {12,34,67,90};
// 	int students = 2;
// 	cout<<findPages(pages,students);
// }

// 17. The Painters Partition Problem {gfg}
// bool isPossibleSolution(vector<int> v,int n, int k, int sol)
// {
// 	long long lengthSum = 0;
// 	long long c = 1;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(v[i]>sol)	return false;
// 		if(lengthSum + v[i]>sol)
// 		{
// 			lengthSum = v[i];
// 			c++;
// 			if(c>k)	return false;
// 		}
// 		else	lengthSum += v[i];
// 	}
// 	return true;
// }
// long long minTime(vector<int> v, int k)
// {
// 	long long n = v.size(), ans = -1;
// 	long long start = 0, end = accumulate(v.begin(),v.end(),0);
// 	while(start<=end)
// 	{
// 		long long mid = start + (end-start)/2;
// 		if(isPossibleSolution(v,n,k,mid))
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else	start = mid+1;
// 	}
// 	return ans;
// }
// int main()
// {
// 	// TEST CASE 1
// 	// vector<int> boards = {10,20,30,40};
// 	// int painters = 2;
// 	// TEST CASE 2
// 	vector<int> boards = {5,10,30,20,15};
// 	int painters = 3;
// 	cout<<minTime(boards,painters);
// }

// 18. Aggressive Cows {gfg}
// bool isPossibleSolution(vector<int> v,int k, int mid)
// {
// 	// can we place k cows, with atleast mid distance between cows
// 	int cow = 1;
// 	int pos = v[0];	// placing 1st cow at 1st position(0th index)
// 	for(int i=1;i<v.size();i++)
// 	{
// 		// checking if current index - previous index distance is greater then mid or not
// 		if(v[i]-pos>=mid)	
// 		{
// 			// if distance is more or same then reqd then place a new cow
// 			cow++;
// 			pos = v[i];		// one more cow has been placed
// 			// if all cow placed return true
// 			if(cow==k)	return true;
// 		}
// 		else false;

// 	}
// }
// int solve(vector<int>& v, int k)
// {
// 	sort(v.begin(),v.end());
// 	int st = 0, end = v[v.size()-1]-v[0];
// 	int ans = -1;
// 	while(st<=end)
// 	{
// 		int mid = st+ (end-st)/2;
// 		if(isPossibleSolution(v,k,mid))
// 		{
// 			// store the ans and try the maximize the ans by going RS
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		// if we dont find solution no need to go right side anymore
// 		else end = mid-1;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<int> stalls = {1,2,4,8,9};
// 	int k = 3;
// 	cout<<solve(stalls,k);
// }

// 19. EKO SPOJ
// bool isPossibleSolution(vector<long long int> v,long long int m,long long int mid)
// {
// 	long long int woodCollected = 0;
// 	for(long long int i=0;i<v.size();i++)
// 	{
// 		// if v[i] is smaller then mid neglect it
// 		if(v[i]>mid)
// 		{
// 			woodCollected += (v[i]-mid);
// 		}
// 	}
// 	// if(woodCollected>=m)	return true;
// 	// return false;
// 	return	woodCollected>=m;
// }
// long long int maxSawBlade(vector<long long int> v,long long int m)
// {
// 	long long int st=0,ans=-1; 
// 	long long int end = *max_element(v.begin(), v.end());
// 	while(st<=end)
// 	{
// 		long long int mid = st+(end-st)/2;
// 		if(isPossibleSolution(v,m,mid))
// 		{
// 			ans = mid;
// 			st = mid+1;
// 		}
// 		else end = mid-1;
// 	}
// 	return ans;
// }
// int main()
// {
// 	long long int n,m; 
// 	cin>>n>>m; 
// 	vector<long long int> trees;
// 	while(n--)
// 	{
// 		int height;cin>>height;
// 		trees.push_back(height);
// 	}
// 	cout<<maxSawBlade(trees,m);
// }

// 20. Roti/Prata SPOJ
// bool isPossibleSolution(vector<long long int> v, long long int reqdPrata, long long int mid)
// {
// 	long long int countPrata = 0;
// 	for(long long int i =0;i<v.size();i++ )
// 	{
// 		long long int timeTaken = 0, rank,j=1;
// 		rank = v[i];
// 		while(true)
// 		{
// 			if(timeTaken + j*rank <= mid)
// 			{
// 				countPrata++; 
// 				timeTaken += j*rank;
// 				j++;
// 			}
// 			else	break; 
// 		}
// 		if(countPrata>= reqdPrata)	return true;
// 	}
// 	return	false;
// }
// long long int minTimeToCompleteOurOrder(vector<long long int> v,long long int prata)
// {
// 	long long int st =0,ans=-1;
// 	int highestRank = *max_element(v.begin(),v.end());
// 	long long int end = highestRank * (prata * (prata+1)/2);
// 	while(st<=end)
// 	{
// 		long long int mid = st + (end-st)/2;
// 		if(isPossibleSolution(v,prata,mid))
// 		{
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else st = mid+1;
// 	}
// 	return ans;
// }
// int main()
// {
// 	int T;cin>>T;
// 	while(T--)
// 	{
// 		long long int nP,nC;
// 		cin>>nP>>nC;
// 		vector<long long int> rank;
// 		while(nC--)
// 		{
// 			long long int r;	cin>>r;
// 			rank.push_back(r);
// 		}
// 		cout<<minTimeToCompleteOurOrder(rank,nP)<<endl;
// 	}
// }

// Binary Search in 2D array
// int BinarySearch2D(vector<vector<int>> v,int target)
// {
// 	// end = no. of row*col -1
// 	int st =0, end = v[0].size()*v.size() -1;
// 	int mid = st + (end-st)/2;
// 	while(st<=end)
// 	{
// 		// using linear to 2D conversion formula
// 		int rowIndex = mid/v[0].size();
// 		int colIndex = mid%v[0].size();
// 		int element = v[rowIndex][colIndex];
// 		if(element == target)
// 		{
// 			cout<<rowIndex<<" "<<colIndex<<endl;
// 			return true;
// 		}
// 		else if(element < target)	st = mid+1; 
// 		else end = mid-1;
// 		mid = st + (end-st)/2;
// 	}
// 	return false;
// }
// int main()
// {
// 	vector<vector<int>> v =
// 	{
// 		{1,2,3,4},
// 		{5,6,7,8},
// 		{9,10,11,12},
// 		{13,14,15,16},
// 		{17,18,19,20}
// 	};
// 	cout<<BinarySearch2D(v,10);
// }

