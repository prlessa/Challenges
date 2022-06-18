#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    for(int i = palavra.size(); i>=0; i--){
            cout << palavra[i];
    }
}
