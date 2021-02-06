
// Given a string S consisting only of opening and closing curly brackets '{' and '}' find out the minimum number of reversals required to make a balanced expression.

// Input
// The first line of input contains an integer T, denoting the number of test cases. Then T test cases
// follow. The first line of each test case contains a string S consisting only of { and }.

// Output
// Print out minimum reversals required to make S balanced. If it cannot be balanced, then print -1.

// Constraints
// 1 <= T <= 100
// 0 <= |S| <= 50

// Examples
// Input
// 4
// }{{}}{{{
// {{}}}}
// {{}{{{}{{}}{{
// {{{{}}}}

// Output
// 3
// 1
// -1
// 0

// Explanation:
// Testcase 1: For the given string }{{}}{{{ since the length is even we just need to count the number of openning brackets('{') suppose denoted by 'm' and closing brackest('}') suppose dentoed by 'n' after removing highlighted ones. After counting compute ceil(m/2) + ceil(n/2).


#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    if(s.length()&1)
	        cout<<"-1\n";
	    else{
	        stack<char>st;
	        int c=0;
	        int c2=0;
	        for(int i=0;i<s.length();i++){
	            char ch=s[i];
	            if(ch=='{'){
	                st.push(ch);
	                c2++;
	            }
	            else if(ch=='}' && !st.empty() && st.top()=='{'){
	                st.pop();
	                c2--;
	            }
	            else
	               c++;
	               
	        }
	        if(c&1) c=(c/2)+1;
	        else   c=c/2;
	        if(c2&1)  c2=(c2/2)+1;
	        else    c2=c2/2;
	        
	        cout<<c+c2<<endl;
	    }     
	}
	return 0;
}
