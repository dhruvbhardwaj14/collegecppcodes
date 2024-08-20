 #include<iostream>
 #include<cmath>
 #include"bits/stdc++.h"
 using namespace std;
 #define ll long long int
 
 
 ll sumOfDivisors(ll N)
 {
 ll sum=0;
 for (ll i = 1; i <=N; i++)
 {
 sum+=i*(N/i);
 }
 return sum;
 }
 bool isPalindrome(string S)
 {
 ll s=0;
 ll e=S.length()-1;
 bool flag=false;
 while(s<e){
 if(S[s]==S[e]){
 flag=true;
 s++;
 e--;
 }
 else{
 flag=false;
 break;
 }
 }
 return flag;
 }    
 ll fib(ll n) {
 if(n==0 || n==1){
 return n;
 }
 return fib(n-2)+fib(n-1);
 }
 ll gcd(ll A,ll B){
 ll  temp;
 ll  mx=max(A,B);
 ll  mn=min(A,B);
 while(mn!=0){
 temp=mx%mn;
 mx=mn;
 mn=temp;
 }
 return mx;
 }
 ll lcm(ll a,ll b){
 return (a*b)/gcd(a,b);
 }
 void merge(int arr[],int l,int mid,int r){
 int i=l;
 int j=mid+1;
 int f=l;
 int temp[100000];
 while (i<=mid && j<=r)
 {
 if(arr[i]<arr[j]){
 temp[f]=arr[i];
 i++;
 }
 else{
 temp[f]=arr[j];
 j++;
 }
 f++;
 }   
 if (i>mid)
 {
 while (j<=r)
 {
 temp[f]=arr[j];
 j++;
 f++;
 }
 }
 else{
 while (i<=mid)
 {
 temp[f]=arr[i];
 i++;
 f++;
 }
 }
 for (int k = l; k <=r; k++)
 {
 arr[k]=temp[k];
 }
 }
 void mergeSort(int arr[],int l,int r){
 if (l<r)
 {
 int mid=(l+r)/2;
 mergeSort(arr,l,mid);
 mergeSort(arr,mid+1,r);
 merge(arr,l,mid,r);
 }
 }
 //quick sort
 void swap(int arr[],int i,int j){
 int temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 int partition(int arr[],int l,int r){
 int pivot=arr[r];
 int i=l-1;
 for (int j = l; j < r; j++)
 {
 if (arr[j]<pivot)
 {
 i++;
 swap(arr,i,j);
 }
 }
 swap(arr,i+1,r);
 return i+1;
 }
 void quickSort(int arr[],int l,int r){
 if (l<r)
 {
 int pivot=partition(arr,l,r);
 quickSort(arr,l,pivot-1);
 quickSort(arr,pivot+1,r);
 }
 }
 int removeDuplicates(vector<int>& nums) {
 int temp=nums[0];
 int ans=1;
 int t=0;
 for (int i = 0; i < nums.size(); i++)
 {
 if (nums[i]!=temp)
 {
 temp=nums[i];
 ans++;
 t++;
 nums[t]=temp;
 }
 else{
 nums[t]=temp;
 }
 }
 return ans;
 }
 void rightRotate(vector<ll>& nums, ll k) {
 reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
 reverse(nums.begin(),nums.begin()+(nums.size()-(k%nums.size())));
 reverse(nums.begin(),nums.end());
 }
 void leftRotate(vector<ll>& nums, ll k){ 
 reverse(nums.begin(),nums.begin()+(k%nums.size()));
 reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
 reverse(nums.begin(),nums.end());
 }
ll maxSumOfSubArray(vector<ll>& nums) {
ll sum=0,maxi=nums[0];
for (ll i = 0; i < nums.size(); i++)
{
sum+=nums[i];
maxi=max(maxi,sum);
if (sum<0)
{
sum=0;
}
}
return maxi;
}
vector<ll> maxSumSubArray(vector<ll>& nums) {
ll sum=0,maxi=nums[0];
ll st=0,end=0;
vector<ll> temp;
for (ll i = 0; i < nums.size(); i++)
{
if (sum==0)
{
st=i;
}
sum+=nums[i];
if (maxi<sum)
{
end=i;
maxi=sum;
}
if (sum<0)
{
sum=0;
}
}
for (ll k = st; k <=end; k++)
{
temp.push_back(nums[k]);
}
return temp;
}
long long pairWithMaxSum(long long arr[], long long N)
{
long long sum=arr[0],maxi=arr[0];
for (long long  i = 1; i < N; i++)
{
sum+=arr[i];
maxi=max(sum,maxi);
sum-=arr[i-1];
}
return maxi;
}
bool comp(pair<int,int> p1,pair<int,int> p2){ 
    return p1.second<p2.second;
}
 int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(a[0]==a[n-1])
    cout<<"YES"<<endl;
    else{
        int temp=1;
        for(int i=0; i<n-1; i++)
        if(a[i]==a[0] && a[i+1]==a[n-1]){
            cout<<"YES"<<endl;
            temp=0;
            break;
        }
        if(temp)
        cout<<"NO"<<endl;
    }
   }
   return 0;
 }