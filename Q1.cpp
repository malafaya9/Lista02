#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int n = 10;
    int vetor[n] = { 1, 2, 3, 4, 5,6, 7, 8, 9, 10 };
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n/2; i++){
        swap(&vetor[i], &vetor[n/2+i]);
    }
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    return 0;
}
