#include <iostream>
using namespace std;

int main() {
    
    int A[3] = {2, 3, 4};
    int B[3] = {5, 6, 7};
    int D[3];
    
    for (int i =0; i < 3; i++) {
        D[i] = A[i] - B[i];
        cout << D[i] << " ";
    }
    
    return 0;
}
