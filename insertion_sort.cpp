#include <iostream>

int* insertionSort(int* a, int n){
    int key = 0, i = 0;
        for (int j = 1; j < n; j++){
        key = a[j];
        i = j - 1;
            while (i >= 0 && a[i] > key){
                a[i+1] = a[i];
                i--;
            }
        a[i+1] = key;
    }
    return a;
}

int main(void){
    int n;

    std::cout << "Enter array length";
    std::cin >> n;

    int a[n];

    std::cout << "Enter array";

    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }

    int *sorted_array = insertionSort(a, n);
    for (int i = 0; i < n; i++){
        std::cout << sorted_array[i] << ' ';
    }
    return 0;
}