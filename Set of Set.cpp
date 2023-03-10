#include<bits/stdc++.h>
using namespace std;

int main() {
    set<set<int>> s;
    int n, m,i,j;
    cin>>n>>m;

    // Read in each set and its elements
    for (i = 0; i < n; i++) {
        vector<int> temp(m);
        for (j = 0; j < m; j++) {
            cin>>temp[j];
        }
        s.insert(set<int>(temp.begin(), temp.end()));
    }

    // Iterate over each set and its elements
    for (auto& subset : s) {
        cout << "Set:";
        for (auto& ele : subset) {
            cout<< " " <<ele;
        }
        cout<<endl;
    }

    return 0;
}


/*
3 3
2 3 1
3 1 4
3 1 5
*/
