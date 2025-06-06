#include <bits/stdc++.h>
using namespace std;

bool comparar(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first > b.first;
}


int main() {
 
    string linha;
    bool primeiro_caso = true;
    while(getline(cin, linha)){
        if(!primeiro_caso){
            cout << endl;
        }
        primeiro_caso = false;
        
        map<int, int> frequencias;
        
        for(char c : linha){
            int ascii = c;
            frequencias[ascii]++;
        }
        
        vector<pair<int, int>> lista(frequencias.begin(), frequencias.end());
        sort(lista.begin(), lista.end(), comparar);
        
        for(const auto& par : lista){
            cout << par.first << " " << par.second << endl;
        }
    }
 
    return 0;
}