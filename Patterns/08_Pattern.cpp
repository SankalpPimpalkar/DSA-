#include<bits/stdc++.h>
using namespace std;

// *********
// -*******-
// --*****--
// ---***---
// ----*----

int main(){
    
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        // Space
        for (int j=0; j<i;j++){
            cout << "-";
        }

        // Star
        for (int j=0; j< 2*n-(2*i+1); j++){
            cout << "*";
        }

        // Space
        for (int j=0; j<i;j++){
            cout << "-";
        }

        cout << endl;
    }

    return 0;
}