
#include <bits/stdc++.h>
using namespace std;
// * * * 
// * * * 
// * * * 
// int main()
// {
// 	int n;cin>>n;
// 	for(int row=0;row<n;row++)
// 	{
// 		for(int col=0;col<n;col++)	cout<<"* "; 
// 			cout<<endl; 
// 	}	
// }

// * * * * * * 
// *         * 
// *         * 
// * * * * * * 
// int main()
// {
// 	int r,c;cin>>r>>c;
// 	for(int row=0;row<r;row++)
// 	{
// 		if(row==0 || row==r-1)
// 		{
// 			for(int col=0;col<c;col++)	cout<<"* "; 
// 		}
// 		else
// 		{
// 			cout<<"* ";
// 			for(int col=0;col<c-2;col++)	cout<<"  "; 
// 			cout<<"* ";
// 		}		
// 		cout<<endl; 
// 	}	
// }

// Half Pyramid
// * 
// * * 
// * * * 
// * * * *
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		for(int col=0;col<=row;col++)	cout<<"* "; 	
// 		cout<<endl; 
// 	}	
// }

// Inverted Half Pyramid
// * * * * 
// * * * 
// * * 
// * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		for(int col=r-row;col>0;col--)	cout<<"* "; 	
// 		cout<<endl; 
// 	}	
// }

// Hollow Inverted Half Pyramid
// * * * * * * 
// *       * 
// *     * 
// *   * 
// * * 
// * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	if(row==0 || row==r-1)
// 		{
// 			for(int col=0;col<r-row;col++)	cout<<"* "; 	
			
// 		}	
// 		else
// 		{
// 			cout<<"* ";
// 			for(int space=0;space<r-row-2;space++) cout<<"  ";
// 			cout<<"* ";
// 		}
// 		cout<<endl; 	
// 	}
// }

// Numeric Half Pyramid
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		for(int col=0;col<row+1;col++)	cout<<col+1<<" "; 	
// 		cout<<endl; 
// 	}	
// }

//Inverted Numeric Half Pyramid
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		for(int col=0;col<r-row;col++)	cout<<col+1<<" "; 	
// 		cout<<endl; 
// 	}	
// }

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{
// 		int start = row+1;
// 		for(int col=0;col<row+1;col++)
// 		{
// 			// cout<<start<<" ";
// 			// start++;
// 			// or
// 			cout<<row+col+1<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// Numeric Full Pyramid 
//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{
// 		// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<"  ";
// 		// Number
// 		int start = row+1;
// 		// by analysis we saw that every no. start from its row*2+1 no. 
// 		for(int col=0;col<row+1;col++)
// 		{
// 			// cout<<start<<" ";
// 			// start++;
// 			// or
// 			cout<<row+col+1<<" ";
// 		}
// 		// by analysis we saw that every no. start from its row*2 no. 
// 		start = 2*row;
// 		for(int col=0;col<row;col++)
// 		{
// 			cout<<start<<" ";
// 			start--;
// 		}
// 		// or 
// 		// for(int col=row-1;col>=0;col--)	cout<<row+col+1<<" ";
// 		cout<<endl;
// 	}
// }

// Numeric Hollow Half Pyramid
// 1 
// 1 2 
// 1   3 
// 1     4 
// 1       5 
// 1         6 
// 1 2 3 4 5 6 7 
// int main()
// {
// 	int n;cin>>n; 
// 	// ROW WISE
// 	// for(int i = 0;i<n;i++)
// 	// {
// 	// 	if(i==0 || i==1 || i == n-1)	
// 	// 		for(int j = 0;j<=i;j++)	cout<<j+1<<" ";
// 	// 	else
// 	// 	{
// 	// 		cout<<1<<" ";
// 	// 		for(int j=1;j<=i;j++)
// 	// 		{
// 	// 			// space
// 	// 			if(j!=i)	cout<<"  ";
// 	// 			// number
// 	// 			else	cout<<j+1<<" ";
// 	// 		}
// 	// 	}
// 	// 	cout<<endl;
// 	// }

// 	// COLUMN WISE
// 	for(int row=0;row<n;row++)
// 	{
// 		for(int col=0;col<row+1;col++)
// 		{
// 			if(col==0 || col==row || row==n-1)	cout<<col+1<<" ";
// 			else cout<<"  ";
// 		}
// 		cout<<endl;
// 	}
// }

// Numeric Hollow Inverted Half Pyramid
// 1 2 3 4 5 6 7 
// 2         7 
// 3       7 
// 4     7 
// 5   7 
// 6 7 
// 7 
// int main()
// {
// 	int n;cin>>n;
// // 	// ROW WISE
// 	// for(int i=0;i<n;i++)
// 	// {
// 	// 	if(i==0 || i== n-2 || i==n-1)
// 	// 		for(int j=i;j<n;j++)	cout<<j+1<<" ";
// 	// 	else
// 	// 	{
// 	// 		cout<<i+1<<" ";
// 	// 		for(int j=i+1;j<n-1;j++)
// 	// 		{
// 	// 			// space
// 	// 			cout<<"  ";
// 	// 		}
// 	// 		cout<<7<<" ";
// 	// 	}
// 	// 	cout<<endl;
// 	// }

// // 	// COLUMN WISE
// 	for(int row = 0;row<n;row++)
// 	{
// 		for(int col=row+1;col<=n;col++)
// 			{
// 				if(col==row+1 || col==n || row==0)	cout<<col<<" ";
// 				else cout<<"  ";
// 			} 
// 		cout<<endl;
// 	}
// }

//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
// int main()
// {
// 	int r;cin>>r; 
// 	for(int row=0;row<r;row++)
// 	{
// 		// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<" ";
// 		int start =1;
// 		// each line prints 1,3,5... chars, so using odd no. formula
// 		for(int col=0;col<2*row+1;col++)
// 		{
// 			// 0th & last row 
// 			if(row==0 || row==r-1)
// 			{
// 				// by ovserving we get to know that all nos. are in even places
// 				if(col%2==0){ cout<<start;start++;}
// 				else cout<<" ";
// 			}
// 			else
// 			{
// 				// all no in 0th position is 1
// 				if(col==0) cout<<1;
// 				else if(col==2*row+1-1) cout<<row+1;
// 				else cout<<" ";
// 			}
// 		}
// 		cout<<endl;
// 	}
// }


// Full Pyramid
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		// space
// 		for(int space=0;space<r-1-row;space++) cout<<" ";
// 		// stars
// 		for(int star=0;star<row+1;star++) cout<<"* ";
// 		cout<<endl;
// 	}	
// }

// Inverted Full Pyramid
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		// space
// 		for(int space=0;space<row;space++) cout<<" ";
// 		// stars
// 		for(int star=0;star<r-row;star++) cout<<"* ";
// 		cout<<endl;
// 	}	
// }

// Solid Diamond
//      * 
//     * * 
//    * * * 
//   * * * * 
//  * * * * * 
// * * * * * * 
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
// int main()
// {
// 	int r;cin>>r;
// 	// Upper Pyramid
// 	for(int row=0;row<r;row++)
// 	{
// 	// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<" ";
// 	// star
// 		for(int st=0;st<row+1;st++) cout<<"* ";
// 			cout<<endl;
// 	}
// 	// Inverted Pyramid
// 	for(int row=0;row<r;row++)
// 	{
// 		// space
// 		for(int sp=0;sp<row;sp++) cout<<" ";
// 		// star
// 		for(int st=0;st<r-row;st++) cout<<"* ";
// 			cout<<endl;
// 	}
// }

// Solid Half Diamond
// *
// **
// ***
// ****
// ***
// **
// *
// int main()
// {
// 	int r;cin>>r;
// 	Upper Diamond
// 	for(int row=0;row<r;row++)
// 	{
// 		for(int col=0;col<=row;col++)
// 			cout<<"*"; 
// 		cout<<endl; 
// 	}
// 	Lower Diamond
// 	for(int row=0;row<r-1;row++)
// 	{
// 		for(int col=0;col<r-1-row;col++)
// 			cout<<"*"; 
// 		cout<<endl; 
// 	}
// }

// Hollow Diamond
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *
// int main()
// {
// 	int r;cin>>r;
// 	// Upper Hollow Pyramid
// 	for(int row=0;row<r;row++)
// 	{
// 		// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<" ";
// 		// stars
// 		for(int ch=0;ch<2*row+1;ch++)	// sum(=star+space) of all char in each row is odd 
// 		{
// 			if(ch==0 ||ch==2*row) cout<<"*";	// 0th row star &other row star
// 			else cout<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	// Inverted Hollow Pyramid
// 	for(int row=0;row<r;row++)
// 	{
// 		// space
// 		for(int sp=0;sp<row;sp++) cout<<" ";
// 		// stars
// 		for(int ch=0;ch<2*r-2*row-1;ch++)
// 		{
// 			if(ch==0 || ch==2*r-2*row-1-1) cout<<"*";
// 			else cout<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// Full Pyramid
 //         * 
 //       * * * 
 //     * * * * * 
 //   * * * * * * * 
 // * * * * * * * * * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<"  ";
// 		// stars
// 		for(int st=0;st<2*row+1;st++) cout<<"* ";
// 		cout<<endl;
// 	}	
// }

// Hollow Full Pyramid
//           * 
//         *   * 
//       *       * 
//     *           * 
//   *               * 
// * * * * * * * * * * * 
// int main()
// {
// 	int r;cin>>r;
// 	for(int row=0;row<r;row++)
// 	{	
// 		// space
// 		for(int sp=0;sp<r-row-1;sp++) cout<<"  ";
// 		// stars
// 		if(row==0 || row==r-1)
// 		{
// 			for(int st=0;st<2*row+1;st++) cout<<"* ";

// 		}
// 		else
// 		{
// 			cout<<"* ";
// 			// Hollow Spaces
// 			for(int sp=0;sp<2*row-1;sp++) cout<<"  ";
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}	
// }

// Floyd's Triangle Pattern
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// int main()
// {
// 	int n;cin>>n;  
// 	int sum=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<=i;j++)
// 		{
// 			sum++;
// 			cout<<sum<<" "; 
// 		}
// 		cout<<endl; 
// 	}
// }

// Pascal's Triangle Pattern
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 
// 1 6 15 20 15 6 1 
// int factorial(int n)
// {
// 	int ans = 1;
// 	for(int i=n;i>0;i--) ans*=i;
// 		return ans;
// }
// int main()
// {
// 	int n;cin>>n; 
// 	// for(int i=0;i<n;i++)
// 	// {
// 	// 	for(int j=0;j<=i;j++)	cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
// 	// 		cout<<endl;
// 	// }
// 	for(int i=1;i<=n;i++)
// 	{	
// 		int C =1;
// 		for(int j=1;j<=i;j++)
// 		{
// 			cout<<C<<" ";
// 				// formula
// 			C = C * (i-j)/j;
// 			// C starts from 1
// 			// i = [1,N]
// 			// j = [1,i]
// 		}		
// 		cout<<endl;
// 	}
// }

// Wave Print 
// void wavePrintMatrix(vector<vector<int>> v)
// {
// 	int col = v.size();
// 	int row = v[0].size();
// 	for(int i=0;i<row;i++)
// 	{
// 		// [ By observation we can see that for even column print is from Top to Bottom
// 		// & for odd column print is from Bottom to Top ]
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