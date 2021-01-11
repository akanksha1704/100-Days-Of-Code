
// Say you have an array for which the ith element is the price of a given stock on day i.

// If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

// Note that you cannot sell a stock before you buy one.

// Example 1:

// Input: [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
//              Not 7-1 = 6, as selling price needs to be larger than buying price.
// Example 2:

// Input: [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transaction is done, i.e. max profit = 0.

//Brute Force Approach
//Best time to buy and Sell stock
//T(n)=O(n*n)
//Spcae=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sp=0;
        int profit=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    sp=a[j]-a[i];
                }

                if(sp>profit){
                    profit=sp;
                }
            }
        }

    cout<<profit<<endl;

return 0;}


//optimize  solution
//T(n)=O(n)
//Space=O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int profit=0;
        int minPrice=INT_MAX;
        for(int i=0;i<n;i++){
            minPrice=min(minPrice,prices[i]);
            profit=max(profit,prices[i]-minPrice);
        }
        return profit;
    }
};
