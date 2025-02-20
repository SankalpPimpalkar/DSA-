#include<bits/stdc++.h>
using namespace std;

// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

int main(){
    
    int n;
    cin >> n;
    int space = 0;
    
    for (int i = 0; i <= n; i++){
        
        // stars
        for (int j=0; j<= n-i; j++){
            cout << "*";
        }

        // spaces
        for (int j=0; j<space; j++){
            cout << " ";
        }
        space+=2;

        // stars
        for (int j=0; j<= n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i=0; i< n+1; i++){
        // stars
        for (int j=0; j<i; j++){
            cout << "*";
        }

        // spaces
        for (int j=0; j<space; j++){
            cout << " ";
        }
        space-=2;

        // stars
        for (int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}