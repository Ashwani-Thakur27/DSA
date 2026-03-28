#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i = 0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


//increasing order 
void bubblesort(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n -1; ++i){
        int minindex = i;  //ith element hi smallest
        for(int j = i +1; j <n; ++j){
            if(v[j]<v[minindex]){
                minindex = j;
            }
        }
        swap(v[i],v[minindex]);
    }
}
 
//decreasing order 
//increasing order 
void bubblesort2(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n -1; ++i){
        int minindex = i;  //ith element hi smallest
        for(int j = i + 1; j <n; ++j){
            if(v[j]<v[minindex]){
                minindex = j;
            }
        }
        swap(v[i],v[minindex]);
    }
}

int main(){
    vector<int> v = {5,2,3,0,-1};
    print(v);
    bubblesort(v);
    print(v);
     bubblesort2(v);
    print(v);
    return 0;

}