#include <bits/stdc++.h>

using namespace std;
 
int main() {
    
    int T; cin >> T;
    cin.ignore();
    for (int i = 0; i  < T; i++){
        unordered_map<string, string> mapWords;
        int M, N; cin >> M >> N;
        cin.ignore();
        for (int j = 0; j < M; j++){
            string wordJ, translate;
            getline(cin, wordJ);
            getline(cin, translate);
            mapWords[wordJ] = translate;
        }
        for (int h = 0; h < N; h++){
            string music;
            getline(cin, music);
            
            stringstream ss(music);
            string word;
            string resposta;
            
            bool firstWord = true;
            while (ss >> word){
                if (mapWords.find(word) != mapWords.end()){
                    if(!firstWord) resposta += " ";
                    resposta += mapWords[word];
                }else{
                    if(!firstWord) resposta += " ";
                    resposta += word;
                }
                firstWord = false;
            }
            cout << resposta << endl;
        }
        cout << endl;
        
    }
 
    return 0;
}



