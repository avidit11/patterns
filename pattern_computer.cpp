/*
WAP to print the Following Pattern
C O M P U T E R
O M P U T E R
M P U T E R
P U T E R
T E R
E R
R
        */
 .#include <bits/stdc++.h>
using namespace std;
int main(){
 char c[10]="COMPUTER";
 for(int i=0;i<8;i++){
    for(int j=i;j<8;j++){
        cout<<c[j];
    }
    cout<<endl;
 }
            return 0;
}
