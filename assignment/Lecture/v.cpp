#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1, 2, 3};
    cout << v1[1] << endl;
    cout << v1.back() << endl;
    v1.push_back(9);
    cout << v1.capacity() << endl;
    v1.pop_back();
    v1.shrink_to_fit();

    v1.insert(v1.begin(),5);
    v1.erase(v1.begin());
    for (auto itr = v1.begin(); itr != v1.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}