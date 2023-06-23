
#include <iostrean>

void insertionSort(int num[], int a) {

    for (int i = 1; i < a; i++) {
        int aux = num[i];
        int j = i - 1;


        while (j >= 0 && num[j] > aux) {
            num[j + 1] = num[j];
            j--;
        }
        
        num[j + 1] = aux;
    }
}

int main (){

   int num[] = {5, 2, 4, 6, 1, 3};
   int a ;
 
    insertionsort(num, a)
   for (int i = 0; i < a; i++) {

        cout << num[i] << " ";
    }
    cout << endl;

    return 0;

}