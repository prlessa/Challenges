#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int f = 1, aux = 0, soma, num;

    cout << " Informe um n�mero: ";
    cin >> num;

    while(f != num){
        soma = f + aux;
        aux = f;
        f = soma;
        if(f > num){
            cout << " " << num << " N�o pertence a sequ�ncia de Fibonacci";
            return 0;
        }
    }   cout << num << " Percente a sequ�ncia de Fibonacci";
}
