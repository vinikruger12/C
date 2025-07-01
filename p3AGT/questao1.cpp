#include <bits/stdc++.h>

using namespace std;

int main(){
    int nAlunos = 15;
    int nMaterias = 3;

    double matriz[nMaterias][nAlunos];
    double somaPFN = 0, somaCALC = 0, somaAGT = 0; 

    int contaExamePFN = 0, contaExameAGT = 0, contaExameCALC = 0;


    for(int i = 0;i < nMaterias;i++){

        for(int j = 0;j < nAlunos;j++){

            cin >> matriz[i][j];

            if(i == 0){
                somaPFN += matriz[i][j];   // adiciona para no fim fazer a media da turma
                    if(matriz[i][j] < 7) contaExamePFN++; // A entrada for menor que 7, ira contabilizar 
            }                                              // um aluno de exame
            else if(i == 1){
                somaCALC += matriz[i][j];
                    if(matriz[i][j] < 7) contaExameCALC++;
            } 
            else if(i == 2){
                somaAGT += matriz[i][j];
                    if(matriz[i][j] < 7) contaExameAGT++;
            } 

        } 

    }

    somaAGT /= 15;
    somaCALC /= 15;         // faz a media de turma
    somaPFN /= 15;

    // Analise quem foi a média maior
    if(somaAGT > somaCALC && somaAGT > somaPFN){
        cout << "A maior média da turma foi em Algoritmos." << endl;
    }
    else if(somaCALC > somaAGT && somaCALC > somaPFN){
        cout << "A maior média da turma foi em Calculo." << endl;
    }
    else if(somaPFN > somaCALC && somaPFN > somaAGT){
        cout << "A maior média da turma foi em PFN." << endl;
    }

    // Analise a matéria com mais alunos em recuperação
    if(contaExameAGT > contaExameCALC && contaExameAGT > contaExamePFN){
        cout << "A disciplina com o maior número de estudantes de alunos em exame foi Algoritmo." << endl;
    }
    else if(contaExamePFN > contaExameCALC && contaExamePFN > contaExameAGT){
        cout << "A disciplina com o maior número de estudantes de alunos em exame foi PFN." << endl;
    }
    else if(contaExameCALC > contaExamePFN && contaExameCALC > contaExameAGT){
        cout << "A disciplina com o maior número de estudantes de alunos em exame foi Calculo." << endl;
    }

    
}