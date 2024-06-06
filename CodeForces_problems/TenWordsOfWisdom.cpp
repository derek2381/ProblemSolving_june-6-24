// problem link
// https://codeforces.com/problemset/problem/1850/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> len(n), qua(n);
        int res = 0, max = 0;

        for(int i = 0; i <n;i++){
            cin >> len[i] >> qua[i];

            // cout << len[i] << " " << qua[i] << endl;
            if(len[i] <= 10 && qua[i] > max){
                max = qua[i];
                res = i+1;
            }
        }


        cout << res << endl;

    }
}
