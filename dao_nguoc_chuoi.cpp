#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=s.size()-1;i>=0;i--){
        cout << s[i];
    }
    cout << endl;
    for (int i=0;i<s.size();i++){
        if( s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]);
    }
    }
    cout << s << endl;
    for (int i=0;i<s.size();i++){
        s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}