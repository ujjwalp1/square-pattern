// square pattern
#include <iostream>
using namespace std;
int main() 
{
   int i,n;
   cin>>n;
   i=0;
   while(i<n){
       //cout<<"*";
       int j=0;
       while(j<n){
            cout<<"*";
            j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
    return 0;
}