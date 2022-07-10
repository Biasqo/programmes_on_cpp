#include <iostream>

int* selectionSort(int* A, int* B, int n){
    int minim = A[0];
    int maxim = A[0];
    int pos = 0;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(A[i] < minim){
                minim = A[i];
                pos = i;
            }
            if(A[i] > maxim){
                maxim = A[i];
            }
        }
        A[pos] = maxim;
        B[j] = minim;
        minim = A[pos];
        maxim = B[j];
    }
    return B;
} 

int main(void){
    int n = 0;

    std::cout << "Enter array length: ";
    std::cin >> n;

    int A[n];
    int B[n];

    std::cout << "Enter array: ";
    for (int i = 0; i < n; i++){
        std::cin >> A[i];
    }

    int *sorted_array = selectionSort(A, B, n);
    for (int i = 0; i < n; i++){
        std::cout << sorted_array[i] << ' ';
    }
    return 0;
}