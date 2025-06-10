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
    
    double pri,seg,ter,quar,qui,sex,set,oit,non,dec; // REAIS DO PRIMEIRO ATE O DECIMO // 

        cin >> pri;         
        double maior = pri; // REAIS MAIORES //
        double menor = pri;  // REAIS MENORES //
        cin >> seg;     maior = maiorQ(maior, seg);     menor = menorQ(menor, seg);
        cin >> ter;     maior = maiorQ(maior, ter);     menor = menorQ(menor, ter);
        cin >> quar;    maior = maiorQ(maior, quar);    menor = menorQ(menor, quar);
        cin >> qui;     maior = maiorQ(maior, qui);     menor = menorQ(menor, qui);     //PARA PEGAR O MAIOR E MENOR ENTRE A VARIAVEL
        cin >> sex;     maior = maiorQ(maior, sex);     menor = menorQ(menor, sex);     //JA PRESENTE E A DADA AGORA 
        cin >> set;     maior = maiorQ(maior, set);     menor = menorQ(menor, set);
        cin >> oit;     maior = maiorQ(maior, oit);     menor = menorQ(menor, oit);
        cin >> non;     maior = maiorQ(maior, non);     menor = menorQ(menor, non);
        cin >> dec;     maior = maiorQ(maior, dec);     menor = menorQ(menor, dec);

        double soma = pri + seg + ter + quar + qui + sex + set + oit + non + dec;
        double valorMEDIO = (soma/10);

        cout << "O maior valor é: " << maior << endl;
        cout << "O menor valor é: " << menor << endl;
        cout << "O valor médio do conjunto é: " << valorMEDIO << endl;
}