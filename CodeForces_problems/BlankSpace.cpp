// problem link
// https://codeforces.com/problemset/problem/1829/B


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i = 0; i< n;i++){
            cin >> arr[i];
        }

        int max = 0, count=  0;

        for(int i : arr){
            if(i == 0){
                count++;
                if(max < count){
                    max = count;
                }
            }else{
                count = 0;
            }
        }

        cout << max << endl;
    }
}
