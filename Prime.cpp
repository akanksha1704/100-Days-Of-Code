//complexity-O(sqrt(N))
  #include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;


}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)==true)
        cout<<"prime";
    else
        cout<<"non-prime";

return 0;}
