#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& nums1,int m,vector<int>& nums2,int n){
    int i=0;
        int j=0;
        int k=0;
        vector<int> merged(m+n);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) {
                merged[k++]=nums1[i++];
            }
            else merged[k++]=nums2[j++];
        }
        while(i<m) merged[k++]=nums1[i++];
        while(j<n) merged[k++]=nums2[j++];
       // nums1=merged;

         
    return merged;
}
int main(){
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    int m=3;
    int n=3;
    vector<int> merged=merge(nums1,m,nums2,n);
    for(auto x: merged){
        cout<<x<<" ";
    }
    return 0;
}
