#include <iostream>

void selectionSort(int num[], int A) {
    for (int i = 0; i < A - 1; i++) {
        int valor = i;

        for (int j = i + 1; j < A; j++) {
            if (num[j] < num[valor]) {
                valor = j;
            }
        }

        int temp = num[i];
        num[i] = num[valor];
        num[valor] = temp;
    }
}

int main() {
    int num[] = {5, 2, 4, 6, 1, 3};
    int A 

    selectionSort(num, A);

    cout << "Array ordenado: " << endl;
    for (int i = 0; i < A; i++) {
        cout << num[i] << " ";
    }
    cout endl;

    return 0;
}