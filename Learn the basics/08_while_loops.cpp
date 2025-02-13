#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1;
    while (i <= 5)
    {
        cout << "Hello " << i << endl;
        i++;
    }

    cout << endl;

    i=5;

    do
    {
        cout << "Hello " << i << endl;
        i--;
    } while (i >= 6);

    return 0;
}