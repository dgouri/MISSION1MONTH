//TC- O(n)
//SC- O(n) +           O(n)
//    recursion stack + vector

#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        cout << fib(n, dp) << " ";
    }

    return 0;
}



// -----

//TC- O(n)
//SC- O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int prev1=1;
    int prev2=0;
    for(int i=2; i<=n; i++){
        int curr= prev1 + prev2;
        prev2= prev1;
        prev1= curr;
    }
    cout<<prev1;
    return ;
}