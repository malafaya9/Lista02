#include<iostream>
#include<limits>
using namespace std;

int main(){
    int n, maiorN, maiorI, maiorJ;
    maiorN = INT_MIN;
    cout << "Insira a ordem da matriz: ";
    cin >> n;
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Insira o valor do termo [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            if(matriz[i][j]>maiorN){
                maiorN = matriz[i][j];
                maiorI = i;
                maiorJ = j;
            }
        }
    }
    cout << "Resultado:" << endl;
    cout << "Maior valor:" << maiorN << endl;
    cout << "Coordenadas, i: " << maiorI << ", j: " << maiorJ << "." << endl;
    return 0;
}
