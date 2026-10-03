#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int left = 0, right = n-1;

        while(left<right && s[left]!=s[right]){
            left++;
            right--;
        }

        cout << right-left+1 << endl;
    }
    return 0;
}