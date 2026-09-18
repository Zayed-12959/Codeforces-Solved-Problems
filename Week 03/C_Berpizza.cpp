#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    priority_queue<pair<int, int>> polycarp_pq;
    vector<bool> served(q+1, false);

    int customer_id = 1;
    int monocarp_ptr = 1;

    while(q--){
        int type;
        cin >> type;

        if(type==1){
            int money;
            cin >> money;
            polycarp_pq.push({money, -customer_id}); //(- so that customer with lowest index gets chosen first because he is the earliest customer)
            customer_id++;
        }

        else if(type==2){
            while(served[monocarp_ptr]){
                monocarp_ptr++;
            }
            
            served[monocarp_ptr] = true;
            cout << monocarp_ptr << " ";
        }

        else if(type==3){
            while(served[-polycarp_pq.top().second]){  //the richest unserved customer gets kicked out from the queue
                polycarp_pq.pop();
            } 
            int id = -polycarp_pq.top().second;
            polycarp_pq.pop();

            served[id] = true;
            cout << id << " ";
        }
    }

    cout << endl;
    return 0;
}