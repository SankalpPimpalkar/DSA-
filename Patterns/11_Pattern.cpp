#include<bits/stdc++.h>
using namespace std;

// 0 
// 1 0 
// 0 1 0 
// 1 0 1 0 
// 0 1 0 1 0 
// 1 0 1 0 1 0 
// 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 

int main(){
    
    int n;
    cin >> n;
    int start = 1;

    for (int i = 1; i < 2*n-1; i++){
        
        if (i%2 == 0) {
            start = 1;
        } else {
            start = 0;
        }

        for (int j=0; j<i;j++) {
            cout << start << " ";
            start = 1 - start;
        }
        
        cout << endl;
    }
    

    return 0;
}