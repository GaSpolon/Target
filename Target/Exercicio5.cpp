#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome = "TARGET";
    string aux;

    //cout << nome.length();

    for(int i = nome.length() - 1; i >= 0; i--){
        aux.push_back(nome[i]);
    }

    for(int i = 0; i < nome.length(); i++){
        cout << aux[i];
    }

    cout << endl;

    return 0;
}