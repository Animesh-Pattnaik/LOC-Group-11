#include <iostream>
#include <vector>
using namespace std;

void Negtoside(vector<int>& arr) {
    int j = 0; 
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i<n; i++) 
    {
        cin >> arr[i];
    }
    Negtoside(arr);
    cout << "Array after moving negatives to one side: ";
    for (int i = 0; i<n; i++) 
    {
        cout << arr[i] << " ";
    }
}
