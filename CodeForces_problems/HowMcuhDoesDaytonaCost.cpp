// problem link
// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, val;
        cin >> n >> k;

        bool flag = false;
        for(int i = 0;i < n;i++){
            cin >> val;

            if(val == k){
                flag = true;
            }
        }

        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
