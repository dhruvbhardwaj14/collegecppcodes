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
/*If the string 𝑠 consists entirely of 0 then obviously no other string can be obtained from it, so the answer is "Yes" only if 𝑠=𝑡 Otherwise, let 𝑖 the index of the first 1 in 𝑠 Note that if there is at least one 1 in 𝑡 at positions [1;𝑖) then the answer is "No", since 𝑠 has 0 at these positions, so some of them must be changed to 1 However, when applying the operation the first 1 from position 𝑖 can change bits only at positions greater than or equal to 𝑖 i.e. it will not be possible to change 0 at positions before 𝑖 
If there is only 0 at positions [1;𝑖) in 𝑡, then it is possible to change any bit on the segment [𝑖;𝑛] in 𝑠 to any other bit by choosing segments of length 𝑖 and acting from the end, i.e. the answer is "Yes".*/
 int main(){
 int t;
 cin>>t;
 while(t--){
 int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int ks = 0;
    for (char c : s) {
      if (c == '0') {
        ks += 1;
      } else {
        break;
      }
    }
    int kt = 0;
    for (char c : t) {
      if (c == '0') {
        kt += 1;
      } else {
        break;
      }
    }
    cout << (ks > kt ? "NO" : "YES") << '\n';
 }

 return 0;
 }