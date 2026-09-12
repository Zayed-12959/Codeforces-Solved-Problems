#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            freq[x]++;
        }

        priority_queue<int> pq;
        for(auto p:freq){
            pq.push(p.second);
        }

        while(pq.size()>1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            first--;
            second--;

            if(first>0){
                pq.push(first);
            }
            if(second>0){
                pq.push(second);
            }
        }

        if(pq.empty()){
            cout << "0" << endl;
        }
        else{
            cout << pq.top() << endl;
        }
    }
    return 0;
}
