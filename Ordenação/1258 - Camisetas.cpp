#include <bits/stdc++.h>
using namespace std;
 
struct Camiseta {
    string nome;
    string cor;
    string tamanho;
};

bool compararCamisetas(const Camiseta &a, const Camiseta &b){
    if(a.cor != b.cor){
        return a.cor < b.cor;
    }    
    
    if (a.tamanho != b.tamanho){
        if(a.tamanho == "P"){
            return true;
        }else if (a.tamanho == "M" && b.tamanho == "G"){
            return true;
        }else if (a.tamanho == "M" && b.tamanho == "P"){
            return false;
        }else if (a.tamanho == "G"){
            return false;
        }
    }
    return a.nome < b.nome;
}
 
int main() {
    
    int N;
    bool primeiroCaso = true;
    
    while (cin >> N && N != 0) {
        if (!primeiroCaso) {
            cout << endl; 
        }
        primeiroCaso = false;
        
        vector<Camiseta> camisetas(N);
        
        
        for (int i = 0; i < N; i++) {
            cin.ignore(); 
            getline(cin, camisetas[i].nome);
            cin >> camisetas[i].cor >> camisetas[i].tamanho;
        }
        
        
        sort(camisetas.begin(), camisetas.end(), compararCamisetas);
        
        
        for (const auto &camiseta : camisetas) {
            cout << camiseta.cor << " " << camiseta.tamanho << " " << camiseta.nome << endl;
        }
    }

    return 0;
}