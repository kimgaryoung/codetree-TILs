#include <iostream>

using namespace std;

int n;
int arr[100000];

int dp[100000]={0};


   
        
  


int main() {
    cin >> n;
    for (int i = 1; i <=n; i++) {
        cin >> arr[i];
    }

    dp[1]=arr[1];

    

    for(int i=2; i<=n; i++)
        dp[i]=max(dp[i-1]+arr[i], arr[i]);
    
    int ans = 0;
    for(int i=1; i<=n; i++)
        ans =max(ans,dp[i]);

    cout<<ans;



    // Please write your code here.

    return 0;
}
