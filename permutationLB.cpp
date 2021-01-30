
// Input:
// The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

// Output:
// For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ size of string ≤ 5

// Example:
// Input:
// 2
// ABC
// ABSG

// Output:
// ABC ACB BAC BCA CAB CBA 
// ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

// Explanation:
// Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .
 
#include <bits/stdc++.h>
using namespace std;
	
int main() {
    int t;
    cin>>t;
   while(t--){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<" ";
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<" ";
    }
    cout<<endl;
   }
	return 0;
}
