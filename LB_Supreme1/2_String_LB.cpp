#include <bits/stdc++.h>
using namespace std;

// CHAR
// 1. Length of string
// int length(char ch[])
// {
// 	int count = 0,i=0;
// 	while(ch[i] != '\0')
// 	{
// 		i++;count++;
// 	}
// 	return count;
// }
// int main()
// {
// 	char ch[100];
// 	cin>>ch;
// 	cout<<length(ch);
// 	cout<<ch;
// }

// 2. Reverse a String
// void reverse(char ch[])
// {
// 	int i = 0,j=0;
// 	while(ch[j]!='\0')	j++;
// 	j--;
// 	while(i<j)
// 	{
// 		swap(ch[i],ch[j]);
// 		i++;j--;
// 	}
// 	cout<<ch;
// }
// int main()
// {
// 	char ch[100];
// 	cin>>ch;
// 	reverse(ch);
// }

// 3. Remove all spaces
// void removeSpaces(char ch[])
// {
// 	int i=0;
// 	while(ch[i]!='\0')
// 	{
// 		if(ch[i]==' ') ch[i]= '@';
// 		i++;
// 	}
// 	cout<<ch;
// }
// int main()
// {
// 	char ch[100];
// 	cin.getline(ch,60);
// 	removeSpaces(ch);
// }

// 4. Palindrome
// bool palindrome(char ch[])
// {
// 	int i =0,j=0; 
// 	while(ch[j]!='\0') j++;
// 	j--;
// 	while(i<j)
// 	{
// 		if(ch[i]!=ch[j])	return false;
// 		i++;
// 		j--;
// 	}
// 	return true;
// }
// int main()
// {
// 	char ch[100];
// 	cin.getline(ch,60);
// 	cout<<palindrome(ch);
// }

// 5. Convert to UpperCase
// void upper(char ch[])
// {
// 	int i =0;
// 	while(ch[i]!='\0')
// 	{
// 		ch[i] = ch[i]-'a'+'A';
// 		i++;
// 	}
// 	cout<<ch;
// }
// int main()
// {
// 	char ch[100];
// 	cin.getline(ch,60);
// 	upper(ch);
// }

// 6. Convert to LowerCase
// void lower(char ch[])
// {
// 	int i =0;
// 	while(ch[i]!='\0')
// 	{
// 		ch[i] = ch[i]-'A'+'a';
// 		i++;
// 	}
// 	cout<<ch;
// }
// int main()
// {
// 	char ch[100];
// 	cin.getline(ch,60);
// 	lower(ch);
// }

// STRING
// 0. basic functions 
// int main()
// {
// 	string s;
// 	cin>>s;

	// with spaces input
	// getline(cin,s);
	// cout<<s;

	// cout<<s.length();
	// cout<<s.empty();

	// s.push_back('G');
	// cout<<s;
	// s.pop_back();
	// cout<<s;

	// cout<<s.substr(0,3);

	// compare
	// string a = "great";
	// string b = "great";
	// if(a.compare(b) == 0) cout<<"a & b are exactly same";
	// else cout<<"not same";

	// string x = "abcd";
	// string y = "bacd";
	// string z = "accd";
	// cout<<x.compare(y);
	// cout<<y.compare(x);
	// cout<<x.compare(z);

	// string a = "hello how are you";
	// string b = "how";
	// string target = "oh no!";
	// cout<<a.find(b);
	// cout<<a.find("are");
	// if(a.find(target) == std::string::npos) cout<<"Not Found";

	// string c = "This is my name!";
	// string word = "Biplab";
	// c.replace(0,3,word);
	// // pla is removed
	// c.replace(2,3,"hello");
	// cout<<c;

	// string d = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	// d.erase(10,5);
	// cout<<d;

	// cout<<isalpha(']');
	// cout<<isalpha('A');
	// cout<<isalpha('a');

	// creates a string of size 1 containing 'a'
	// cout<<string(1,'a');
	
// }

// 1. Compare 2 Strings
// bool compare(string a, string b)
// {
// 	int i=0,j=0; 
// 	while(i<a.length())
// 	{
// 		if(a.length() != b.length()) return false;
// 		if(a[i]!=b[i])	return false;
// 		i++;
// 	}
// 	return true;
// }
// int main()
// {
// 	string a,b;cin>>a>>b;
// 	cout<<compare(a,b);
// }

// 2. 1047. Remove All Adjacent Duplicates in String
// string removeDuplicates(string s)
// {
// 	string ans ="";
// 	for(int i =0;i<s.size();i++)
// 	{
// 		 if((ans.length()-1 >=0 )&& ans.back()==s[i])
// 		// if((ans.length()-1 >=0) && ans[ans.length()-1]==s[i])
// 		{
// 			ans.pop_back();
// 		}
// 		else ans.push_back(s[i]);
// 	}
// 	return ans;
// }
// int main()
// {
// 	string s = "abbaca";
// 	string ans = removeDuplicates(s);
// 	cout<<ans;
// }

// 3. 1910. Remove All Occurences of a Substring
// string removeSubstring(string s, string p)
// {
// 	// until i find npos run find command
// 	while(s.find(p)!=string::npos)	
// 	{
// 		// find will give index from where to do erase
// 		s.erase(s.find(p),p.length());
// 	}
// 	return s;
// }
// int main()
// {
// 	string s = "daabcbaabcbc";
// 	string part = "abc";
// 	string ans = removeSubstring(s,part);
// 	cout<<ans;
// }

// 4. 680. Valid Palindrome II
// bool palindrome2(string s)
// {
// 	bool doOnlyOnce = 1;
// 	int i=0,j=s.length()-1;
// 	while(i<j)
// 	{
// 		if(s[i]!=s[j])
// 		{
// 			// after doing only for once it will not work anymore
// 			if(doOnlyOnce)
// 			{
// 				s.erase(j,1);
// 				j--;
// 				doOnlyOnce =0;
// 			}
// 		}
// 		i++;j--;
// 	}
// 	// pointers values changed again assigning
// 	i=0,j=s.length()-1;
// 	// instead of again doing palindrome we can pass palindrome function also
// 	while(i<j)
// 	{
// 		if(s[i]!=s[j])	return false;
// 		i++;j--;
// 	}
// 	return true;
// }
	// or
// bool checkPalindrome(string s,int i,int j)
// {
// 	while(i<j)
// 	{
// 		if(s[i]!=s[j]) return false;
// 		i++;j--;
// 	}
// 	return true;
// }
// bool validPalindrome(string s)
// {
// 	int i =0,j=s.length()-1;
// 	while(i<j)
// 	{
// 		// either way we can remove ele of index i or j
// 		if(s[i]!=s[j])	
// 			return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
// 		else{
// 			// s[i] == s[j]
// 			i++;j--;
// 		}
// 	}
// 	return true;
// }
// int main()
// {
// 	string s = "abcd";
// 	// cout<<palindrome2(s);
// 	cout<<validPalindrome(s);
// }

// 5. 539. Minimum Time Difference
// int findMinDifference(vector<string> t)
// {
// 	vector<int> minutes;
// 		// STEP 1
// 	for(int i=0;i<t.size();i++)
// 	{
// 			// breaking into different parts
// 		// int min = (stoi(t[i].substr(0,2)) * 60) + stoi(t[i].substr(3,2));
// 		string time = t[i];
// 		int hoursInMinutes = (stoi(time.substr(0,2)) * 60);
// 		int mins = stoi(time.substr(3,2));
// 		int totalMinutes = hoursInMinutes+mins;
// 		minutes.push_back(totalMinutes);
// 	}
// 		// STEP 2
// 	sort(minutes.begin(),minutes.end());
// 		// STEP 3
// 	int mini = INT_MAX,diff;
// 	for(int i=0;i<minutes.size()-1;i++)
// 	{
// 		diff = minutes[i+1]-minutes[i]; 
// 		mini = min(mini,diff);
// 	}
// 		// STEP 4
// 	// we dont know whether to add 24 hrs or not, so we do both & get answer
// 	int lastDiff1 = minutes[0] + 1440 - minutes[minutes.size()-1];
// 	int lastDiff2 = minutes[minutes.size()-1] - minutes[0];
// 	int lastDiff = min(lastDiff1,lastDiff2);
// 	mini = min(mini,lastDiff);
// 	return mini;
// }
// int main()
// {
// 	// vector<string> timePoints = {"23:59", "00:00"};  
// 	vector<string> timePoints = {"12:10", "10:15", "13:15", "17:20", "18:00", "19:47", "23:59"};  
// 	// cout<<timePoints[1];
// 	cout<<findMinDifference(timePoints);
// }

// 6. 647. Palindromic Substrings
// int expandAroundIndex(string s, int i, int j)
// {
// 	int count =0;
// 	while(i>=0 && j<s.length() && s[i]==s[j])
// 	{
// 		count++;
// 		i--;j++;
// 	}
// 	return count;
// }
// int countPalindromicSubstrings(string s)
// {
// 	int count = 0;
// 	for(int i=0;i<s.length();i++)
// 	{
// 		int evenLengthSubstring = expandAroundIndex(s,i,i+1);
// 		count += evenLengthSubstring;
// 		int oddLengthSubstring = expandAroundIndex(s,i,i);
// 		count += oddLengthSubstring;
// 	}
// 	return count;
// }
// int main()
// {
// 	string s = "noon";
// 	cout<<countPalindromicSubstrings(s);
// }

// 7. 242. Valid Anagram
// bool anagramCheck(string s, string t)
// {
// 	sort(s.begin(),s.end());
// 	sort(t.begin(),t.end());
// 	return (s==t);
// }
	// or
// bool anagramCheckByCounting(string s, string t)
// {
// 	int freqTable[256] = {0};
// 	for(int i=0;i<s.size();i++)
// 	{
// 		freqTable[s[i]]++;
// 	}
// 	for(int i=0;i<t.size();i++)
// 	{
// 		freqTable[t[i]]--;
// 	}
// 	// for(int i=0;i<256;i++) cout<<freqTable[i]<<" ";
// 	// 	cout<<endl;
// 	for(int i=0;i<256;i++)
// 	{
// 		if(freqTable[i]!=0)	return false;
// 	}
// 	return true;
// }
// int main()
// {
// 	string s = "anagram";
// 	string t = "nagaram";
// 		// brute force [O(nlogn)]
// 	// cout<<anagramCheck(s,t);
// 		// counting method	[O(m+n) both strings size]
// 	cout<<anagramCheckByCounting(s,t);
// }

// 8. 917. Reverse Only Letters
// string reverseOnlyLetters(string s)
// {
// 	int i = 0, j = s.size()-1;
// 	while(i<j)
// 	{
// 		if(isalpha(s[i]) && isalpha(s[j]))
// 		{
// 			swap(s[i],s[j]); 
// 			i++;j--;
// 		}
// 		else if(!isalpha(s[i])) i++;
// 		else j--;
// 	}
// 	return s;
// }
// int main()
// {
// 	string s = "Test1ng-Leet=code-Q!";
//	string ans = reverseOnlyLetters(s);		//O(n)
// 	cout<<ans;
// }

// 9. 14. Longest Common Prefix
// string longestCommonPrefix(vector<string> s)
// {
// 	string ans;
// 	int i=0;
// 	while(true)
// 	{
// 		char curr_ch = 0;
// 		for(auto str: s)
// 		{
// 				// out of bound
// 			if(i>=str.size())
// 			{
// 				curr_ch = 0;
// 				break;
// 			}
// 				// just started
// 			if(curr_ch == 0)	curr_ch = str[i];
// 			else if(str[i] != curr_ch)
// 			{
// 				curr_ch = 0;
// 				break;
// 			}
// 			// if the str[i] == curr_ch are same code dont do anything
// 			// and the code again starts from next word of s with str
// 		}
// 			// we are doing curr_ch=0 each time to come out of while loop
// 		if(curr_ch==0)	break;
// 		ans.push_back(curr_ch);
// 		i++;
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<string> s = {"flower", "flow", "flight"};
// 	// vector<string> s = {"dog", "racecar", "car"};
// 	// cout<<s[1][2];
// 	string ans = longestCommonPrefix(s);
// 	cout<<ans;
// }

// 10. 345. Reverse Vowels of a String
// bool isVowel(char s)
// {			// 1  
// 	// char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
// 	// for(int i=0;i<10;i++)
// 	// {
// 	// 	if(s==vowel[i]) return true;
// 	// }
// 	// return false;
// 			// or 	2
// 	s = tolower(s);
// 	return s=='a' || s=='e' || s=='i' || s=='o' || s=='u';
// }
// string reverseVowels(string s)
// {
// 	int i=0,j=s.size()-1;
// 	while(i<j)
// 	{
// 		if(isVowel(s[i]) && isVowel(s[j]))
// 		{
// 			swap(s[i],s[j]);
// 			i++;j--;
// 		}
// 		else if(isVowel(s[i])==0)	i++; 
// 		else j--;
// 	}
// 	return s;
// }
// int main()
// {
// 	string s = "leetcOde";
// 	string ans = reverseVowels(s);
// 	cout<<ans;
// }

// 11. 205. Isomorphic Strings
// bool isIsomorphic(string s, string t)
// {

// }
// int min()
// {
// 	string s = "egg";
// 	string t = "add";
// 	cout<<isIsomorphic(s,t);
// 	string a = "foo";
// 	string b = "bav";
// 	// cout<<isIsomorphic(a,b);
// }

// 12. 767. Reorganize Strings
// string reorganizeString(string s)
// {
// 		// STEP 1 
// 	int hash[26] = {0};
// 	for(int i=0;i<s.size();i++)
// 	{
// 		hash[s[i]-'a']++;
// 	}
// 		// find the most frequent char
// 	char max_freq_char; 
// 	int max_freq=INT_MIN; 
// 	for(int i=0;i<26;i++)
// 	{
// 		if(max_freq<hash[i])
// 		{
// 			max_freq_char = i + 'a';
// 			max_freq = hash[i];
// 		}
// 	}
// 	int index = 0;
// 		// STEP 2
// 		// if by jumping index crosses string size stop
// 	while(max_freq>0 && index<s.size())
// 	{
// 		s[index] = max_freq_char;
// 		max_freq--;
// 		index += 2;
// 	}
// 		// in one go if we are not able to place the most occuring char then return ""
// 	if(max_freq>0) return "";
// 		// we already placed most occuring char so we make it hash = 0
// 	hash[max_freq_char-'a'] = 0;

// 		// STEP 3
// 		// let's place the rest of the characters
// 	for(int i=0;i<s.size();i++)	
// 	{
// 		while(hash[i]>0)
// 		{
// 				// in one go if we are able to place max_freq_char then 
// 				// we may have to get our index to 1 again (dry run)
// 			index = index>=s.size()?1:index; 
// 			s[index] = i+'a';
// 			hash[i]--; 
// 			index += 2;
// 		}
// 	}
// 	return s;
// }
// int main()
// {
// 	string s = "aab";
// 	// string s = "aaab";
// 	string ans = reorganizeString(s);	// O(n)
// 	cout<<ans;
// }

// 13. 49. Group Anagrams
	// Method 1
// vector<vector<string>> groupAnagrams(vector<string> strs)
// {
// 	map<string,vector<string>> mp;
// 		// str = each words of strs
// 	for(auto str:strs)
// 	{
// 		string s = str;
// 		sort(s.begin(),s.end());
// 			// for all the sorted s as a key we are pushing the str as values
// 		mp[s].push_back(str);
// 	}
// 	vector<vector<string>> ans;
// 	for(auto it = mp.begin(); it!=mp.end(); it++)
// 	{
// 			// we are pushing all the values of the map
// 		ans.push_back(it->second);
// 	}
// 	return ans;
// }
	// Method 2
// array<int, 256> hashMap(string s)
// {
// 	array<int, 256> hash = {0};
// 	for(int i=0;i<s.size();i++)
// 	{
// 		hash[s[i]]++;
// 	}
// 	return hash;
// }
// vector<vector<string>> groupAnagrams(vector<string> strs)
// {
// 	map<array<int, 256>,vector<string>> mp;
// 		// str = each words of strs
// 	for(auto str:strs)
// 	{
// 		string s = str;
// 			// for all the hashMap hash(in which we pass str) 
// 			// as a key we are pushing the str as values
// 		mp[hashMap(str)].push_back(str);
// 	}
// 	vector<vector<string>> ans;
// 	for(auto it = mp.begin(); it!=mp.end(); it++)
// 	{
// 			// we are pushing all the values of the map
// 		ans.push_back(it->second);
// 	}
// 	return ans;
// }
// int main()
// {
// 	vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
// 		// with sort
// 	// vector<vector<string>> ans = groupAnagrams(strs);
// 		// without sort - with hash map
// 	vector<vector<string>> ans = groupAnagrams(strs);
// 	for(int i=0;i<ans.size();i++)
// 	{
// 		for(int j=0;j<ans[i].size();j++)	cout<<ans[i][j]<<" "; 
// 			cout<<endl;
// 	}
// }

// 14. 5. Longest Palindromic Substring
// bool isPalindrome(string s, int start, int end)
// {
// 	while(start<end)
// 	{
// 		if(s[start]!=s[end])	return false;
// 		start++;end--;
// 	}
// 	return true;
// }
// string longestPalindrome(string s)
// {
// 	string ans = "";
// 		// STEP 1- substrings of string 
// 	for(int i=0;i<s.size();i++)
// 	{
// 		for(int j=i;j<s.size();j++)
// 		{
// 		// STEP 2- extract palindromic ones
// 			if(isPalindrome(s,i,j))
// 			{
// 				string t = s.substr(i,j-i+1);
// 		// STEP 3- max. length string from all palindromic strings
// 				ans = t.size()>ans.size()?t:ans; 
// 			}
// 		}
// 	}
// 	return ans;
// }
// int main()
// {
// 	string s = "babad";
// 	string ans = longestPalindrome(s);
// 	cout<<ans;
// }

// 15. 28. Find the Index of the First Occurence in a String
		// inbuilt function
// int strStr(string hay, string need)
// {
// 	int ans = hay.find(need); 
// 	cout<<ans<<endl;
// 	return ans;
// }
		// sliding window type approach
// int strStr(string hay, string need)
// {
// 	int n = hay.size(), m = need.size();
// 	for(int i=0;i<=n-m;i++)
// 	{
// 		for(int j=0;j<m;j++)
// 		{
// 			if(need[j] != hay[i+j])	break;
// 			if(j==need.size()-1)	return i;
// 		}
// 	}
// 	return -1;
// }
// int main()
// {
// 	string haystack = "sadbutsad";
// 	string needle = "sad";
// 	cout<<strStr(haystack, needle);
// }

// 16. 8. String to Integer (atoi)
		// inbuilt function
// int myAtoi(string s)
// {
// 	int ans = atoi(s.c_str());
// 	return ans;
// }
	// or
// bool isDigit(char s)
// {
// 	if(s>='0' && s<='9')	return true;
// 	return false;
// }
// int myAtoi(string s)
// {
// 	int ans = 0, i = 0, sign = 1;	//+ve
// 		// ignoring spaces 
// 	while(s[i] == ' ') i++;
// 		// checking for signs but also checking i is out of bound or not
// 	if(i<s.size() && (s[i] == '-' || s[i] == '+'))	
// 	{
// 		sign = s[i]=='+'?1:-1;
// 		i++;
// 	}
// 		// checking i is out of bound or not & also s[i] is digit or letter
// 	while(i<s.size() && isDigit(s[i]))
// 	{
// 		if(ans>INT_MAX/10 || (ans==INT_MAX/10 && s[i]>'7'))	
// 			return (sign==1?INT_MAX:INT_MIN);
// 		ans = ans*10 + (s[i]-'0');
// 		i++;
// 	}
// 	return ans*sign;
// }
// int main()
// {
// 	string s = "    -42";
// 	// string s = "-91283472332";
// 	cout<<myAtoi(s);
// }

// 17. 443. String Compression
// int compress(vector<char> s)		// real function in LC
	// for my understanding
// pair<int,vector<char>> compress(vector<char> s)
// {
// 	int count = 1, index = 0;
// 	int prev = s[0];
// 	for(int i = 1;i<s.size();i++)
// 	{
// 		if(prev == s[i])	count++;
// 		else
// 		{
// 			s[index++] = prev;
// 			if(count>1)
// 			{
// 				// s[index++] = count + '0';
// 				int start = index;
// 				while(count)
// 				{
// 					// by modulo we will get last digit and count will be stored in reverse way
// 					s[index++] = (count%10) + '0';
// 					count/=10;
// 				}
// 				// count will be stored in reverse so we will again do reverse
// 				reverse(s.begin()+start, s.begin()+index);
// 			}
// 			prev = s[i];
// 			count = 1;
// 		}
// 	}
// 	// when i will go out of bound to store the last char's value
// 	s[index++] = prev;
// 	if(count>1)
// 	{
// 		// s[index++] = count + '0';
// 		int start = index;
// 		while(count)
// 		{
// 			s[index++] = (count%10) + '0';
// 			count/=10;
// 		}
// 		reverse(s.begin()+start, s.begin()+index);
// 	}
// 	return {index,vector<char>(s.begin(),s.begin()+index)};
// 	// return index;
// }
// int main()
// {
// 	// vector<char> chars = {'a','a','b','b','c','c','c'};
// 	vector<char> chars = {'a','a','a','a','a','a','a','a','a','a','a','a','b','b'};
// 	pair<int, vector<char>> ans = compress(chars);
// 	cout<<ans.first<<endl;
// 	for(int i=0;i<ans.second.size();i++)	cout<<ans.second[i];
// }

// 18. 12. Integer to Romans
// string intToRoman(int num)
// {
// 	string ans = "";
// 	string romanSymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
// 	int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
// 	for(int i=0;i<13;i++)
// 	{
// 		while(num>=values[i])
// 		{
// 			ans += romanSymbols[i]; 
// 			num -= values[i];
// 		}
// 	}
// 	return ans;
// }
// int main()
// {
// 	int num = 3333;
// 	string ans = intToRoman(num);
// 	cout<<ans;
// }

// 19. 6. Zigzag Conversion
// string convert(string s, int numRows)
// {

// }
// int main()
// {
// 	string s = "PAYPALISHIRING";
// 	int numRows = 3;
// 	string ans = convert(s,numRows);
// 	cout<<ans;
// }

// 20. 179. Largest Number
	// custom comparator
	// this function means should i put string a 1st or string b 2nd by true & false
// static bool myComparingWay(string a, string b)
// {
// 	// return a>b;
// 	string t1 = a+b;
// 	string t2 = b+a;
// 	return t1>t2;
// }
// string largestNumber(vector<int> num)
// {
// 	string ans = "";
// 	vector<string> snum;
// 	for(auto n: num)
// 	{
// 		snum.push_back(to_string(n));
// 	}
// 		// ascending sort (small to big)
// 	// sort(snum.begin(),snum.end());
// 		// adding ele from last item
// 	// for(int i=snum.size()-1;i>=0;i--)
// 	// {
// 	// 	ans += snum[i];
// 	// }
// 		// descending sort (big to small & also custom adjustment)
// 	sort(snum.begin(),snum.end(), myComparingWay);
// 	for(auto ele: snum)
// 	{
// 		ans += ele;
// 	}
// 	return ans;
// }
// int main()
// {
// 	// vector<int> num = {10,2};
// 	vector<int> num = {3,30,34,5,9};
// 	string ans = largestNumber(num);
// 	cout<<ans;
// }

// 21. Last Occurence of a Char
// int LastOccurenceFromLtoR(string& s, char& x, int i, int& ans)
// {
// 	if(i>=s.size())
// 	{
// 		return	ans;
// 	}
// 	if(s[i]==x)	ans = i;
// 	return LastOccurenceFromLtoR(s,x,i+1,ans);
// }
// int LastOccurenceFromRtoL(string& s, char& x, int j, int& ans)
// {
// 	if(j<0)
// 	{
// 		return	ans;
// 	}
// 	if(s[j]==x)	return j;
// 	return LastOccurenceFromLtoR(s,x,j-1,ans);
// }
// int main()
// {	
// 		// method 3
// 		// by stl function
// 	// char str[] = "abcddedg";	//only work on char array
// 	// char x = 'd';
// 	// char* whereIsChar;
// 	// // whereIsChar = strchr(str, x);	// first occurence
// 	// whereIsChar = strrchr(str, x);	// last occurence
// 	// cout<<whereIsChar<<endl;

// 	string s = "abcddedg";
// 	char x = 'd';
// 	int i = 0,ans= -1;
// 		// method 1 
// 	// cout<<LastOccurenceFromLtoR(s,x,i,ans);	// O(n+1)
// 		// method 2
// 	int j = s.size()-1;
// 	cout<<LastOccurenceFromRtoL(s,x,j,ans);
// }

// 22. Reverse a String
// void strReverse(string& s, int start, int end)
// {
// 	if(start>end)	return;
// 	swap(s[start],s[end]);
// 	strReverse(s, start+1, end-1);
// }
// int main()
// {
// 	string s = "abcddedg";
// 	int start = 0, end = s.size()-1;
// 	strReverse(s,start,end);	
// 	//TC- O(n/2)
// 	// SC- O(n/2 +1)
// 	cout<<s;
// }

// 23. 415. Add Strings
// string addRE(string s,int i, string t, int j, int carry=0)
// {
// 	// base case
// 	if(i<0 && j<0)
// 	{
// 		if(carry != 0)
// 		{
// 			return string(1,carry-'0');
// 		}
// 		return "";
// 	}
// 	// ek case solve
// 	int n1 = (i>= 0 ? s[i]: '0')-'0';
// 	int n2 = (j>= 0 ? t[j]: '0')-'0';
// 	int csum = n1 + n2 + carry;
// 	int digit = csum%10;
// 	carry = csum/10;
// 	string ans = "";
// 	ans.push_back(digit + '0');

// 	// recursion
// 	ans += addRE(s,i-1,t,j-1,carry);
// 	return ans;
// }
// string addStrings(string s, string t)
// {
// 	string ans = addRE(s,s.size()-1,t,t.size()-1);
// 	reverse(ans.begin(),ans.end());
// 	return ans;
// }

	// more optimized code for TC & SC
// void addRE(string& s,int i, string& t, int j, int carry, string& ans)
// {
// 	// base case
// 	if(i<0 && j<0)
// 	{
// 		if(carry != 0)
// 		{
// 			ans.push_back(carry+'0');
// 		}
// 		return;
// 	}
// 	// ek case solve
// 	int n1 = (i>= 0 ? s[i]: '0')-'0';
// 	int n2 = (j>= 0 ? t[j]: '0')-'0';
// 	int csum = n1 + n2 + carry;
// 	int digit = csum%10;
// 	carry = csum/10;
// 	ans.push_back(digit + '0');

// 	// recursion
// 	addRE(s,i-1,t,j-1,carry,ans);
// }
// string addStrings(string& s, string& t)
// {
// 	string ans = "";
// 	addRE(s,s.size()-1,t,t.size()-1,0,ans);
// 	reverse(ans.begin(),ans.end());
// 	return ans;
// }
// int main()
// {
// 	string num1 = "9999";
// 	string num2 = "9999";
// 	cout<<addStrings(num1, num2);	
// }

// 24. Palindrome Check
// bool isPalindrome(string& s, int i, int j)
// {
// 	if(i>=j)	return true;
// 	if(s[i] != s[j])	return false;
// 	return isPalindrome(s,i+1,j-1);
// }
// int main()
// {
// 	string s = "racecar";
// 	int start = 0, end = s.size()-1;
// 	// TC- O(n/2 + 1)  SC- O(n/2 + 1)
// 	cout<<isPalindrome(s,start,end);
// }

// 25. 1910. Remove All Occurence of a Substring
// void removeOCCRE(string& s, string part)
// {
// 	if(s.find(part)==string::npos)	return;
// 	int found = s.find(part);
// 	s.erase(found, part.size());
// 	removeOCCRE(s,part);
// }
		// OR
// void removeOCCRE(string& s, string part)
// {
// 	int found = s.find(part);
// 	if(found != string::npos)
// 	{
// 		string left_part = s.substr(0, found);
// 		string right_part = s.substr(found+part.size(), s.size());
// 		s = left_part + right_part;
// 		removeOCCRE(s, part);
// 	}
// 	else	return;
// }
// string removeOccurences(string s, string part)
// {
// 	removeOCCRE(s,part);
// 	return s;
// }
// int main()
// {
// 	string s = "daabcbaabcbc";
// 	string part = "abc";
// 	string ans = removeOccurences(s,part);
// 	cout<<ans;
// }

// 26. 273. Integer To English Words
// vector<pair<int, string>> mp = 
// {
// 	{1000000000, "Billion"},
// 	{1000000, "Million"},
// 	{1000, "Thousand"},
// 	{100, "Hundred"},
// 	{90, "Ninety"},
// 	{80, "Eighty"},
// 	{70, "Seventy"},
// 	{60, "Sixty"},
// 	{50, "Fifty"},
// 	{40, "Fourty"},
// 	{30, "Thirty"},
// 	{20, "Twenty"},
// 	{19, "Nineteen"},
// 	{18, "Eighteen"},
// 	{17, "Seventeen"},
// 	{16, "Sixteen"},
// 	{15, "Fifteen"},
// 	{14, "Fourteen"},
// 	{13, "Thirteen"},
// 	{12, "Twelve"},
// 	{11, "Eleven"},
// 	{10, "Ten"},
// 	{9, "Nine"},
// 	{8, "Eight"},
// 	{7, "Seven"},
// 	{6, "Six"},
// 	{5, "Five"},
// 	{4, "Four"},
// 	{3, "Three"},
// 	{2, "Two"},
// 	{1, "One"},
// };
// string numberToWords(int num)
// {
// 	if(num == 0)	return "Zero";
// 	for(auto it: mp)
// 	{
// 		if(num >= it.first)
// 		{
// 			string a = "";
// 			if(num >= 100)
// 			{
// 				a = numberToWords(num / it.first);
// 			}
// 			string b = " " + it.second;
// 			string c = "";
// 			if(num%it.first != 0)
// 			{
// 				c = numberToWords(num % it.first);
// 			}
// 			return a + b + c;
// 		}
// 	}
// 	return "";
// }
// int main()
// {
// 	// int num = 1234567;
// 	int num = INT_MAX;
// 	string ans = numberToWords(num);
// 	cout<<ans;
// }

// 27. 44. Wildcard Matching
// bool isMatchHelper(string& s, string& p, int i, int j)
// {		
// 		// base case 
// 	// when both are out of bound hence both string matched
// 	if(i >= s.size() && j >= p.size())	return true;
// 	// when s is out of bound but p has some char left
// 	if(i >= s.size() && j < p.size())
// 	{
// 		while(j < p.size())
// 		{
// 			// if at any position there is not * return false
// 			// eg- *fg 	return false
// 			// eg- ****** return true
// 			if(p[j] != '*')	return false;
// 			j++;
// 		}
// 		return true;
// 	}	
// 		// single character matching
// 	if(s[i] == p[j] || '?' == p[j])
// 	{
// 		return isMatchHelper(s, p, i+1, j+1);
// 	}
// 	if(p[j] == '*')
// 	{
// 			// treat '*' as empty or null
// 		bool caseA = isMatchHelper(s, p, i, j+1);
// 			// let '*' consume 1 char
// 		bool caseB = isMatchHelper(s, p, i+1, j);
// 		return caseA || caseB;
// 	}
// 		// no matching
// 	return false;
// }
// bool isMatch(string& s, string& p)
// {
// 	return isMatchHelper(s, p, 0, 0);
// }
// int main()
// {
// 	// string s = "aa";
// 	// string p = "a****";
// 	string s = "abcdefg";
// 	string p = "abc*fg";
// 	cout<<isMatch(s, p);
// }