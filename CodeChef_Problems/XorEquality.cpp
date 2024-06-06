// problem link
// https://www.codechef.com/problems/XOREQUAL


#include <iostream>
using namespace std;

int mod = 1e9+7;

long long int APowB(long long int a,long long int b){
    if(b == 1){
        return a%mod;
    }

    if(b == 0){
        return 1;
    }

    long long int half = APowB(a, b/2);

    long long int sq = ((half%mod) * (half%mod))%mod;

    if((b&1) != 0){
        return ((sq%mod)*(a%mod))%mod;
    }else{
        return sq%mod;
    }
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long int val = APowB(2, n-1);
	    cout << val << endl;
	}
	return 0;
}
