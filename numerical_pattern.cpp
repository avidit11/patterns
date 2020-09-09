/*         1
         23
       345
     4567
   56789 */
   #include<bits/stdc++.h>
   using namespace std;
   int main(){
       int n;
       cout<<"enter the value of n"<<endl;
       cin>>n;
       int a=(2*n)-1;
       for(int i=1;i<=n;i++){
        int b=(2*i)-1;
        for(int j=1;j<=(a-b);j++){
            cout<<" ";
        }
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
       }
       return 0;
   }
