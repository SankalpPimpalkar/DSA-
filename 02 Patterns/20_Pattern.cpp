#include<bits/stdc++.h>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

int main(){
    
    int n;
    cin >> n;
    int spaces = 2*n;

    for (int i = 0; i <= 2*n - 1; i++){

        int stars = i;
        if (i > n) stars = 2*n-i;
        
        // stars
        for(int j=0; j<stars; j++){
            cout << "*";
        }

        // spaces
        for(int j=0; j<spaces; j++){
            cout  << " ";
        }

        // stars
        for(int j=0; j<stars; j++){
            cout << "*";
        }

        cout << endl;
        if (i<n) spaces -= 2;
        else spaces += 2;
    }
    

    return 0;
}