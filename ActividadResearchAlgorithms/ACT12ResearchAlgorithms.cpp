using namespace std;
#include <iostream>
#include <vector> 
#include <algorithm>
// A01635547 RODRIGO ALEJANDRO CHAVEZ AVALOS
// 15/08/22
void bubbleSort(vector <int>& arrayBS){
    for (int j=0;j<arrayBS.size()-1;j++){
        for (int i=0;i<arrayBS.size()-1-j;i++){
            if (arrayBS[i] > arrayBS[i+1]){
                swap(arrayBS[i],arrayBS[i+1]);
            }
        }
    }
}


int main(){
    int numeroBusquedas;
    cout << "Enter the number of searches you want " << endl;
    cin >> numeroBusquedas;
    for (int i=1;i<=numeroBusquedas;i++){
    
    
    vector<int> g1;
    g1.push_back(4);
    g1.push_back(2);
    g1.push_back(9);
    g1.push_back(7);
    g1.push_back(5);
    g1.push_back(8);
    g1.push_back(1);
    g1.push_back(3);
    g1.push_back(5);
    g1.push_back(6);
    bubbleSort(g1);
    return 0;
}