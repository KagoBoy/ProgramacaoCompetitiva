#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        int M; cin >> M;
        int C; cin >> C;
        vector<list<int>> numbers(M);
        
        for(int j = 0; j < C; j++){
            int key;
            cin >> key;
            int position = key % M;
            numbers[position].push_back(key);
        }
        
        for (int h = 0; h < M; h++){
            cout << h << " -> ";
            for(auto it = numbers[h].begin(); it != numbers[h].end(); it++){
                cout << *it << " -> ";
            }
            cout << "\\" << endl;
        }
        
        if(i != N - 1){
            cout << endl;
        }
        
        
    }
 
    return 0;
}
