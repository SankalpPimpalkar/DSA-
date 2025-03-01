#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;

    while (n != 0){
        int last_num = int(n%10);
        n = n/10;

        sum = (sum * 10) + last_num;
    }
    
    cout << "Reversed numbers are: " << sum << endl;

    return 0;
}