#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, string> mp;

    mp[1] = "Sankalp";
    mp[2] = "Sumit";
    mp[3] = "Piyush";

    mp.emplace(4, "Durgesh");
    mp.insert({5, "Sonal"});

    for (auto it: mp) {
        cout << it.first << ":" << it.second << endl; 
    }

    cout << endl;

    cout << mp[1] << endl;
    cout << mp[3] << endl;

    auto it = mp.find(1);
    cout << (*it).second << endl;

    return 0;
}