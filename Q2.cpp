#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void imprimir_vetor(int vetor[], int n){
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 10;
    int vetor[n] = { 9, 10, 8, 6, 1, 5, 7, 2, 3, 4 };
    imprimir_vetor(vetor, n);
    for(int x = 0; x < n; x++){
        for(int i = 0; i < n-1; i++){
            if(vetor[i]>vetor[i+1]){
                swap(&vetor[i], &vetor[i+1]);
            }
        }
    }
    imprimir_vetor(vetor, n);
    return 0;
}
