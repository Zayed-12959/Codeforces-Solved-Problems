#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        vector<int> answer;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int i=0, j=n-1;
        int ans = 0;

        bool possibility = true;

        while(i<=j){
            if(ans+a[i]!=x){
                ans+=a[i];
                answer.push_back(a[i]);
                i++;
            }
            else if(ans+a[j]!=x){
                ans+=a[j];
                answer.push_back(a[j]);
                j--;
            }

            else{
                possibility = false;
                break;
            }
        }

        if(possibility){
            cout << "YES" << endl;
            for(auto i:answer){
                cout << i << " ";
            }
            cout << endl;

        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}