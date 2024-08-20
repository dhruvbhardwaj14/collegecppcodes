//  #include<iostream>
//  #include<cmath>
//  #include"bits/stdc++.h"
//  using namespace std;
//  #define ll long long int
 
 
//  ll sumOfDivisors(ll N)
//  {
//  ll sum=0;
//  for (ll i = 1; i <=N; i++)
//  {
//  sum+=i*(N/i);
//  }
//  return sum;
//  }
//  bool isPalindrome(string S)
//  {
//  ll s=0;
//  ll e=S.length()-1;
//  bool flag=false;
//  while(s<e){
//  if(S[s]==S[e]){
//  flag=true;
//  s++;
//  e--;
//  }
//  else{
//  flag=false;
//  break;
//  }
//  }
//  return flag;
//  }    
//  ll fib(ll n) {
//  if(n==0 || n==1){
//  return n;
//  }
//  return fib(n-2)+fib(n-1);
//  }
//  ll gcd(ll A,ll B){
//  ll  temp;
//  ll  mx=max(A,B);
//  ll  mn=min(A,B);
//  while(mn!=0){
//  temp=mx%mn;
//  mx=mn;
//  mn=temp;
//  }
//  return mx;
//  }
//  ll lcm(ll a,ll b){
//  return (a*b)/gcd(a,b);
//  }
//  void merge(int arr[],int l,int mid,int r){
//  int i=l;
//  int j=mid+1;
//  int f=l;
//  int temp[100000];
//  while (i<=mid && j<=r)
//  {
//  if(arr[i]<arr[j]){
//  temp[f]=arr[i];
//  i++;
//  }
//  else{
//  temp[f]=arr[j];
//  j++;
//  }
//  f++;
//  }   
//  if (i>mid)
//  {
//  while (j<=r)
//  {
//  temp[f]=arr[j];
//  j++;
//  f++;
//  }
//  }
//  else{
//  while (i<=mid)
//  {
//  temp[f]=arr[i];
//  i++;
//  f++;
//  }
//  }
//  for (int k = l; k <=r; k++)
//  {
//  arr[k]=temp[k];
//  }
//  }
//  void mergeSort(int arr[],int l,int r){
//  if (l<r)
//  {
//  int mid=(l+r)/2;
//  mergeSort(arr,l,mid);
//  mergeSort(arr,mid+1,r);
//  merge(arr,l,mid,r);
//  }
//  }
//  //quick sort
//  void swap(int arr[],int i,int j){
//  int temp=arr[i];
//  arr[i]=arr[j];
//  arr[j]=temp;
//  }
//  int partition(int arr[],int l,int r){
//  int pivot=arr[r];
//  int i=l-1;
//  for (int j = l; j < r; j++)
//  {
//  if (arr[j]<pivot)
//  {
//  i++;
//  swap(arr,i,j);
//  }
//  }
//  swap(arr,i+1,r);
//  return i+1;
//  }
//  void quickSort(int arr[],int l,int r){
//  if (l<r)
//  {
//  int pivot=partition(arr,l,r);
//  quickSort(arr,l,pivot-1);
//  quickSort(arr,pivot+1,r);
//  }
//  }
//  int removeDuplicates(vector<int>& nums) {
//  int temp=nums[0];
//  int ans=1;
//  int t=0;
//  for (int i = 0; i < nums.size(); i++)
//  {
//  if (nums[i]!=temp)
//  {
//  temp=nums[i];
//  ans++;
//  t++;
//  nums[t]=temp;
//  }
//  else{
//  nums[t]=temp;
//  }
//  }
//  return ans;
//  }
//  void rightRotate(vector<ll>& nums, ll k) {
//  reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
//  reverse(nums.begin(),nums.begin()+(nums.size()-(k%nums.size())));
//  reverse(nums.begin(),nums.end());
//  }
//  void leftRotate(vector<ll>& nums, ll k){ 
//  reverse(nums.begin(),nums.begin()+(k%nums.size()));
//  reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
//  reverse(nums.begin(),nums.end());
//  }
// ll maxSumOfSubArray(vector<ll>& nums) {
// ll sum=0,maxi=nums[0];
// for (ll i = 0; i < nums.size(); i++)
// {
// sum+=nums[i];
// maxi=max(maxi,sum);
// if (sum<0)
// {
// sum=0;
// }
// }
// return maxi;
// }
// vector<ll> maxSumSubArray(vector<ll>& nums) {
// ll sum=0,maxi=nums[0];
// ll st=0,end=0;
// vector<ll> temp;
// for (ll i = 0; i < nums.size(); i++)
// {
// if (sum==0)
// {
// st=i;
// }
// sum+=nums[i];
// if (maxi<sum)
// {
// end=i;
// maxi=sum;
// }
// if (sum<0)
// {
// sum=0;
// }
// }
// for (ll k = st; k <=end; k++)
// {
// temp.push_back(nums[k]);
// }
// return temp;
// }
// long long pairWithMaxSum(long long arr[], long long N)
// {
// long long sum=arr[0],maxi=arr[0];
// for (long long  i = 1; i < N; i++)
// {
// sum+=arr[i];
// maxi=max(sum,maxi);
// sum-=arr[i-1];
// }
// return maxi;
// }
//  int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     ll n;
//     cin>>n;
//     ll a[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     // map<ll,ll> mp;
//     // ll eindx=0;
//     // ll eindxSum=0;
//     // ll sum=0;
//     // // ll eindx=0;
//     // for (ll i = 0; i < n; i++)
//     // {
//     //     sum+=a[i];
//     //     mp[sum]=i;
//     // }
//     // // for (auto it : mp)
//     // // {
//     // //         cout<<it.first<<" "<<it.second<<endl;
//     // // }
//     // sum=0;
//     // for (ll i = n-1; i >=0; i--)
//     // {
//     //     sum+=a[i];
//     //     if (mp[sum]!=0 && i>mp[sum])
//     //     {
//     //         eindx=i;
//     //         eindxSum=sum;
//     //     }
//     // }
//     // // cout<<mp[eindxSum]+eindx<<endl;
    
//     // if (mp[eindxSum]+eindx!=n-1)
//     // {
//     //     ll st=0,e=n-1;
//     //     ll count=0;
//     //     ll stSum=a[st];
//     //     ll eSum=a[e];
//     //     ll prevSt=0,prevE=0;
//     //     while (st<e)
//     //     {
//     //         // cout<<"stSum: "<<stSum<<" eSum: "<<eSum<<endl;
//     //         if (stSum<eSum)
//     //         {
//     //             st++;
//     //             stSum+=a[st];
//     //         }
//     //         else if(eSum==stSum){
//     //             // cout<<st<<"-"<<e<<endl;
//     //             // cout<<(st+1)-prevSt<<"-"<<(n-e)-prevE<<endl;
//     //             count=max((st+1)-prevSt,(n-e)-prevE);
//     //             prevE=(n-e);
//     //             prevSt=st+1;
//     //             if (prevSt>prevE)
//     //             {
//     //                 st++;
//     //                 stSum=a[st];
//     //             }
//     //             else{
//     //                 e--;
//     //                 eSum=a[e];
//     //             }
//     //         }
//     //         else{
//     //             e--;
//     //             eSum+=a[e];
//     //         }
//     //     }
//     //     if (count==0)
//     //     {
//     //         cout<<n<<endl;
//     //     }
//     //     else
//     //     cout<<count<<endl;
//     // }
//     // else{
//     //     cout<<min(mp[eindxSum]+1,n-eindx)<<endl;
//     // }
    
    
    
    
//  }
//  return 0;
//  }

 //soln
#include "bits/stdc++.h"
using namespace std;
long long a[4000];
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    int ans = n;
    for (int i = 1; i <= n; ++i) {
        long long sum = 0;
        for (int j = 1; j <= i; ++j) {
            sum += a[j];
        }
        long long res = 0;
        int tmp = 0;
        int ttmp = 0;
        for (int j = 1; j <= n; ++j) {
            res += a[j];
            ++tmp;
            if (res == sum) {
                ttmp = max(ttmp, tmp);
                res = 0;
                tmp = 0;
            }
        }
        if (res == 0) {
            ans = min(ans, ttmp);
        }
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}