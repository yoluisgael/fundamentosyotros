#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


int main(){
    vector<int> special_num;
    long start, end, i, a;
    string b;
    cin >> start >> end;
    for( i=start; i<end; i++){
        b=to_string(i);
        a=b.size()-1;
        if(b[0]==b[a]){
            special_num.push_back(i);
        }
    }
    for ( i = 0; i<special_num.size(); i++){
        cout << special_num[i] << endl;
    } 
    return 0;
}