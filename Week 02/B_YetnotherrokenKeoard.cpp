#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.length();
        vector<int> lower_index;
        vector<int> upper_index;
        vector<int> deleted(n,false);

        for(int i=0; i<n; i++){
            if(s[i]=='b'){
                deleted[i] = true;
                if(!lower_index.empty()){
                    deleted[lower_index.back()] = true;
                    lower_index.pop_back();
                }
            }

            else if(s[i]=='B'){
                deleted[i] = true;
                if(!upper_index.empty()){
                    deleted[upper_index.back()] = true;
                    upper_index.pop_back();
                }
            }
            
            else if(s[i]>='a' && s[i]<='z'){
                lower_index.push_back(i);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                upper_index.push_back(i);
            }
        }

        string result = "";
        for(int i=0; i<n; i++){
            if(!deleted[i]){
                result += s[i];
            }
        }
        cout << result << endl;
    }
}