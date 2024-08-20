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
 int main(){
 int t;
 cin>>t;
 while(t--){
        int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++) cin >> a[i];
	    int b[n];
	    memset(b, 0, sizeof(b));
	    for(int i = 0; i < n/2; i++) b[i] = a[n - 1 - i] - a[i];
	    int bad = 0;
	    if(b[0] < 0) bad = 1;
	    for(int i = 1; i < n; i++)
	        if(b[i] > b[i - 1] || b[i] < 0) bad = 1;
	    if(bad) cout << "-1\n";
	    else cout << a[n - 1] - a[0] << "\n";
}

return 0;
}
// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//  ll n;
//  cin>>n;
//  vector<ll> a;
//  ll fsum=0;
//  ll lsum=0;
//  for (ll i = 0; i < n; i++)
//  {
//      int x;
//      cin>>x;
//      a.push_back(x);
//      if (i<n/2)
//      {
//          fsum+=x;
//      }
//      else{
//          lsum+=x;
//      }
//  }
// //  cout<<fsum<<" "<<lsum<<endl;
// ll diff=abs(fsum-lsum);
// if (diff==0 || n==1)
// {
//     cout<<0<<endl;
// }
// else{
//     bool isDec=true;
//     for (ll i = 0; i < n-1; i++)
//     {
//         if (a[i]<a[i+1])
//         {
//             isDec=false;
//             break;
//         }
//     }
//     if (isDec)
//     {
//         cout<<-1<<endl;
//     }
//     else{
//         if (fsum>lsum)
//         {
//             cout<<-1<<endl;
//         }
//         else{
//             ll mid=n/2;
//             ll s=mid-1;
//             ll e=(n&1)?mid+1:mid;
//             vector<ll> v;
//             while (s>=0 && e<n)
//             {
//                 v.push_back(a[e]-a[s]);
//                 s--;
//                 e++;
//             }
//             bool visDec=true;
//             for (ll i = 0; i < n-1; i++)
//             {
//                 if (a[i]<=a[i+1])
//                 {
//                     visDec=false;
//                     break;
//                 }
//             }
//             if (visDec)
//             {
//                 cout<<-1<<endl;
//             }
//             else{
//                 cout<<v[v.size()-1]<<endl;
//             }
            
//         }
//     }
    
// }
// }
// return 0;
// }
