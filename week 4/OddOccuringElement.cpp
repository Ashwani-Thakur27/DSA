#include<iostream>
using namespace std;


int findingOddoccuringElement(int arr[],int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while(s<=e){
        // if the single no will occuring then 1
        if(s == e){
            return s;
        }
        //if duplicate does not exist 2
        if (mid - 1 >= 0 && arr[mid] != arr[mid -1] && mid + 1<size && arr[mid] != arr[mid + 1]){
            return mid;
        }
        //if the duplicate exist then we have to check the left and right part of the array3
        //if the duplicate exist in the left part of the array then we have to check the right part of the array 
        if (mid - 1 >= 0 && arr[mid] == arr[mid -1]){
            int pairstartingindex = mid - 1;
        //this time we have to check the starting index is odd or even 
            if (pairstartingindex % 2 == 0){
                //pair index is even and we standig in the left part of the array so we have to move inthe rigth side of the arrau 

                s = mid + 1;
            }
            else{
                //when index is odd 
                //if (staringindex % 2 != 0) or (staringindex %2 == 1)or (startingindex &1)
                e = mid - 1;
            }
        }
        // if dulicate exist in the right part of the array 
        else if ( mid + 1 < size && arr[mid] == arr[mid + 1]){
            int pairstartingindex = mid;
            if (pairstartingindex & 1){
                //stating index is odd 
                e = mid - 1;

            }
            else{
                s = mid + 1;
            }
        }
        mid = s + (e - s )/2;

    } 
    return -1;

}








int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    
    int arr[size];  // Declare array after reading size (or use vector for standard C++)
    
    for(int i = 0; i<size; i++){
        cout<<"element of the given arr is :";
        cin>>arr[i];  // Changed << to >>
        cout<<endl;     
    }
    
    cout << "\nArray is: " << endl;  // Added newline
    for(int i = 0; i<size; i++){
        cout<<arr[i] << " ";  // Added spacing between elements
    }
    cout <<endl;

    int ans = findingOddoccuringElement(arr, size);
    cout<<"the ans : "<<ans<<endl;
    cout<<"element is : "<<arr[ans]<<endl;
    
    return 0;
}