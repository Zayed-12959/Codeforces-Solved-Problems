#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    map<string, string> mp;
    for(int i=0; i<q; i++){
        string old_handle, new_handle;
        cin >> old_handle >> new_handle;

        if(mp.find(old_handle) == mp.end()){
            mp[new_handle] = old_handle;
        } else {
            string original_handle = mp[old_handle];
            mp.erase(old_handle);
            mp[new_handle] = original_handle;
        }
    }

    cout << mp.size() << endl;
    for(auto it : mp){
        cout << it.second << " " << it.first << endl;
    }
return 0;
}