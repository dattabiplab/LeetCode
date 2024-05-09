#include <bits/stdc++.h>
using namespace std;

// POINTERS
// int main()
// {
// 	int a = 5;
// 	int* ptr = &a; 
// 	int* dusraptr = ptr;

// 	cout<<a<<endl;
// 	cout<<&a<<endl;
// 	// cout<<*a<<endl;
// 	cout<<ptr<<endl;
// 	cout<<*ptr<<endl;
// 	cout<<&ptr<<endl;
// 	cout<<(*ptr)*2<<endl;	
// 	cout<<(*ptr)++<<endl;		// first use 5 then increment now a = 6
// 	cout<<++(*ptr)<<endl;

// 	a = a+1;
// 	cout<<a<<endl;
// 	*ptr = *ptr + 2;
// 	cout<<*ptr<<endl;
// 	*ptr = *ptr*2;
// 	cout<<*ptr<<endl;
// 	*ptr = *ptr/2;
// 	cout<<*ptr<<endl;

// 	cout<<dusraptr<<endl;
// 	cout<<*dusraptr<<endl;
// 	cout<<&dusraptr<<endl;
// 	cout<<dusraptr-ptr<<endl;		// address - address
// 	cout<<*dusraptr - *ptr<<endl;	// value - value
// }

// int main()
// {
// 	int arr[4] = {10,20,30,40};
// 	cout<<arr<<endl; 	// base address
// 	cout<<&arr[0]<<endl;	// 1st element address
// 	cout<<&arr<<endl;	
// 	cout<<arr[0]<<endl;
// cout<<endl;
// 	int* p = arr;
// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*p+1<<endl;
// 	cout<<*(p+1)<<endl;
// cout<<endl;
// 	cout<<arr[1]<<endl;
// 	cout<<*(arr+1)<<endl;
// 	cout<<1[arr]<<endl;
// 	cout<<*(1+arr)<<endl;
// }
	
	// cout Implementation Different
// int main()
// {
// 	int arr[4] = {10,20,30,40};
// 	int* p = arr;
// 	cout<<p<<endl;
	
// 	char ch[10] = {'b','i','p','l','a','b'};
// 	char* ptr = ch;
// 	cout<<ptr<<endl;
// }

// int main()
// {
// 	char ch[10] = {'b','i','p','l','a','b'};
// 	char* c = ch;

// 	cout<<ch<<endl;
// 	cout<<&ch<<endl;
// 	cout<<ch[0]<<endl;
// 	cout<<&ch[0]<<endl;
// cout<<endl;
// 	cout<<&c<<endl;
// 	cout<<*c<<endl;
// 	cout<<*(c+1)<<endl;
// 	cout<<c<<endl;
// }

// int main()
// {
// 	// char ch[10] = {'S','h','e','r','B','a','n','o'};
// 	char ch[10] = "SherBano";
// 	char* p = &ch[0];

// 	cout<<ch<<endl;
// 	cout<<&ch<<endl;
// 	cout<<*(ch+3)<<endl;
// cout<<endl;
// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*(p+3)<<endl;
// 	cout<<p+2<<endl;
// 	cout<<*p<<endl;
// 	cout<<p+8<<endl;
// }

// int main()
// {
// 	char ch = 'k';
// 	char* cptr = &ch;
// 	cout<<cptr<<endl;
// 	cout<<cptr+1<<endl;
// }

// int main()
// {
// 	char name[10] = "Biplab";
// 	cout<<name<<endl;
// 	char* p = "Hello";
// 	cout<<p<<endl;
// }

// void sizeInFunc(int arr[])
// {
// 	cout<<"Size in Func "<<sizeof(arr)<<endl;
// 	cout<<"arr: "<<arr<<endl;
// 	cout<<&arr<<endl;
// }
// int main()
// {
// 	int arr[10] = {10,20,30,40};
// 	cout<<"Size in Main function "<<sizeof(arr)<<endl;
// 	cout<<"arr: "<<arr<<endl;
// 	cout<<&arr<<endl;
// 	sizeInFunc(arr);
// }

// void solve(int* ptr)
// {
// 	*ptr = *ptr+10;
// 	cout<<"in solve funtion "<<endl;
// 	cout<<ptr<<endl;
// 	cout<<*ptr<<endl;
// }
// int main()
// {
// 	int a= 5; 
// 	int* ptr = &a;
// 	cout<<"Before"<<endl;
// 	cout<<ptr<<endl;
// 	cout<<*ptr<<endl;
// 	solve(ptr);
// 	cout<<"After"<<endl;
// 	cout<<ptr<<endl;
// 	cout<<*ptr<<endl;
// }

// void update(int* a, int* b)
// {
// 	*a = 100; 
// 	*b = 200;
// }
// int main()
// {
// 	int arr[4] = {1,2,3,4};
// 	int* p = &arr[1];
// 	int* q = &arr[2];
// 	update(p,q); 
// 	for(auto ele:arr)	cout<<ele<<" ";
// }

// DOUBLE POINTERS
// int main()
// {
// 	int a = 5;
// 	int* p = &a;
// 	int** q = &p;

// 	cout<<a<<endl; 
// 	cout<<&a<<endl;
// cout<<endl;
// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*p<<endl;
// cout<<endl;
// 	cout<<q<<endl;
// 	cout<<&q<<endl;
// 	cout<<*q<<endl;
// 	cout<<**q<<endl;
// }

// REFERENCING
// int main()
// {
// 	int a = 5;
// 	int& b = a;
// 	cout<<a<<endl; 
// 	cout<<b<<endl;
// }

// PASS BY VALUE
// void update(int a)
// {
// 	a++;
// }
// int main()
// {
// 	int a = 5;
// 	update(a);
// 	cout<<a;
// }

// PASS BY REFERENCE
// void update(int& a)
// {
// 	a++;
// }
// int main()
// {
// 	int a = 5;
// 	update(a);
// 	cout<<a;
// }

// void update(int* value)
// {
// 	(*value)++;		// -> 6 o/p
// 	// *value = *value+1;	// -> 6 o/p
// }
// int main()
// {
// 	int a = 5;
// 	update(&a);
// 	cout<<a;
// }

// void solve(int*& value)
// {
// 	value = value + 1;
// }
// int main()
// {
// 	int a = 5;
// 	int* p = &a;
// 	cout<<"Before: "<<p<<endl;
// 	solve(p);
// 	cout<<"After: "<<p<<endl;
// }

// RETURN BY REFERENCE
// int& returnValue(int& x) 
// { 
// 	// Print the address 
// 	cout << "x = " << x 
// 		<< " The address of x is "
// 		<< &x << endl; 
// 	// Return reference 
// 	return x; 
// } 
// int main() 
// { 
// 	int a = 20; 
// 	int& b = returnValue(a); 
// 	// Print a and its address 
// 	cout << "a = " << a 
// 		<< " The address of a is "
// 		<< &a << endl; 
// 	// Print b and its address 
// 	cout << "b = " << b 
// 		<< " The address of b is "
// 		<< &b << endl; 
// 	// We can also change the value of 'a' by using the address returned 
// 	// by returnValue function 
// 	// Since the function returns an alias 
// 	// of x, which is itself an alias of a, 
// 	// we can update the value of a 
// 	returnValue(a) = 13; 
// 	// The above expression assigns the 
// 	// value to the returned alias as 3. 
// 	cout << "a = " << a 
// 		<< " The address of a is "
// 		<< &a << endl; 
// } 

// int* solve()
// {
// 	int a = 5;
// 	cout<<"address of a: "<<&a<<endl;
// 	int* ans = &a; 
// 	return ans;
// }
// int main()
// {
// 	cout<<solve()<<endl;
// 	int* ans = solve();
// 	// after a function ends all its local var should die how does below line works
// 	cout<<*ans;
// 	// cout<<*solve();
// }


// POINTER PRACTICE
// int main()
// {
// 	float f = 10.5;
// 	float p = 2.5;
// 	float* ptr = &f;
// 	(*ptr)++;
// 	*ptr = p; 
// 	cout<<*ptr<<" "<<f<<" "<<p;
// }

// int main()
// {
// 	int a = 7;
// 	int b = 17;
// 	int* c = &b;
// 	*c = 7;
// 	cout<<a<<" "<<b;
// }

// int main()
// {
// 	int* ptr = 0;
// 	int a = 10;
// 	*ptr = a;
// 	cout<<*ptr;
// }

// int main()
// {
// 	char ch = 'a';
// 	char* ptr = &ch;
// 	ch++;
// 	cout<<*ptr;
// }

// int main()
// {
// 	int a =7;
// 	int* c= &a;
// 	c = c+1;
// 	cout<<a<<" "<<*c;
// }

// int main()
// {
// 	int a[] = {1,2,3,4};
// 	int* p = a++;	// int* p = (a = a+1) hence error
// 	cout<<*p;
// }

// int main()
// {
// 	int a[]	 = {4,5,6,7};
// 	int* p = (a+1);
// 	cout<<*a+9;
// 	// cout<<a<<endl;
// 	// cout<<p<<endl;
// 	// cout<<*p;
// }

// int main()
// {
// 	char b[] = "xyz";
// 	char* c = &b[0];
// 	cout<<c;
// }

// int main()
// {
// 	char s[] = "hello";
// 	char* p = s;
// 	cout<<s[0]<<" "<<p[0];
// }

// int main()
// {
// 	char arr[20];
// 	int i; 
// 	for(i=0;i<10;i++)
// 	{
// 		*(arr+i) = 65+i;
// 	}
// 	*(arr+i) = '\0';
// 	cout<<arr;
// }

// int main()
// {
// 	char* ptr;
// 	char Str[] = "abcdefg";
// 	ptr = Str;
// 	ptr += 5;
// 	cout<<ptr;
// }

// int main()
// {
// 	int numbers[5];
// 	int* p;
// 	p = numbers;
// 	*p = 10;
// 	p = &numbers[2];
// 	*p = 20;
// 	p--;
// 	*p = 30;
// 	p = numbers +3;
// 	*p = 40;
// 	p = numbers;
// 	*(p+4) = 50;
// 	for(int n=0;n<5;n++)
// 		cout<<numbers[n]<<",";
// }

// int main()
// {
// 	char st[] = "ABCD";
// 	for(int i=0;st[i] != '\0';i++)
// 	{
// 		cout<<st[i]<<*(st)+i<<*(i+st)<<i[st]<<endl;
// 	}
// }

// int main()
// {
// 	float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// 	float *ptr1 = &arr[0];
// 	float *ptr2 = ptr1+3;
// 	cout<<*ptr2<<" ";
// 	cout<<ptr2-ptr1;
// }

// void changeSign(int* p)
// {
// 	*p = (*p) * -1;
// }
// int main()
// {
// 	int a = 10;
// 	changeSign(&a);
// 	cout<<a;
// }

// void fun(int a[])
// {
// 	cout<<a[0]<<" ";
// }
// int main()
// {
// 	int a[] = {1,2,3,4};
// 	fun(a+1);
// 	cout<<a[0];
// }

// void square(int* p)
// {
// 	int a = 10;
// 	p = &a; 
// 	*p = (*p) * (*p);
// }
// int main()
// {
// 	int a = 10;
// 	square(&a);
// 	cout<<a<<endl;
// }

// void Q(int z)
// {
// 	z += z; 
// 	cout<<z<<" ";
// }
// void P(int* y)
// {
// 	int x = *y + 2;
// 	Q(x);
// 	*y = x - 1;
// 	cout<<x<<" ";
// }
// int main()
// {
// 	int x = 5;
// 	P(&x);
// 	cout<<x;
// }

// int main()
// {
// 	int a = 10;
// 	int* p = &a; 
// 	int** q = &p;
// 	int b = 20;
// 	*q = &b;
// 	(*p)++;
// 	cout<<a<<" "<<b;
// }

// int f(int x, int* py, int** ppz)
// {
// 	int y, z; 
// 	**ppz += 1; 
// 	z = **ppz;
// 	*py += 2;
// 	y = *py;
// 	x += 3;
// 	return x+y+z;
// }
// int main()
// {
// 	int c, *b, **a;
// 	c = 4;
// 	b = &c;
// 	a = &b;
// 	cout<<f(c,b,a)<<endl;
// 	// cout<<c;
// }

// int main()
// {
// 	int ***r, **q, *p, i=8; 
// 	p = &i; 
// 	(*p)++; 
// 	q = &p;
// 	(**q)++;
// 	r = &q;
// 	cout<<*p<<" "<<**q<<" "<<***r;
// }

// void increment(int** p)
// {
// 	(**p)++;
// }
// int main()
// {
// 	int num = 10;
// 	int* ptr = &num; 
// 	increment(&ptr); 
// 	cout<<num;
// }


// BASIC MATHEMATICS FOR DSA
// 1. 204. Count Primes
// bool isPrime(int n)
// {
// 		// naive approach		// O(n)
// 	// if(n==0 || n==1) return false;
// 	// for(int i = 2;i<n;i++)
// 	// {
// 	// 	if(n%i == 0)	return false;
// 	// }
// 	// return true;

// 		// square root approach		// O(sqrt(n))
// 	int sqrtN = sqrt(n);
// 	if(n<=1) return false;
// 	for(int i = 2;i<=sqrtN;i++)
// 	{
// 		if(n%i == 0)	return false;
// 	}
// 	return true;
// }
// int countPrimes(int n)
// {
// 	int count = 0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(isPrime(i))
// 		{
// 			cout<<i<<" ";
// 			count++; 
// 		}
// 	}
// 	cout<<endl;
// 	return count;
// }
	// Sieve of Eratosthenes
// int countPrimes(int n)
// {
// 	if(n==0)	return 0;
// 	vector<bool> prime(n,true);
// 	// for(auto ele: prime) cout<<ele<<" ";

// 		// setting 0 & 1 as false
// 	prime[0] = prime[1] = false;
// 	int count = 0;
// 	for(int i=2;i<n;i++)
// 	{
// 			// 2 is prime so we are doing counting already
// 		if(prime[i])	count++;
// 		int j = 2*i; 	// j = 2*2
// 		while(j<n)	// 4<20
// 		{
// 			prime[j] = false;	// prime[4] = false
// 			j = j+i;	// j = 4+2 then 6+2 then 8+2

// 		}
// 	}
// 	// for(auto ele: prime)	cout<<ele<<" "; 
// 		cout<<endl;
// 	return count;
// }
// int main()
// {
// 	// int n = 10;
// 	// int n = 21;
// 	// int n = 499979;
// 	int n = 5000000;
// 	cout<<countPrimes(n);
// }

// 2. GCD/HCF of 2 numbers
// int gcd(int a, int b)
// {
// 	if(a == 0)	return b;
// 	if(b == 0)	return a;

// 	while(a>0 && b>0)
// 	{
// 		if(a>b)
// 		{
// 			a = a-b; 
// 		}
// 		else	b = b-a;
// 	}
// 	return a==0?b:a;
// }
// int main()
// {
// 	int a = 72, b = 24;
// 	cout<<gcd(72,24);
// }

// 3. Fast Exponentiation
// int slowExponentiation(int a, int b)
// {
// 	int ans = 1;
// 	for(int i = 0;i<b;i++)
// 	{
// 		ans = ans*a;
// 	}
// 	return ans;
// }
// int fastExponentiation(int a, int b)
// {
// 	int ans = 1;
// 	while(b>0)
// 	{
// 		if(b & 1)	ans = ans*a;
// 		a = a*a;
// 		b = b>>1;		// b = b/2
// 	}
// 	// cout<<a<<endl;
// 	return ans;
// }
// int main()
// {
// 	int a = 2, b = 10;
// 	// cout<<slowExponentiation(a,b)<<endl;
// 	cout<<fastExponentiation(a,b);
// }

// 4. Modular Exponentiation for Large Numbers	{gfg}
// long long int powMod(long long int a, long long int b, long long int m)
// {
// 	long long int ans = 1;
// 	while(b>0)
// 	{
// 		if(b & 1)	ans = (ans*a)%m;
// 		a = (a*a)%m;
// 		b >>= 1;
// 	}
// 	return (ans%m);
// }
// int main()
// {
// 	long long int x = 3, n = 2, mod = 10;
// 	cout<<powMod(x,n,mod);
// }

// Optimisation of Sieve ofEratosthenes
// vector<bool> Sieve(int n)
// {
// 	vector<bool> sieve(n+1, true);
// 	sieve[0] = sieve[1] = false;
// 	// for(int i = 2;i<n;i++)
// 	for(int i = 2;i*i<=n;i++)		// Optimization 2
// 	{
// 		if(sieve[i] == true)
// 		{
// 			// int j = 2*i;
// 			int j = i*i;	// Optimization 1
// 				// first unmarked no would be i*i,
// 				// as others have been marked by 2 to (i-1)
// 			while(j<=n)
// 			{
// 				sieve[j] = false;
// 				j += i;
// 			}
// 		}
// 	}
// 	return sieve;
// }
// int main()
// {
// 	int n = 100;
// 	vector<bool> Prime = Sieve(n);
// 	for(int i=0;i<=n;i++)
// 	{
// 		if(Prime[i])	cout<<i<<" ";
// 	}
// }

// Segmented Sieve	(incomplete)
// vector<bool> Sieve(int n)
// {
// 	vector<bool> sieve(n+1, true);
// 	sieve[0] = sieve[1] = false;
// 	for(int i = 2;i*i<=n;i++)		
// 	{
// 		if(sieve[i] == true)
// 		{
// 			int j = i*i;
// 			while(j<=n)
// 			{
// 				sieve[j] = false;
// 				j += i;
// 			}
// 		}
// 	}
// 	return sieve;
// }
// int main()
// {
// 	int low = 50, high = 100;
// 	vector<bool> Prime = Sieve(high);
// 	for(int i=low;i<=high;i++)
// 	{
// 		if(Prime[i])	cout<<i<<" ";
// 	}
// }

