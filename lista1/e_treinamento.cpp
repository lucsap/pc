#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int competicoes, dias = 0, fazer=1;
    vector<int> questoes;
    cin >> competicoes;

    for(int i = 0; i < competicoes; i++) {
        int questao;
        cin >> questao;
        questoes.push_back(questao);
    }

    sort(questoes.begin(),questoes.end());

    for(int i = 0; i < competicoes; i++) {
        if(questoes[i] >= fazer) {
            dias++;
            fazer++;
        }
    }

    cout << dias << "\n";
    return 0;
}