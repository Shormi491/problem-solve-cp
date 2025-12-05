Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.

Examples
Inputcopy	Outputcopy
13 12
5
Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)

Solve:
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N,M;
    cin>>N>>M;
    long long A= N%10;
    long long B = M%10;
    cout<<A+B<<endl;
    return 0;



}
