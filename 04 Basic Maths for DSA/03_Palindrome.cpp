#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int numbers = n;
    int sum = 0;

    while (n != 0){
        int last_num = int(n%10);
        n = n/10;

        sum = (sum * 10) + last_num;
    }
    
    if (numbers == sum){
        cout << "Numbers are palindrome" << endl;
    } else {
        cout << "Numbers are not palindrome" << endl;
    }

    return 0;
}