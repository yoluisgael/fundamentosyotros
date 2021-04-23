#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k,ml,l,r,g,x,y,mt,gt,rt,shots, total;
    cin >> n >> k >> ml >> l >> r >> g >> x >> y;
    mt=(k*ml)/x;
    gt=g/y;
    rt=l*r;
    shots=min(mt, min(gt,rt));
    total=10/3;
    cout << shots << endl;
    return 0;
}