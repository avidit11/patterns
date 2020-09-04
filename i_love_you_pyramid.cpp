#include<iostream>
using namespace std;
int main(){
    string a="Iloveyou";

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)/2;j++){
            cout<<a[j];
        }
        for(int j=(2*i)/2;j>=0;j--){
            cout<<a[j];
        }
        cout<<endl;
    }
  return 0;
}

