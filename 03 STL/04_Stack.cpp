#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    st.emplace(0);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int>st1, st2;
    st1.swap(st2);

    return 0;
}