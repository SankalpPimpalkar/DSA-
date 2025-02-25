#include<bits/stdc++.h>
using namespace std;

//  A  B  C  D  E 
//  A  B  C  D 
//  A  B  C 
//  A  B 
//  A 

int main(){
    
    int n;
    cin >> n;

    for (int i = n; i > 0; i--){

        char ch = 'A';

        for (int j=0; j<i; j++){
            cout << " " << ch++ << " " ;
        }
        
        cout << endl;
    }
    

    return 0;
}