#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
     for(int i=0;i<N;i++){
            cin>>A[i];
     }
 
    int min_value = A[0];
    int min_index = 0;
    for(int i=1;i<N;i++){
        if(A[i]<min_value){
        min_value = A[i];
        min_index = i;
    }
    }
 
            cout<<min_value << " " <<min_index +1<<endl;
 
 
 
 
 
return 0;
}

input: 
3
123
output:1 1
