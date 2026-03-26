#include<iostream>
using namespace std;

int squareroot(int n){
    int s = 0;
    int e = n;
    int ans = 0;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if ((long long)mid * mid <= n){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
double precisionsquareroot(int n){
    double sqreroot = squareroot(n);
    int precision = 13;
    double step = 0.1;
    while(precision--){
        double j  = sqreroot;
        while (j * j <= n)
        {
        //store and compute
        sqreroot = j;
        j += step;
        }
        ///after this while loop we got one precision 
        //then we update step 
        step /= 10;
    }
    return sqreroot;
}

double Bcsquareroot(int n){
    double s = 0;
    double e = n;
  double  ans = 0;
    while((e - s)>0.000000000000001){
        double mid = s + (e - s) / 2;
        double sqre = mid * mid;
        if (sqre <= n){
            ans = mid;
            s = mid;
        }
        else {
            e = mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<endl;
    double ans1 = precisionsquareroot(n);
     double ans2 = Bcsquareroot(n);
   // cout <<"the square root of the n is :"<<ans<<endl;
   printf("precision sqrt methode1  %.13f\n",ans1);
  
   printf("precision sqrt methode2  %.13f\n",ans2);

    return 0;



}

