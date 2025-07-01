#include <bits/stdc++.h>

using namespace std;

string analiseMAIUSCULA(string s){
    int menor = 'A';
    int maior = 'Z';
    int tamanho = s.size();

    string nova;
            
    for(int i = 0;i < tamanho;i++){

        if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == ':'){
           continue;
        }
        else if(s[i] >= menor && s[i] <= maior){
            nova += s[i] + 32; // se voce analisar pela tabela ASCII 'a' = 97 e 'A' = 65
        }                       // sua diferenca é 32, fazendo com que se voce quiser tranformar uma
        else{                   // letra em minuscula, basta somar 32, sua diferenca.
            nova += s[i];
        }

    }

        return nova;
}


int main(){
    string s; getline(cin, s);
    
    string nova = analiseMAIUSCULA(s);

    int tamanhoNOVA = nova.size();
    int contaPALAVRAS = 0;

    for(int i = 1;i < tamanhoNOVA;i++){
         if((s[i-1] == ' ' && s[i] == 'a' && s[i+1] == ' ')
         || (s[i-1] == ' ' && s[i] == 'e' && s[i+1] == ' ')
         || (s[i-1] == ' ' && s[i] == 'o' && s[i+1] == ' ' )
         || (s[i-1] == ' ' && s[i] == 'n' && s[i+1] == 'e' && s[i+2] == 'm' && s[i+3] == ' ')
         || (s[i-1] == ' ' && s[i] == 'o' && s[i+1] == 'u' && s[i+2] == ' ') 
         || (s[i-1] == ' ' && s[i] == 'd' && s[i+1] == 'e' && s[i+2] == ' ') 
         || (s[i-1] == ' ' && s[i] == 'a' && s[i+1] == 's' && s[i+2] == ' ') 
         || (s[i-1] == ' ' && s[i] == 'e' && s[i+1] == 'm' && s[i+2] == ' ') 
         || (s[i-1] == ' ' && s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 'a' && s[i+4] == ' ') 
        ) continue;
        else if(s[i-1] == ' '){
            contaPALAVRAS++;
        }
    }


    cout << nova << endl;
    cout << endl;
    cout << "#palavras: " << contaPALAVRAS   << endl;
}