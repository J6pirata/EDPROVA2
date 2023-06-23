#include <iostream>


void chut(int& a, int& b) {
    int aux= a;
    a = b;
    b = aux;
}


int separar(int num[], int atr, int frent) {
    int aux2 = num[frent]; 
    int i = atr - 1;       

    for  (int j = atr; j <= frent  - 1; j++) {
    
        if (num[j] <= aux2) {
            i++;
            chut(num[i], num[j]);
        }
    }

}


void quickSort(int num[], int atr, int frent) {
    if (atr < frent) {

        int aux3 = separar(num, atr, frent);

        quickSort(num, atr, aux3 - 1);
        quickSort(num, aux3 + 1, frent);
    }
}

int main() {
    int num[] = {5, 2, 4, 6, 1, 3};
    int aux4;

    quickSort(num, 0, aux4 - 1);


    for (int i = 0; i < aux4; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}