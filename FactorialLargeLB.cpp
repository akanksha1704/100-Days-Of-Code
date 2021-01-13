// Given an integer, the task is to find factorial of the number.
 
// Input:
// The first line of input contains an integer T denoting the number of test cases.  
// The first line of each test case is N,the number whose factorial is to be found
 
// Output:
// Print the factorial of the number in separate line.
 
// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 1000
 
// Example:
// Input
// 3
// 5
// 10
// 2
 
// Output
// 120
// 3628800
// 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){
    int n;
    cin>>n;
    int q=2;
    int a[100000]={0};
    a[0]=1;
    int x=0;
    int len=1;
    int num=0;
    while(q<=n){
        x=0;
        num=0;
        while(x<len){
            a[x]=a[x]*q;
            a[x]=a[x]+num;
            num=a[x]/10;
            a[x]=a[x]%10;
            x++;
        }
        while(num!=0){
            a[len]=num%10;
            num=num/10;
            len++;
        }
        q++;
    }
    len--;
    while(len>=0){
        cout<<a[len];
        len--;
    }
    cout<<endl;
}

return 0;}
