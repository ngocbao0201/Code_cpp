#include <bits/stdc++.h>

using namespace std;

bool is_Prime(int n){
    if (n < 2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    float cnt = 0;
    float sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if( is_Prime(arr[i]) ){
            sum += arr[i];
            cnt += 1;
        }
    }
    cout << fixed << setprecision(3) << (sum/cnt) << endl;
}