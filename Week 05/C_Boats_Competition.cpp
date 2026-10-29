#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> w(n);
        for(int i = 0; i < n; i++){
            cin >> w[i];
        }

        sort(w.begin(), w.end());

        int max_teams = 0;

        for(int s=2; s<=2*n; s++){
            int left = 0;
            int right = n-1;
            int teams = 0;

            while(left < right){
                if(w[left] + w[right] == s){
                    teams++;
                    left++;
                    right--;
                } 
                else if(w[left] + w[right] < s){
                    left++;
                } 
                else {
                    right--;
                }
            }
            max_teams = max(max_teams, teams);
        }
        cout << max_teams << endl;
    }
}