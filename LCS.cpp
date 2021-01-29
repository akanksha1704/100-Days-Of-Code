#include<bits/stdc++.h>
using namespace std;

void lcs(char *x,char *y,int m,int n){
    int dp[m+1][n+1];
    int i,j;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    //return dp[m][n];
    // Following code is used to print LCS
   int index = dp[m][n];

   // Create a character array to store the lcs string
   char lcs[index+1];
   lcs[index] = '\0'; // Set the terminating character

   // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   int s = m, r = n;
   while (s > 0 && r > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (x[s-1] == y[r-1])
      {
          lcs[index-1] = x[s-1]; // Put current character in result
          s--; r--; index--;     // reduce values of i, j and index
      }

      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (dp[s-1][r] > dp[s][r-1])
         s--;
      else
         r--;
   }

   // Print the lcs
   cout << "LCS of " << x << " and " << y << " is " << lcs;
}


int main(){
    char X[]="AGGTAB";
    char Y[]="GXTXAYB";
    int m=strlen(X);
    int n=strlen(Y);
    //cout<<"Length of LCS is:"<<lcs(X,Y,m,n);
    lcs(X,Y,m,n);

return 0;}
