#include<bits/stdc++.h>
using namespace std;

// 1 
// 2  3 
// 4  5  6 
// 7  8  9  10 
// 11  12  13  14  15 

int main(){
    
    int n;
    cin >> n;
    int counter = 1;

    for (int i = 0; i <= n; i++){
        
        for (int j=0; j<i; j++){

            cout << " " << counter << " ";
            counter++;
        }
        
        cout << endl;
    }
    

    return 0;
}