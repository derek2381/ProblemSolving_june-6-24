// problem link
// https://codeforces.com/problemset/problem/1850/C


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str = "";
        char c;

        for(int i = 0; i < 8;i++){
            for(int j = 0; j < 8;j++){
                cin >> c;
                if(c != '.'){
                    str += c;
                }
            }
        }

        cout << str << endl;
    }
}
