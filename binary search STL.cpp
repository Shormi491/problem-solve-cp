#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 3, 5, 7, 9, 11};
    int target = 7;
    if (binary_search(v.begin(), v.end(), target)) {
        cout << target << " is found in the vector." << endl;
    } else {
        cout << target << " is NOT found in the vector." << endl;
    }

    return 0;
}
