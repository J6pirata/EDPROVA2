#include <iostream>

void shellSort(int num[], int* A) {
    
    int h = 1;
    while (h < A / 3) {
        h = 3 * h + 1;
    }

    // 
    while (h >= 1) {

        for (int i = h; i < A; i++) {
            int aux = num[i];
            int j = i - h;

            while (j >= 0 && num[j] > aux) {
                num[j + h] = num[j];
                j -= h;
            }

            num[j + h] = aux;
        }

        h /= 3;
    }
}

int main() {
    int num[] = {5, 2, 4, 6, 1, 3};
    int A;


    shellSort(num, A);

    cout << "Array ordenado: ";
    for (int i = 0; i < A; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}