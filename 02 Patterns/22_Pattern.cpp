#include<bits/stdc++.h>
using namespace std;

// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 

int main(){
    
    int n;
    cin >> n;
    
    for (int i = 0; i < 2*n-1; i++){
        for (int j=0; j<2*n-1; j++){
            int top = i;
            int bottom = (2*n-2)-i;
            int left= j;
            int right = (2*n-2)-j;

            cout << (n - min(min(top,bottom), min(left,right))) << " ";
        }

        cout << endl;
    }

    return 0;
}