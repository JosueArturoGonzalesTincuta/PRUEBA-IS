#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> l;
        while(n--){
            int a; cin >> a;
            l.push_back(a);
        }

        int s = 0;
        for(auto x : l){
            s += x;
        }

        cout << "El valor de la suma de todos los elementos es: " << s;
    }
}