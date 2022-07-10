#include <iostream>

int linearSearch(int* A, int n, int k){
    for (int i = 0; i < n; i++){
        if (k == A[i]){
            return i;
        }
    }
    return 0;
}

int main(void){
    int n = 0, k = 0;

    std::cout << "Enter number: ";
    std::cin >> k;
    std::cout << "Enter array length: ";
    std::cin >> n;

    int A[n];

    std::cout << "Enter array: ";
    for (int i = 0; i < n; i++){
        std::cin >> A[i];
    }

    int id = linearSearch(A, n, k);
    std::cout << "Id: " << id << "\n";
    return 0;
}