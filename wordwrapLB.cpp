
// Given an array of size N, which denotes the number of characters in one word. The task is simple, count the number of words in a single line with space character between two words.

// Input:
// First line contains the number of test cases T. First line of every test case consists of N, denoting number of elements in array. Second line consists of elements in array. Third line consists of characters allowed per line.

// Output:
// Single line output,print 2*L spaced integers (where L is the number of lines required to adjust the words with given limit of character per line), denoting from which word to word in every line.(for more clearance of output, look the output in example).

// Constraints:
// 1<=T<=100
// 1<=N<=100

// Example:
// Input:
// 2
// 4
// 3 2 2 5
// 6
// 3
// 3 2 2
// 4
// Output:
// 1 1 2 3 4 4 
// 1 1 2 2 3 3 

// For the first test case.
// Line number 1: From word no. 1 to 1
// Line number 2: From word no. 2 to 3
// Line number 3: From word no. 4 to 4 


#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX

int printSolution (int p[], int n);


void solveWordWrap (int l[], int n, int M)
{

    int extras[n+1][n+1];

    int lc[n+1][n+1];

    int c[n+1];

    int p[n+1];

    int i, j;

    for (i = 1; i <= n; i++)
    {
        extras[i][i] = M - l[i-1];
        for (j = i+1; j <= n; j++)
            extras[i][j] = extras[i][j-1] - l[j-1] - 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            if (extras[i][j] < 0)
                lc[i][j] = INF;
            else if (j == n && extras[i][j] >= 0)
                lc[i][j] = 0;
            else
                lc[i][j] = extras[i][j]*extras[i][j];
        }
    }

    c[0] = 0;
    for (j = 1; j <= n; j++)
    {
        c[j] = INF;
        for (i = 1; i <= j; i++)
        {
            if (c[i-1] != INF && lc[i][j] != INF &&
                           (c[i-1] + lc[i][j] < c[j]))
            {
                c[j] = c[i-1] + lc[i][j];
                p[j] = i;
            }
        }
    }

    printSolution(p, n);
}

int printSolution (int p[], int n)
{
    int k;
    if (p[n] == 1)
        k = 1;
    else
        k = printSolution (p, p[n]-1) + 1;
    cout<<p[n]<<" "<<n<<" ";
    return k;
}

// Driver program to test above functions

int main()
{
    int n ;
    cin>>n;
    int l[n];
    for(int i=0;i<n;i++) cin>>l[i];
    int M ;
    cin>>M;
    solveWordWrap (l, n, M);
    return 0;
}


