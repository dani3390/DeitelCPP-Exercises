#include <iostream>
#include <iomanip>

void BubbleSort(int array[], int size);
int BinarySearch(int array[], int size, int valore, int basso, int alto);

using namespace std;

int main()
{
    const int SIZE = 10;
    int valore, a;
    int array[SIZE] = {17, 6, 25, 75, 5, 901, 73, 94, 421, 1};
    BubbleSort(array, SIZE);

    cout << "Inserisci un valore: ";
    cin >> valore;

    for(int i = 0;i < SIZE;i++){
        cout << array[i] << " ";
    }

    cout << endl;

    a = BinarySearch(array, SIZE, valore, 0, SIZE - 1);

    cout << a << endl;



    return 0;
}

void BubbleSort(int array[], int size){
    int a;
    for(int i = 0;i < size;i++){
        for(int i = 0;i < size - 1;i++){
            if(array[i] > array[i + 1]){
                a = array[i];
                array[i] = array[i + 1];
                array[i + 1] = a;
            }
        }
    }

}


int BinarySearch(int array[], int size, int valore, int basso, int alto){
    int med;

    while(basso <= alto){
        med = (basso + alto) / 2;

        if(valore == array[med]){
            return med;
        }
        else if(valore < array[med]){
            alto = med - 1;
        }
        else{
            basso = med + 1;
        }

    }

    return -1;
}





