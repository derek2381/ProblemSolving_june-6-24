// problem link
// https://codeforces.com/problemset/problem/935/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 1, b = n-1, count = 0;


    while(a <= b){
        if(b%a == 0){
            count++;
        }
        a++;
        b--;
    }

    cout << count << endl;
}
