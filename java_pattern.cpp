/*
WAP to print the word “JAVA” in following pattern-
J
JA
JAV
JAVA          */
 #include <bits/stdc++.h>
using namespace std;
int main(){
 char c[10]="JAVA";
 for(int i=0;i<4;i++){
    for(int j=0;j<=i;j++){
        cout<<c[j];
    }
    cout<<endl;
 }
            return 0;
}

