#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int c, m,x;
        cin >> c >> m >> x;
        int avg = (c+m+x)/3;
        int ans = min(min(c, m), avg);
        cout << ans << endl;
    }
}