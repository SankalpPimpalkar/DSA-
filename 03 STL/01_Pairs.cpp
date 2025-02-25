#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Pair {int, int}
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    // Pair {int, Pair}
    pair<int, pair<int,int>> p2 = {1, {2,3}};
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    // Array [Pair, Pair, Pair]
    pair<int,int> arr[3] = {{1,2}, {2,3}, {4,5}};
    for (int i=0; i<3; i++){
        cout << arr[i].first << ":" << arr[i].second << endl;
    }

    return 0;
}