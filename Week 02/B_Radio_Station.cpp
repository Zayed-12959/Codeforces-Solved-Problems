#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map<string, string> server;
    map<string, string> config;

    for(int i=0; i<n; i++){
        string command;
        string ip;
        cin >> command >> ip;
        server[ip] = command;
    }

    for(int i=0; i<m; i++){
        string command;
        string ip;
        cin >> command >> ip;
        string ip_without_semicolon = ip.substr(0, ip.find(';'));
        config[command] = ip_without_semicolon;
        cout << command << " " << ip << " " << "#" << server[ip_without_semicolon] << endl;
    }

    return 0;
}