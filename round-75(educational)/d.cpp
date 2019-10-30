#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<lli,lli>>v(n);

        for(int i = 0; i < n; i++){
            lli x, y;
            // cin >> x >> y;
            v[i].first = x;
            v[i].second = y;
        }
            
        
        vector<vector<lli>> dp(n, vector<lli>(4, INT_MAX));
        for(int i = 1; i < n; i++){
            for(int j = 1; j <= 3; j++){
                for(int k = 0; k <= 2; k++){
                    if(v[i-1].first+k != v[i].first+j)
                        dp[i][j] = min(dp[i][j], dp[i-1][k]);
                }
                dp[i][j] += j*v[i].second;
            }
        }
        lli minv = 0;
        for(int j = 1; j <= 3; j++){
            minv = min(minv, dp[n-1][j]);
        }
        cout << minv << endl;
        return 0;
    }
}