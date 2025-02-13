#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s = "Sankalp";
    int len = s.size();
    s[len - 1] = 'S';

    cout << s[1] << s[2] << s[len - 1] << endl;

    return 0;
}