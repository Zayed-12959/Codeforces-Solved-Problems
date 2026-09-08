#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string>polycurp;
    unordered_set<string> repeats;
    
    while(n--){
        string x;
        cin >> x;
        polycurp.push_back(x);
    }

    for(int i=polycurp.size()-1; i>=0; i--){
        if(repeats.find(polycurp[i]) == repeats.end()){
            cout << polycurp[i] << endl;
            repeats.insert(polycurp[i]);
        }
    }
    
    return 0;
}