#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Vector {} --> {1,2}
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);

    // Vector {} --> {{1,2}, {3,4}}
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,4);

    // Vector {100, 100, 100, 100, 100}
    vector<int> v3(5, 100);

    // Copies v3 to v4
    vector<int> v4(v3);

    vector<int> v = {2,3,4,5,6,7,8,9};
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << endl;

    it += 2;
    cout << *(it) << endl;

    vector<int> v5 = {1,2,3,4,5,6,7,8,9};

    // for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // for(auto it = v5.begin(); it != v5.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    v5.erase(v5.begin()+2, v5.begin()+5);
    v5.insert(v5.begin(),3, 5);

    vector<int> copy_vector(3,4);
    v5.insert(v5.begin(), copy_vector.begin(), copy_vector.end());

    cout << "Size of v5: " << v5.size() << endl;
    v5.pop_back();
    v5.clear();
    
    cout << v5.empty();

    for(auto it : v5){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}