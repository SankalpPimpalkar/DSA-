#include<bits/stdc++.h>
using namespace std;

// ----A----
// ---ABC---
// --ABCDC--
// -ABCDEDC-
// ABCDEFEDC

int main(){
    
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        // Space
        for (int j=0; j< n-i-1;j++){
            cout << "-";
        }

        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        // Characters
        for (int j=0; j< 2*i+1; j++){

            cout << ch;

            if (j <= breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }

        // Space
        for (int j=0; j< n-i-1;j++){
            cout << "-";
        }

        cout << endl;
    }

    return 0;
}