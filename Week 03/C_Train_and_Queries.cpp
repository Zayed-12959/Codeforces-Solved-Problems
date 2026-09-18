#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        map<int, int> first_pos;
        map<int, int> last_pos;

        for(int i=0; i<n; i++){
            int x;
            cin >> x;

            if(first_pos.find(x) == first_pos.end()){
                first_pos[x] = i;
            }

            last_pos[x] = i;
        }

        while(k--){
            int a, b;
            cin >> a >> b;

            if(first_pos.count(a) && last_pos.count(b) && first_pos[a] <= last_pos[b]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}