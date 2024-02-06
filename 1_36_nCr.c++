#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=fact(n);
    int den=fact(n-r)*fact(r);
    int ans=num/den;
return ans;
}
int main(){
    int n,r;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter r"<<endl;
    cin>>r;
    int res=nCr(n,r);
    cout<<n<<"C"<<r <<" is : "<<res;
   


return 0;
}