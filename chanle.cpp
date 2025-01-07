#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum_c = 0, cnt_c = 0;
    int sum_le = 0, cnt_le = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] % 2 ==0){
            cnt_c++;
            sum_c += arr[i];
        }
        else{
            cnt_le++;
            sum_le += arr[i];
        }
    }
    cout << cnt_c << endl;
    cout << cnt_le << endl;
    cout << sum_c << endl;
    cout << sum_le << endl;
}