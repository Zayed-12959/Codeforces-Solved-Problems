#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }

    int left = 0;
    int right = n-1;
    long long sum1 = d[0];
    long long sum3 = d[n-1];
    long long max_sum = 0;

    while(left<right){
        if(sum1==sum3)
        {
            max_sum = sum1;
            left++;
            right--;
            if(left<right){
                sum1 += d[left];
                sum3 += d[right];
            }
        }
        else if(sum1<sum3){
            left++;
            sum1 += d[left];
        }
        else{
            right--;
            sum3 += d[right];
        }
    }
    cout << max_sum << endl;
}