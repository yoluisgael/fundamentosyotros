#include <iostream>
using namespace std;

int main(){
    int n, stonks[100000], best_stonk=1, current_stonk=0, a=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> stonks[i];
    }
    for(int i=0; i<n-1; i++){
        if(stonks[i+1]-stonks[i]<0) {
            a=1;
        }
        else{
            a++;
        }
        if(a>best_stonk){
            best_stonk=a;
        }
    }
    cout << best_stonk << endl;
}