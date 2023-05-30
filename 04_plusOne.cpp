// INTITUTION
/* we have to add 1 to the last digit, if last digit is less than than we simply add one and return the digit
but problem arises when last digit is 9, in that case we have to make last digit '0' and add 1 to previous digit
edge case is when all digit is 9 then we have to make all digit as '0' and add last digit as '0' and update first digit with '1'


*/
#include<bits/stdc++.h> 
using namespace std;

vector<int> plusOne(vector<int>& digits){
    int n=digits.size();
    for(int i=n-1;i>=0;i--){
        if(digits[i]<9) {
            digits[i]=digits[i]+1;
            return digits;
        }
        digits[i]=0;
    }
    digits.push_back(0);
    digits[0]=1;
    return digits;
}

int main(){
     int n;
     cin>>n;
     vector<int> digits;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        digits.push_back(x);
     }

     digits=plusOne(digits);
     for(auto x: digits){
        cout<<" "<<x;
     }
     return 0;
}
//TIME COMPLEXITY WILL BE O(N) AND SPACE COMPLEXITY O(1)