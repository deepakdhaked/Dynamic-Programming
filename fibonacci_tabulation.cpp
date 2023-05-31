#include <iostream>
#include <vector>
using namespace std;

// Time Comlexity : O(N)
// Space Comlexity : O(N)

int main()
{
    int n = 10;
    vector<int> dp(n + 1);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;
}