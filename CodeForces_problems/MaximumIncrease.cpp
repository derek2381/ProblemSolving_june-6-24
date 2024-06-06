// problem link
// https://codeforces.com/problemset/problem/702/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i <n;i++){
        cin >> arr[i];
    }

    int max = 1, count = 1;

    for(int i = 1;i < n;i++){
        if(arr[i] > arr[i-1]){
            count++;
             if(max < count){
                max = count;
            }
        }else{
            if(max < count){
                max = count;
            }
            count = 1;
        }
    }

    cout << max << endl;

}
