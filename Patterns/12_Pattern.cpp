#include<bits/stdc++.h>
using namespace std;

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

int main(){
    
    int n;
    cin >> n;
    int space = 2*(n-1);

    for (int i = 1; i <= n; i++){
        
        for (int j = 1; j <= i; j++){
            cout << j;
        }

        for (int j = 0; j < space; j++){
            cout << " ";
        }
        
        
        for (int j = i; j > 0; j--){
            cout << j;
        }
        
        
        cout << endl;
        space -= 2;
    }
    

    return 0;
}