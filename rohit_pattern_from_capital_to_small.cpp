#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="ROHIT";
    string b="rohit";
    for(int i=0;i<=a.size();i++){
        for(int j=i;j<a.size();j++){
            cout<<a[j];
        }
        for(int j=1;j<=i;j++){
            cout<<b[j-1];

        }
        cout<<endl;
    }
return 0;
}
