#include<bits/stdc++.h>
using namespace std;

int main(){
    
    list<int> ls;

    ls.push_back(4);
    ls.emplace_back(1);

    ls.push_front(0);
    ls.emplace_front(9);

    cout << *(ls.begin()) << endl;
    cout << ls.size() << endl;

    return 0;
}