#include"bits/stdc++.h"
using namespace std;
//reverse an array using recursion
void swap(int &i,int &j){
    int temp=i;
    i=j;
    j=temp;
    return;
}
void reverseArray(int a[],int n,int i){
    if(i>=n/2){
        return;
    }
    swap(a[i],a[n-(i+1)]);
    return reverseArray(a,n,i+1);
}
//check palindrome of a string
bool PalindromeCheck(string s,int i){
    int n=s.size();
    if(i>=n/2) return true;
    if(s[i]!=s[n-(i+1)]){
        return false;
    }
    return PalindromeCheck(s,i+1);
}
//fibonacci 
int fibo(int n){ 
    if(n<=1){
     return n;
    }
    return fibo(n-1)+fibo(n-2);
}
//print Subsequence
void printSubsequence(int ind,vector<int> &v,int arr[],int n){
    if(ind>=n){
        if(v.size()==0){
            cout<<"{}"<<endl; 
        }
        for (auto it : v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //normal order
    v.push_back(arr[ind]);
    printSubsequence(ind+1,v,arr,n);
    v.pop_back();
    printSubsequence(ind+1,v,arr,n);

    //reverse order
    // printSubsequence(ind+1,v,arr,n);
    // v.push_back(arr[ind]);
    // printSubsequence(ind+1,v,arr,n);
    // v.pop_back();

}
//subsequence with a sum equal k
void SubsequenceSumEqualK(int ind,vector<int> &v,int sum,int arr[],int n,int k){ 
    if(ind>=n){ 
        if(sum==k){ 
            for (auto it : v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    sum+=arr[ind];
    v.push_back(arr[ind]);
    SubsequenceSumEqualK(ind+1,v,sum,arr,n,k);
    sum-=arr[ind];
    v.pop_back();
    SubsequenceSumEqualK(ind+1,v,sum,arr,n,k);
}


//print only one answer-TECHNIQUE
//base case-> if condition satisfied return true else return false
//rest function->if(F()-==TRUE) return true; else return false

//Print one subsequence only of the above question
bool OneSubsequenceSumEqualK(int ind,vector<int> &v,int sum,int arr[],int n,int k){ 
    if(ind>=n){ 
        if(sum==k){
            for (auto it : v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    sum+=arr[ind];
    v.push_back(arr[ind]);
    if(OneSubsequenceSumEqualK(ind+1,v,sum,arr,n,k)==true){ 
        return true;
    }
    sum-=arr[ind];
    v.pop_back();
    if(OneSubsequenceSumEqualK(ind+1,v,sum,arr,n,k)==true){ 
        return true;
    }
    return false;
}
//count the subsequences that sum equal to k!
int CountSubsequenceSumEqualK(int ind,vector<int> &v,int sum,int arr[],int n,int k){ 
    if(ind>=n){ 
        if(sum==k){ 
            return 1;
        }
        return 0;
    }
    sum+=arr[ind];
    int l=CountSubsequenceSumEqualK(ind+1,v,sum,arr,n,k);
    sum-=arr[ind];
    int r=CountSubsequenceSumEqualK(ind+1,v,sum,arr,n,k);
    return l+r;
}
//Quick sort recursion
int SortQ(int arr[],int low,int high){ 
    int pivot=low;
    int i=low,j=high;
    while (i<j)
    {
        while (arr[i]<=arr[pivot] && i<=high-1)
        {
           i++;
        }
        
        while (arr[j]>arr[pivot] && j>=low+1)
        {
           j--;
        }
        if(i<j){
            swap(arr[i],arr[j]); 
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort(int arr[],int low,int high){ 
    if(low<high){ 
        int pIndex=SortQ(arr,low,high);
        QuickSort(arr,low,pIndex-1);
        QuickSort(arr,pIndex+1,high);
    }
}
//combination of numbers in an array giving a sum-any element can be used any number of times
void ComSum(int ind,vector<int>& v,vector<vector<int>>& ans,vector<int>& candidates, int target){
    if(ind==candidates.size()){
    if(target==0){ 
        ans.push_back(v);
    }
    return;
}
    if(candidates[ind]<=target){ 
    v.push_back(candidates[ind]);
    ComSum(ind,v,ans,candidates,target-candidates[ind]);
    v.pop_back();
    }
    ComSum(ind+1,v,ans,candidates,target);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> v;
    vector<vector<int>> ans;
    ComSum(0,v,ans,candidates,target);
    return ans;
}
//COmbination Sum part 2
void ComSum2(int ind,int target,vector<int>&v,vector<vector<int>>& ans,vector<int>& arr){ 
    if(target==0){
        ans.push_back(v);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if(i>ind && arr[i]==arr[i-1]){ 
            continue;
        }
        if(arr[i]>target)break;
        v.push_back(arr[i]);
        ComSum2(i+1,target-arr[i],v,ans,arr);
        v.pop_back();
    }
    
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        vector<vector<int>> ans;
        ComSum2(0,target,v,ans,candidates);
        return ans;
}
//Find all valid combinations of k numbers that sum up to n -[1,2,3,4,5,6,7,8,9]
void ComSum3(int size,int ind,int sum,int k,int n,vector<int>& arr,vector<int>& v,vector<vector<int>>& ds){ 
    if(ind>arr.size()) return;
        if(size==k){
            for (auto it : v)
            {
                sum+=it;
            }
            if(sum==n){
                ds.push_back(v);
                return;
            }
            else{
                sum=0;
            }
        }
    v.push_back(arr[ind]);
    ComSum3(size+1,ind+1,sum,k,n,arr,v,ds);
    v.pop_back();
    ComSum3(size,ind+1,sum,k,n,arr,v,ds);
    return;
}
vector<vector<int>> combinationSum3(int k, int n) {
      vector<int> arr={1,2,3,4,5,6,7,8,9};
      vector<int> v;
      vector<vector<int>> ans;
      ComSum3(0,0,0,k,n,arr,v,ans);
      return ans;
}
//Given a list arr of N integers, print sums of all subsets in it.
void SubSum(int ind,vector<int>& v,int sum,vector<int>& ds,vector<int> arr,int n){
    if(ind>=n){
        for (auto it : v)
        {
            sum+=it;
        }
        ds.push_back(sum);
        return;
    }
    v.push_back(arr[ind]);
    SubSum(ind+1,v,sum,ds,arr,n);
    v.pop_back();
    SubSum(ind+1,v,sum,ds,arr,n);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ans;
    vector<int> v;
    int sum=0;
    SubSum(0,v,sum,ans,arr,N);
    return ans;
}
//All subsets from a set of duplicates- The solution set must not contain duplicate subsets.
void UniqueSubsets(int ind,vector<int>& nums,vector<int>& v,vector<vector<int>>& ds){ 
    ds.push_back(v);
    for (int i = ind; i < nums.size(); i++)
    {
        if(i!=ind && nums[i]==nums[i-1])continue;
        v.push_back(nums[i]);
        UniqueSubsets(i+1,nums,v,ds);
        v.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        UniqueSubsets(0,nums,v,ans);
        return ans;
}
//Generate all binary strings
void BinStrings(int ind,vector<int>& v,int num){
    if(ind==num){
        for (auto it : v)
        {
            cout<<it;
        }
        cout<<" ";
        return;
    }
    v.push_back(0);
    BinStrings(ind+1,v,num);
    v.pop_back();
    if(v.back()!=1){ 
        v.push_back(1);
        BinStrings(ind+1,v,num);
        v.pop_back();
    }
    return;
}
void generateBinaryStrings(int num){
    vector<int> v;
    BinStrings(0,v,num);
}
//Generate all form of well-paired"()" paranthesis
void ParanGen(int n,string s,vector<string>& v,int open,int close){
    if(open==n && close==n){
        v.push_back(s);
        return;
    }
    if(open<n){
        ParanGen(n,s+'(',v,open+1,close);
    }
    if(open>close){
        ParanGen(n,s+')',v,open,close+1);
    }
    return;
}
vector<string> generateParenthesis(int n) {
            vector<string> v;
            ParanGen(n,"",v,0,0);
            return v;
}
//Geall possible letter combinations that the number could represent
void NumComGen(int ind, string &ds, vector<string> &ans, string mapping[], string digits){
    if(ind==digits.size()){
        ans.emplace_back(ds);
        return;
    }
    string value = mapping[digits[ind]-'0'];
    for(int i=0; i<value.size(); i++){
        ds+=value[i];
        NumComGen(ind+1, ds, ans, mapping, digits);
        ds.pop_back();
    }

}
vector<string> letterCombinations(string digits) {
     string ds;
    vector<string> ans;
    if(digits.size()==0)
        return ans;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    NumComGen(0, ds, ans, mapping, digits);
    return ans;
}
//Palindrome Partitioning
vector<vector<string>> partition(string s) {
        vector<vector<string>>  res;
        vector<string> path;
        palindromPartitioning(0,s,path,res);
        return res;
}
bool isPalindrome(string s,int start,int end){
    while (start<=end)
    {
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}
void palindromPartitioning(int index,string s,vector<string>& path,vector<vector<string>> res){
    if(index==s.size()){ 
        res.push_back(path);
    }
    for (int i = index; i < s.size(); i++)
    {
        if(isPalindrome(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            palindromPartitioning(i+1,s,path,res);
            path.pop_back();
        }
    }
}
long long int fe(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    long long int y=fe(x,n/2);
    if(n&1) return(x*y*y);
    return (y*y);
}
int main(){
    // int a[]={1,2,3,4,5};
    // reverseArray(a,5,0);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<PalindromeCheck("naman",0)<<endl;
    // cout<<PalindromeCheck("mohan",0)<<endl;
    // cout<<fibo(3)<<endl;
    // vector<int> v;
    // OneSubsequenceSumEqualK(0,v,0,arr,6,7);
    // printSubsequence(0,v,arr,6);
    // SubsequenceSumEqualK(0,v,0,arr,6,7);
    // cout<<CountSubsequenceSumEqualK(0,v,0,arr,6,7)<<endl;
    // int arr[]={4,6,2,5,7,9,1,3,8};
    // QuickSort(arr,0,8);
    // for (int i = 0; i < 9; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // vector<string> v=letterCombinations("23");
    // for (auto it : v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    cout<<fe(2,4)<<endl;
return 0;
}