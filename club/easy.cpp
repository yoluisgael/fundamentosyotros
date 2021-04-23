#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
    char palabra[20];

    cin >> palabra;
    putchar(toupper(palabra[0]));
    palabra[0]=toupper(palabra[0]);
    for(int i=1; i<strlen(palabra); i++){
        cout << palabra[i];
    }
}