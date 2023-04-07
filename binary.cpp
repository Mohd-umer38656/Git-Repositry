#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for(int i = 0;i < size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;
    cout<<"Enter the Size of the Array : "<<endl;
    for(int i = 0;i < size;i++){
        cin>>arr[i];
    }
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the key : ";
    cin >> key;
    //calling the search funciton
    int ans = linearSearch(arr,size,key);
    cout<<"This key is present at index : "<<ans<<endl;
}