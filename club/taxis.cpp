#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long n, g1=0, g2=0, g3=0, g4=0, a;
    int taxis;
    cin >> n;
    int grupos[100000];
    for(int i=0; i<n; i++){
        cin >> grupos[i];
    }
    for(int i=0; i<n; i++){
        switch(grupos[i]){
        case 1:
            g1++;
            break;
        case 2:
            g2++;
            break;
        case 3:
            g3++;
            break;
        case 4:
            g4++;
            break;
        }
    }
    taxis=g4;
    if(g3>0&&g1>0){
        a=min(g3,g1);
        taxis+=a;
        g1-=a;
        g3-=a;
    }
    if(g2>0){
        taxis+=g2/2;
        g2%=2;
    }
    if(g2>0&&g1>1){
        a=min(g2,(g1/2));
        taxis+=a;
        g2-=a;
        g1-=a*2;
    }
    if(g2>0&&g1>0){
        a=min(g2,g1);
        taxis+=a;
        g2-=a;
        g1-=a;
    }
    if(g1>3){
        taxis+=g1/4;
        g1%=4;
    }
    if(g1>0){
        taxis+=1;
        g1=0;
    }
    taxis+=g3+g2+g1;
    cout << taxis << endl;
    return 0;
}