#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int n;
    cout << "Insira a ordem da matriz identidade: ";
    cin >> n;
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
    cout << "Resultado:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
