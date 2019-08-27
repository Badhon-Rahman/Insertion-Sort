#include <iostream>

using namespace std;

int main()
{
    int sortingArray[100], ArraySize, value, hole;

    cout << "Enter the size of array:";
    cin >> ArraySize;
    cout << "Enter " << ArraySize << " array element:";

    for(int i = 0; i < ArraySize; i++){
        cin >>  sortingArray[i];
    }

    for(int i = 1; i < ArraySize; i++){
        value = sortingArray[i];
        hole = i;
        while(hole > 0 && sortingArray[hole-1] > value){
            sortingArray[hole] = sortingArray[hole-1];
            hole -=1;
        }
        sortingArray[hole] = value;
    }

    cout << "After sorting the array in assending order:" ;
    for(int i = 0; i < ArraySize; i++){
        cout << sortingArray[i] << " ";
    }
    return 0;
}
