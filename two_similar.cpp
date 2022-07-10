#include <iostream>

bool twoSimilar(int* A, int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(A[i] == A[j]){
                return 1;
            }
        }
    }
    return 0;
}
int main(void){
    int n;

    std::cout << "Enter array length ";
    std::cin >> n;

    int A[n];

    std::cout << "Enter array ";

    for (int i = 0; i < n; i++){
        std::cin >> A[i];
    }

    bool result = twoSimilar(A, n);
    if (result == 1){
        std::cout << "True" << "\n";
    }
    else std::cout << "False" << "\n";
    return 0;
}