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
    for(int i = 0; i<n; ++i){
        for(int j = 0; j <n-i-1; ++j){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
 
//decreasing order 
//increasing order 
void bubblesort2(vector<int> &v){
    int n = v.size();
    for(int i = 0; i<n; ++i){
        for(int j = 0; j <n-i-1; ++j){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
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