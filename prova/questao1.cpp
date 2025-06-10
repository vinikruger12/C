#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<double> pfn(15);
    vector<double> agt(15);

    double somaPFN = 0;
    double somaAGT = 0;
    

    cout << "De as 15 notas de programação funcional" << endl;
    for(int i = 0;i < 15;i++){
        cin >> pfn[i];
    }

    cout << "De as 15 notas de algoritmos" << endl;
    for(int i = 0;i < 15;i++){
        cin >> agt[i];
    }

    for(int i = 0;i < 15;i++){
        somaPFN += pfn[i];          //VAI SOMANDO AS NOTAS DENTRO DE UMA VARIAVEL
        somaAGT += agt[i];
    }

    double mediaPFN = (somaPFN/15);    // FAZ A MEDIA DA TURMA DE PFN
    double mediaAGT = (somaAGT/15);    // FAZ A MEDIA DA TURMA DE AGT

    int alunosMAIORESagt = 0;
    int alunosMAIORESpfn = 0;
    int alunosAMBOS = 0;

    for(int i = 0;i < 15;i++){
        if(pfn[i] >= mediaPFN){     //Alunos maiores ou iguias a media da sala de PFN //
            alunosMAIORESpfn++;
        }

        if(agt[i] >= mediaAGT){         //Alunos maiores ou iguais que a media da sala de agt // 
            alunosMAIORESagt++;
        }

        if(pfn[i] >= mediaPFN && agt[i] >= mediaAGT){   // Alunos >= que a media da sala de AGT e de PFN simultaneamente // 
            alunosAMBOS++;
        }
    }


    cout << "Essa é a média de PFN: " << mediaPFN << endl;
    cout << "Essa é a quantidade de alunos que ficaram acima da media em PFN: " << alunosMAIORESpfn << endl;
    cout << endl;

    cout << "Essa é a média de AGT: " << mediaAGT << endl;
    cout << "Essa é a quantidade de alunos que ficaram acima da media em AGT: " << alunosMAIORESagt << endl;
    cout << endl;
    
    cout << "Essa é a quantidade de alunos que ficaram acima da média em ambos: " << alunosAMBOS << endl; 
}