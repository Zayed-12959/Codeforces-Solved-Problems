#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<string, string>> a;

    for(int i=0; i<n; i++){
        string species, color;
        cin >> species >> color;
        
        bool exists = false;
        for(int j=0; j<a.size(); j++){
            if(a[j].first==species && a[j].second==color){
                exists = true;
                break;
            }
        }

        if(!exists){
            a.push_back({species, color});
        }
    }
    
    cout << a.size() << endl;
    
    return 0;
}