#include <iostream>
using namespace std;

int main() {
    
    int A[3] = {9, 3, 4};
    int B[3] = {5, 6, 8};
    int produto = 0;
    
    for (int i =0; i < 3; i++) {
      produto += A[i] * B [i];
    }
    cout << "produto escalar: " << produto << endl;
    
    return 0;
}
