#include <iostream>
#include <array>

using namespace std;

int main(){
    
    // Deklarasi Array Multidimensi iostream 
    int A[5][5]={1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5 };
    // Deklarasi Array Multidimensi Array
    array<array<int, 5>, 5> B = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5 };

    // Mengeluarkan Array 2 Dimensi
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << A[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << B[i][j] << ", ";
        }
        cout << endl;
    }
    
    

    cin.get();
    return 0;
}