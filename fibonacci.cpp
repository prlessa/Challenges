#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int f = 1, aux = 0, soma, num;

    cout << " Informe um número: ";
    cin >> num;

    while(f != num){
        soma = f + aux;
        aux = f;
        f = soma;
        if(f > num){
            cout << " " << num << " Não pertence a sequência de Fibonacci";
            return 0;
        }
    }   cout << num << " Percente a sequência de Fibonacci";
}
