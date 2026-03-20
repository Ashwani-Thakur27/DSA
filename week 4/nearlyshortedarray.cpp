#include<iostream>
using namespace std;
int findtargetBYBinarysearch(int arr[],int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(s <= e){
        cout<<"print the value of mid"<<mid<<endl;
        if (arr[mid]==target){
            return mid;
        }
        if (mid - 1>=s && arr[mid-1]==target){
            return mid - 1;
        }
        if(mid+1<=e && arr[mid+1]==target){
            return mid + 1;
        }
        if(arr[mid]>target){
            e = mid - 2;
        }
        else{
            s = mid + 2;
        }
      mid = s + (e-s)/2;
    }
    return -1;
    
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
    int size = 7;
    int target = 700;
    int ans = findtargetBYBinarysearch(arr,size,target);
    cout<<"the given index is :"<<ans<<endl;
    cout<<"ram ji ki kripa";
}