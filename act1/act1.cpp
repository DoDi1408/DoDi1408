using namespace std;
#include <iostream>

int sumIterative(int n){
    int suma;
    if (n <= 0) return 0;
    // iterative for loop
    for (int i=1;i<=n;i++){
        suma += i;
    }
    return suma-1;
}
int directSum(int n){
    int suma;
    if (n <= 0) return 0;
    // direct mathematical formula for 1 to n
    suma = (n*(n+1))/2;
    return suma;
}
int recursiveSum(int n){
    int suma;
    // base step
    if (n <= 1) return 1;
    return n + recursiveSum(n-1);
}
int main(){
    cout << sumIterative(35) << endl;
    cout << directSum(35) << endl;
    cout << recursiveSum(35) << endl;
    return 0;
}