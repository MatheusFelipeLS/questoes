#include <iostream>

using namespace std;

int main() {
    int r1, r2, r3, r4, r5;
    
    cin >> r1;
    cin >> r2;
    cin >> r3;
    cin >> r4;
    cin >> r5;
    
    if(r1) {
        if(r2) {
            if(r4) {
                if(r5) {
                    cout << "garça" << endl;
                }else {
                    cout << "gaivota" << endl;
                }
            }else {
                cout << "pinguim" << endl;
            }
        }else {
            cout << "pato" << endl;
        }
    }else {
        if(r2) {
            if(r4) {
                if(r5) {
                    cout << "coruja" << endl;  
                }else {
                    cout << "falcão" << endl;
                }
            }else {
                cout << "ema" << endl; 
            }
        }else {
            if(r3) {
                cout << "galinha" << endl;
            }else {
                if(r4) {
                    cout << "pardal" << endl;
                }else {
                    cout << "avestruz" << endl;
                }
            }
        }
    }
    
    
    return 0;
}