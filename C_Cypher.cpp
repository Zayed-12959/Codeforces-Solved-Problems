#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int N;
        cin >> N;

        vector<int> a;
        for(int i=0; i<N; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }

        for(int i=0; i<N; i++){
            int n;
            cin >> n;

            vector<char> b;
            for(int j=0; j<n; j++){
                char y;
                cin >> y;
                if(y=='D'){
                    if(a[i]==9){
                        a[i] = 0;
                    }
                    else{
                        a[i] = a[i] + 1;
                    }
                }
                else if(y=='U'){
                    if(a[i]==0){
                        a[i] = 9;
                    }
                    else{
                        a[i] = a[i] - 1;
                    }
                }
            }
        }

        cout << endl;

        for(int i=0; i<N; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        cout << endl;

    }

    return 0;
}