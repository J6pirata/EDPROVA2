#include <iostream>


void dividir(int num[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    int esqArr[n1], dirArr[n2];

    for (int i = 0; i < n1; i++)
        esqArr[i] = num[esq + i];
    for (int j = 0; j < n2; j++)
        dirArr[j] = num[meio + 1 + j];

   
    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (esqArr[i] <= dirArr[j]) {
            num[k] = esqArr[i];
            i++;
        } else {
            num[k] = dirArr[j];
            j++;
        }
        k++;
    }
 
}

void mergeSort(int num[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        
        mergeSort(num, esq, meio);

        
        mergeSort(num, meio + 1, dir);

        dividir(num, esq, meio, dir);
    }
}

int main() {
    int num[] = {5, 2, 4, 6, 1, 3};
    int A;

    mergeSort(num, 0, A - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < A; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}