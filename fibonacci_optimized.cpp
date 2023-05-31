#include <iostream>
using namespace std;

// Time Comlexity : O(N)
// Space Comlexity : O(1)

int main()
{
    int n = 10;
    int prev1 = 1;
    int prev2 = 0;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;
}