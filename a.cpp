#include <iostream>

using namespace std;

int main(){
    int numStones;
    cout << ("Number of stones: ");
    cin >> numStones;
    bool winnerP1=false;
    while(numStones%2==0){
        winnerP1 = !winnerP1;
        numStones /= 2;
    }
    cout <<(winnerP1 ? "Alice" : "Bob") << (" should win") << endl;

    return 0;
}