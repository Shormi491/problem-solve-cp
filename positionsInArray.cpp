#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
     for(int i=0;i<N;i++){
        if(A[i]<=10){
            cout<<"A["<<i<<"] = "<< A[i]<<endl;
        }
    }
 
 
 
return 0;
}
input:
5
1 2 100 0 30
output:A[0] = 1
A[1] = 2
A[3] = 0

