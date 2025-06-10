#include <bits/stdc++.h>

using namespace std;

int maiorQ(double a, double b){
    if(a > b){
        return a;               // FUNCAO PARA PEGAR O MAIOR //
    }else{
        return b;
    }
}

int menorQ(double a, double b){
    if(a < b){
        return a;
    }else{                      // FUNCAO PARA PEGAR O MENOR //
        return b;
    }
}

int main(){
    double maior = -1e9, menor = 1e9; //VALOR MAXIMO ALEATORIO 
    int a;
    int soma;
    for(int i = 0;i < 10;i++){
        cin >> a;
        maior = maiorQ(a, maior);
        menor = menorQ(a, menor);
        soma += a;
    }
    int valorMEDIO = (soma/10);


        cout << "O maior valor é: " << maior << endl;
        cout << "O menor valor é: " << menor << endl;
        cout << "O valor médio do conjunto é: " << valorMEDIO << endl;
}