#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int anterior = 0, atual = 1, posterior = 0;
    bool pertence = false;

    cout << "Digite o numero anterior ser verificado: ";
    cin >> num;

    while(posterior < num){
        posterior = anterior + atual;
        anterior = atual;
        atual = posterior;

        if(posterior == num){
            pertence = true;
            break;
        }
    }

    if(pertence)
        cout << "Pertence." << endl;
    else 
        cout << "Nao pertence." << endl;

    return 0;
}