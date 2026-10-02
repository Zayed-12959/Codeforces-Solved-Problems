#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int i=0, j=0;
    long long total_pairs = 0;

    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            int val = a[i];
            long long count_a=0;
            long long count_b=0;

            while(i<n && a[i]==val){
                count_a++;
                i++;
            }

            while(j<m && b[j]==val){
                count_b++;
                j++;
            }

            total_pairs += count_a*count_b;
        }
    }

    cout << total_pairs << endl;
}