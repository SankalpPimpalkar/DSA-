#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n1,n2;
    cin >> n1 >> n2;

    int gcd = 1;

    // Brute force
    // for (int i=1; i<= min(n1,n2); i++){

    //     if(n1%i == 0 && n2%i == 0){
    //         gcd = i;
    //     }
    // }

    // Equilateral algorithm
    while (n1 > 0 && n2 > 0){
        
        if (n1 > n2) {
            n1 = n1%n2;
        }
        else {
            n2 = n2%n1;
        }
    }
    
    if (n1 == 0) {
        gcd = n2;
    }
    else {
        gcd = n1;
    }

    cout << "GCD/HCF is " << gcd << endl;

    return 0;
}