#include <iostream>
using namespace std;

int main(){
    long t, a, b, x, y, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b >> x >> y >> n;
        if(a<b){
            /*for(int i=0; i<n; i++){
                if(a>x){
                    a--;
                } else if(b>y){
                    b--;
                }
            }*/
            if(n<a-x){
                a-=n;
            } else {
                n-=a-x
                a=x;
            }
        }
        if(b<a) {
            for(int i=0; i<n; i++){
                if(b>y){
                    b--;
                } else if(a>x){
                    a--;
                }
            }
        }
        if(b=a){
            if(a-x>b-y){
                if(n<a-x){
                    a-=n;
                } else {
                    a-=(n-x);

                }
            } else{

            }
        }
        cout << a*b << endl;
    }
    return 0;
}