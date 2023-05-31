#include <iostream>
#include <vector>
using namespace std;

// Time Comlexity : O(N)
// Space Comlexity : O(N)(for dp vector) + O(N)(for depth of recursion tree)
int fibonacci_memoization(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fibonacci_memoization(n - 1, dp) + fibonacci_memoization(n - 2, dp);
    return dp[n];
}

int main()
{
    int n = 8;
    vector<int> dp(n + 1, -1);
    cout << fibonacci_memoization(n, dp) << endl;
}