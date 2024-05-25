//Prgram to count the number of occurences of a number in an array using functions
#include <iostream>
using namespace std;
void frequency(int arr[], int size, int num){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i] == num){
            count++;
        }
    }
    cout << endl << "The number of occurences of the number is "<< count;
}

int main(){
    int size,num;
    cout<< "Enter sizee of array"<<endl;
    cin>>size;
    int arr[size];
    cout << "Enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
cout<<"Enter the number whose frequency you want to find"<<endl;
cin>>num;

frequency(arr,size,num);
}
