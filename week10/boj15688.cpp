#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int N;
    cin >> N;

    for (int i=0; i<N; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++){
        cout << v[i] << '\n';
    }
    return 0;

}