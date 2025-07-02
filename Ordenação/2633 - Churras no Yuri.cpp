#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int N;
    while(cin >> N){
        int valor;
        string nome;
        vector<pair<string, int>> carnes;

        
        for(int i = 0; i < N; i++){
            cin >> nome >> valor;
            carnes.push_back({nome, valor});
        }
        
        sort(carnes.begin(), carnes.end(), [](auto& a, auto& b)
        {
           return a.second < b.second; 
        });
        
        int total = carnes.size();
        int count = 0;
        for(const auto& carne : carnes){
            cout << carne.first;
            count++;
            if(count < total){
                cout << " ";
            }
        }
        cout << endl;
        
    }
    return 0;
}