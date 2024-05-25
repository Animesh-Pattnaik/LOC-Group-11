//merge two arrays and reverse it

#include <iostream>
using namespace std;

int main() {
    int size1, size2;

    cout<<"Enter size of first and second array"<<endl;
    cin >> size1 >> size2;
    int mergedsize = size1 + size2;
    int arr1[size1], arr2[size2];
    int mergedArr[mergedsize];

    cout<<"Enter the elements of first array: ";
    for(int i = 0; i<size1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array: ";
    for(int i = 0; i<size2; i++) {
        cin >> arr2[i];
    }
    
    for(int i = 0; i<size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for(int i = 0; i<size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
    
    for(int i = 0; i<mergedsize/2; i++) {
        int temp = mergedArr[i];
        mergedArr[i] = mergedArr[mergedsize-1-i];
        mergedArr[mergedsize-1-i] = temp;
    }
    
    cout << "Resulting Array: ";
    for(int i = 0; i < mergedsize; i++) {
        cout << mergedArr[i] << " ";
    }
    return 0;
}
