// problem link
// https://codeforces.com/problemset/problem/1807/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k , even = 0, odd = 0;
        cin >> n;

        for(int i = 0; i <n;i++){
            cin >> k;
            if((k&1) == 0){
                even += k;
            }else{
                odd += k;
            }
        }

        if(even > odd){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
}
