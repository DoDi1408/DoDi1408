using namespace std;
#include <iostream>

int fibon(int i){
    cout << "Entering to compute f: " << i << endl;
    // base step
    if (i <= 2){
        return 1;
    }
    return fibon(i-1) + fibon(i-2);
}

int main(){
    cout << fibon(8);
    return 0;
}