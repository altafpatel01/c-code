#include<iostream>
using namespace std;

BS(int arr[] ,int key, int low , int high){
    if(high>=low){
    int mid=(high+low)/2;
    if(key==arr[mid])
   return mid;
    else if(arr[mid]>key)
   return BS(arr,key,low,high-1);
    else
   return BS(arr, key ,low+1,high);
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};

    int key;
    cout<<"Enter the value whose index you want know"<<endl;
    cin>>key;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = BS(arr,key,0,n-1);
    if(result ==-1 )
    cout<<"element index not found";
    else
    cout<<"element is found at index "<<result;

}