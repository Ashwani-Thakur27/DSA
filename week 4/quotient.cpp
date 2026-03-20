#include<iostream>
using namespace std;

int quotientreturn(int divisor , int dividend){
    int s = -dividend;
    int e = dividend;
    //int mid = s + (e-s)/2;
    int mid = s + ((e-s)>>1);  //one right shift ka  matalb 2 se divide kar dena 
    int quotient;
    while ( s <= e ){
        if(divisor*mid==dividend) {
            return mid;
        }

        
        if(divisor*mid<dividend) {
            //here we use the formula { dividend = divisior * quotient + reminder }
            //here we write it like as that dividend >= divisior * quotient 
            //in this is the we act it like the true case 
            //therefor here we use store and compute aplication 
            quotient = mid;//this is the store function 
            s = mid + 1;//this is the compute function
        }
        else {
            //if divisor*mid > dividend then what we have to do 
            e = mid - 1;
        }
       // mid = s + ( e - s )/2;
         mid = s + ((e-s)>>1);

    }
    return quotient;
}


int main(){
    int divisor;
    int dividend;
    cout<<"enter the divisor:";
    cin>>divisor;
    cout<<"enter the dividend:";
    cin>>dividend;
    int ans = quotientreturn(abs(divisor),abs(dividend));
    if(dividend<0&&divisor>0||dividend>0&&divisor<0){
        ans = 0 - ans;
    }
    cout<<"the quotient : "<<ans<<endl;

}