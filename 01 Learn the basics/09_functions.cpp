#include<bits/stdc++.h>
using namespace std;

// Function Types
// 1. Void
// 2. Return
// 3. Parameterized
// 4. Non-parameterized

void print_name(string name){
    cout << "Hello " << name << endl;
}

int sum_num(int num1, int num2) {
    
    return num1 + num2;
}

// pass by value
void some_random_func(int num){

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;

    cout << num << endl;
    cout << endl;
}

// pass by reference
void some_random_func2(int &num){

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;

    cout << num << endl;
    cout << endl;
}

int main(){
    
    // string name;
    // cin >> name;
    // print_name(name);

    // int num1,num2;
    // cin >> num1 >> num2;

    // int sum = sum_num(num1,num2);
    // cout << "Sum: " << sum << endl;
    // cout << "Min: " << min(num1,num2) << endl;
    // cout << "Max: " << max(num1,num2) << endl;

    int num = 10;
    some_random_func(num);
    cout << num << endl;
    cout << endl;
    
    num = 10;
    some_random_func2(num);
    cout << num << endl;
    cout << endl;

    return 0;
}