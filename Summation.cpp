#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long A[N];
    for(int i=0;i<N;i++){
 
        cin>>A[i];
 
    }
    long long sum = 0;
    for(int i=0;i<N;i++){
        sum+=A[i];
    }
    cout<< abs(sum) <<endl;
 
 
return 0;
}
input:
3
-1 2 -3
output:
2

