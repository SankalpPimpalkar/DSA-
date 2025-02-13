#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int age;
    cin >> age;

    if (age < 18) {
        cout << "You are a child\n";
    }
    else {
        cout << "You are an adult\n";
    }

    int marks = 80;

    if (marks < 25) {
        cout << "Grade F" << endl;
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "Grade E" << endl;
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "Grade D" << endl;
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "Grade B" << endl;
    }
    else {
        cout << "Grade A" << endl;
    }

    return 0;
}