#include <bits/stdc++.h>

using namespace std;

vector<string> times = {
        "Avai",
        "Barra",
        "Brusque",
        "Chapecoense",
        "Concordia",
        "Criciuma",
        "Figueirense",
        "Hercilio Luz",
        "Inter de Lages",
        "Joinville",
        "Marcilio Dias",
        "Nacao"
    };

bool idTime(string time, int i = 0){

    if(time == times[i]){
        return true;
    }if(i==(times.size()-1)){
        return false;
    }else{
        return idTime(time,++i);
    }

    
}

int main(){
    
    string time1,time2;
    cout << "Qual seu primeiro time e segundo time:" << endl<< endl;
    for(int i = 0;i < times.size();i++){
        cout << times[i] << endl;
    }
    cin >> time1 >> time2;


    if(idTime(time1)){
        cout << "time 1 valido" << endl;
    }else{
        cout << "time 1 invalido" << endl;
    }
    if(idTime(time2)){
        cout << "time 2 valido" << endl;
    }else{
        cout << "time 2 invalido" << endl;
    }

}