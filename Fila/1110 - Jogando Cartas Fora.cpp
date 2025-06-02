#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    while (cin >> n && n != 0){
        queue<int> cards;
        vector<int> discards;
        for (int i = 1; i <= n; i++){
            cards.push(i);
        }
        
        while(cards.size() > 1){
            discards.push_back(cards.front());
            cards.pop();
            
            cards.push(cards.front());
            cards.pop();
        }
        
        cout << "Discarded cards: ";
        for(size_t i = 0; i < discards.size(); i++){
            if(i != 0) cout << ", ";
            cout << discards[i];
        }
        cout << endl;
        
        cout << "Remaining card: " << cards.front() << endl;
    }
 
    return 0;
}
