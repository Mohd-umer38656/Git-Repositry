#include<iostream>
using namespace std;
int binarySearch(int *arr,int size,int key){
    int si = 0;
    int ei = size -1;
    int mid = si + (ei - si)/2;
    while(si <= ei){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            si = mid + 1;
        }
        else{
            ei = mid -1;
        }
        mid = si +(ei - si)/2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the Elements : "<<endl;
    for(int i  = 0; i< size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Printing the Elements : "<<endl;
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    //calling the Binary Search Funciton

    int ans = binarySearch(arr,size,key);
    cout<<"This key is Present at Index is = "<<ans<<endl;
}