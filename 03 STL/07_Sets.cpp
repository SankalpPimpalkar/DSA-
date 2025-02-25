#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> st;
    st.insert(5);
    st.insert(2);
    st.insert(1);
    st.insert(3);
    st.insert(6);

    auto it = st.find(1);
    cout << *it << endl;

    auto it2 = st.find(10);
    cout << *it2 << endl;

    st.erase(1);

    int count = st.count(2);
    cout << count << endl;

    auto it3 = st.find(1);
    auto it4 = st.find(3);

    st.erase(it3,it4);

    return 0;
}