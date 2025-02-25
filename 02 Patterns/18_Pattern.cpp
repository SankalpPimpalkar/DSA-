#include<bits/stdc++.h>
using namespace std;

//  E 
//  D  E 
//  C  D  E 
//  B  C  D  E 
//  A  B  C  D  E 

int main(){
    
    int n;
    cin >> n;
    
    for (int i = 0; i <= n; i++){
        char ch = 'A'+n-i;
        
        for (int j=0; j<=i; j++){
            cout << " " << ch << " ";
            ch += 1;
        }
        
        cout << endl;
    }
    

    return 0;
}