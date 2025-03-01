#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cin >> num;

    int result = 0;
    int n = num;
    int count = 0;

    while (n != 0){
        n = n/10;
        count++;
    }

    n = num;

    while (num != 0){
        
        int last_digit = num%10;
        num = num / 10;
        result += pow(last_digit,count);
    }
    
    if (n == result){
        cout << "It is an armstrong number" << endl;
    } else {
        cout << "It is not an armstrong number" << endl;
    }

    return 0;
}