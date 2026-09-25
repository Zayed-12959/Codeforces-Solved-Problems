#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << 2 << endl;

        cout << n << " " << n-1 << endl;

        int current = n;
        for(int i=n-2; i>=1; i--){
            cout << current << " " << i << endl;
            current = (current+i + 1)/ 2;
        }
    }
    return 0;
}