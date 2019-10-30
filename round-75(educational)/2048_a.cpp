#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], ssf = 0;
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
            if(arr[i] <= 2048)
                ssf += arr[i];
        }
        if(ssf >= 2048){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}