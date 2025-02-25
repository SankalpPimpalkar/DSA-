#include<bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<int> pq;

    pq.push(2);
    pq.push(5);
    pq.push(9);
    pq.emplace(11);

    cout <<pq.top() << endl;
    pq.pop();
    cout <<pq.top() << endl;

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(2);
    pq2.push(1);
    pq2.push(7);
    pq2.emplace(0);

    cout << pq2.top() << endl;

    return 0;
}