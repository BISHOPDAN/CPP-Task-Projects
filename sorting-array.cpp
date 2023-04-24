#include <iostream>
using namespace std;

void sort(int array[], int size){
    int tmp;

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){

            if(array[j] > array[j + 1]){
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(){
    int array[] = {10, 1, 3, 6, 5, 8, 9, 7, 2, 4};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    for(int element : array){
        cout << element << '\n';
    }
    return 0;
}