#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    int i = 0;
    int j = n-1;

    int sereja = 0;
    int dima = 0;

    while(true){
        if(i>j){
            break;
        }

        if(a[i]>a[j]){
            sereja += a[i];
            i++;
        }
        else{
            sereja += a[j];
            j--;
        }

        if(i>j){
            break;
        }
        
        if(a[i]>a[j]){
            dima += a[i];
            i++;
        }
        else{
            dima += a[j];
            j--;
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}