#include<bits/stdc++.h>
using namespace std;
int main(){
    string N;
    cin>>N;
    int length = N.length();

        if(length ==1){
            cout<< "1"<< endl;
        }
        else if(length==2){
            cout<< "2" <<endl;
        }
         else if(length==3){
            cout<< "3" <<endl;
        }

        else {
            cout<< "More than 3 digits"<<endl;
        }

   return 0;
}
