using namespace std;
#include <iostream>

int sumIterative(int n){
    int suma;
    if (n <= 0) return 0;
    for (int i=1;i<=n;i++){
        suma += i;
    }
    return suma-1;
}
int directSum(int n){
    int suma;
    if (n <= 0) return 0;
    suma = (n*(n+1))/2;
    return suma;
}
int main(){
    cout << sumIterative(35) << endl;
    cout << directSum(35) << endl;;
    return 0;
}