#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
#define ll long long int 
vector<ll> lcmAndGcd(ll A , ll B) {
        ll  temp;
        ll  mx=max(A,B);
        ll  mn=min(A,B);
        while(mn!=0){
            temp=mx%mn;
            mx=mn;
            mn=temp;
        }
        vector<ll > v;
        v.push_back(mx);
        v.push_back((A*B)/mx);
        return v;
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
ll sumOfDivisors(ll N)
    {
        ll sum=0;
        for (ll i = 1; i <=N; i++)
        {
            sum+=i*(N/i);
        }
        return sum;
        //1-n
        //2-2*(n/2)
        //3-
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
// vector<int> frequencyCount(vector<int>& arr,int N, int P)
//     { 
//         map<int,int> mp;
//         for(int i=0;i<N;i++){
//             mp[arr[i]]++;
//         }
//         for(int i=0;i<N;i++){
//             arr[i]=mp[i+1];
//         }
//         return arr;
//     }
// int maxFrequency(vector<int>& nums, int k) {
    
// }
//merge sort
void merge(ll arr[],ll l,ll mid,ll r){
    ll i=l;
    ll j=mid+1;
    ll f=l;
    ll temp[100000];
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

    // left over elements on left
    if (i>mid)
    {
        while (j<=r)
        {
            temp[f]=arr[j];
            j++;
            f++;
        }
        
    }
    // left over elements on right
    else{
    while (i<=mid)
        {
            temp[f]=arr[i];
            i++;
            f++;
        }
    }
    //transferring the complete array
    for (ll k = l; k <=r; k++)
    {
       arr[k]=temp[k];
    }
}
void mergeSort(ll arr[],ll l,ll r){
    if (l<r)
    {
        ll mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    
}

//quick sort
void swap(ll arr[],ll i,ll j){
    ll temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
ll partition(ll arr[],ll l,ll r){
    ll pivot=arr[r];
    ll i=l-1;
    for (ll j = l; j < r; j++)
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
void quickSort(ll arr[],ll l,ll r){
    if (l<r)
    {
         ll pivot=partition(arr,l,r);
         quickSort(arr,l,pivot-1);
         quickSort(arr,pivot+1,r);
    }
}


//Arrays


ll removeDuplicates(vector<ll>& nums) {
        ll temp=nums[0];
        ll ans=1;
        ll t=0;
        for (ll i = 0; i < nums.size(); i++)
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
    //Reverse Algorithm    
    //for rotate right-
    //reverse last k elements of array;
    //reverse first n-k elements of array;
    //reverse whole array;
    reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
    reverse(nums.begin(),nums.begin()+(nums.size()-(k%nums.size())));
    reverse(nums.begin(),nums.end());
}
void leftRotate(vector<ll>& nums, ll k){ 
        //reverse algorithm
        //for rotate left-
        //reverse first k elements of array
        //reverse last n-k elements of array
        // reverse whole array
    reverse(nums.begin(),nums.begin()+(k%nums.size()));
    reverse(nums.rbegin(),nums.rbegin()+(k%nums.size()));
    reverse(nums.begin(),nums.end());
}
void moveZeroes(vector<ll>& nums) {
        int i,j;
        for (int k = 0; k < nums.size(); k++)
        {
            if (nums[k]==0)
            {
                i=k;
                break;
            }
        }
        j=i+1;
        while (i<nums.size()&&j<nums.size())
        {
            if(nums[j]!=0){
                cout<<nums[j]<<"-"<<nums[i]<<" ";
                swap(nums[i],nums[j]);
                i++;
            }
            else{
                j++;
            }
        }
    }
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        int i=0;
        int j=0;
        vector<int> v;
        while (i<n && j<m)
        {
            if (arr1[i]<=arr2[j])
            {
                if (v.size()==0 || v.back()!=arr1[i])
                {
                v.push_back(arr1[i]);
                }
                i++;
            }
                    
                
            else {
               if (v.size()==0 || v.back()!=arr2[j])
                {
                v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (i < n) // IF any element left in arr1
        {
            if (v.back() != arr1[i])
            v.push_back(arr1[i]);
            i++;
        }
        while (j < m) // If any elements left in arr2
        {
            if (v.back() != arr2[j])
            v.push_back(arr2[j]);
            j++;
        }
        return v;
        
        //return vector with correct order of elements
    }
vector<int> findIntersection(int arr1[], int arr2[], int n, int m){ 
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0;
    int j=0;
    vector<int> v;
    while (i<n && j<n)
    {
        if(arr1[i]==arr2[j]){
            if (v.size()==0 || v.back()!=arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
            // j++;
        }
        else{
            // i++;
            j++;
        }
    }
    return v;
    
}
int missingNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int ans=0;
        bool flag=true;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i!=nums[i])
            {
                ans=i;
                flag=false;
                break;
            }
        }
        if (flag)
        {
            return nums.size();
        }
        return ans;
    }
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
            {
                count++;
            }
            else{
                count=0;
            }
            ans=max(count,ans);
        }
        return ans;
    }
int singleNumber(vector<int>& nums) {
        int ans=nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            ans^=nums[i];
        }
        return ans;
    }
int subarraySum(vector<int>& nums, int k) {
    //sliding window only possible for positive elements
        // int count=0;
        // int sum=0;
        // int st=0;
        // int end=0;
        // //111
        // while (st<nums.size() && end<nums.size())
        // {
        //     sum+=nums[end];//-1
        //     while (sum>k)
        //     {
        //         sum-=abs(nums[st]);
        //         st++;
        //     }
        //     if (sum==k && st<nums.size())
        //     {
        //         count++;
        //         end++;
        //     }
        //     else{
        //         end++;
        //     }
        // }
        // return count;

        int sum=0,count=0;
        map<int,int> mp;
        mp[0]=1;
        for (int i = 0; i < nums.size(); i++)
        {
            sum+=nums[i];
            if (mp[sum-k]!=0)
            {
                count+=mp[sum-k];
            }
            else{
                mp[sum]++;
            }
        }
        return count;

        // not working sliding window
    //      int st=0;//1 11 2 3 15-10
    //     int end=0;
    //     int preEnd=-1;
    //     int sum=0;
    //     int ans=0;
    //     while(st<nums.size()&& end<nums.size())
    //     {
    //     if (end!=preEnd)//-11
    //     {
    //         sum+=nums[end];
    //     }
    //     if (sum==k)
    //     {
    //         ans++;
    //         preEnd=end;
    //         end++;
    //     }
    //     else{
    //         preEnd=end;
    //         sum-=nums[st];
    //         st++;
    //     }
    // }
    // return ans;
        
    }
int countingSubarrays(int* A, int n1, int B){
    int st=0;//1 11 2 3 15-10
    int end=0;
    int preEnd=-1;
    int sum=0;
    int ans=0;
    while (st<n1 && end<n1)
    {
        if (end!=preEnd)
        {
            sum+=A[end];
        }
        if (sum<B)
        {
            ans+=(end-st)+1;//counting the subarrays
            preEnd=end;
            end++;
        }
        else{
            preEnd=end;
            sum-=abs(A[st]);
            st++;
        }
    }
    return ans;
    }
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // unordered_map 'um' implemented  
        // as hash table 
        unordered_map<int, int> um; 
        int sum = 0, maxLen = 0; 
      
        // traverse the given array 
        for (int i = 0; i < N; i++) { 
      
            // accumulate sum 
            sum += A[i]; 
      
            // when subarray starts from index '0' 
            if (sum == K) 
                maxLen = i + 1; 
      
            // make an entry for 'sum' if it is 
            // not present in 'um' 
            if (um.find(sum) == um.end()) 
                um[sum] = i; 
      
            // check if 'sum-k' is present in 'um' 
            // or not 
            if (um.find(sum - K) != um.end()) { 
      
                // update maxLength 
                if (maxLen < (i - um[sum - K])) 
                    maxLen = i - um[sum - K]; 
            } 
        } 
      
        // required maximum length 
        return maxLen; 
        
    } 
bool searchMatrix(vector<vector<int>>& matrix, int target) {//search element in 2d array
    if (!matrix.size())
    {
        return false;
    }
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=(n*m)-1;
         while (low<=high)
         {
             int mid=(low+(high-low)/2);
             if (matrix[mid/m][mid%m]==target)
             {
                 return true;
             }
             else if(matrix[mid/m][mid%m]<target){
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
         }
         return false;
         
    }
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
    // int end=0;
    // while (end<m)
    // {
    //     int po=0;
    //     while (po<n)
    //     {
    //         if (arr[po][end]==1)
    //         {
    //             return po;
    //         }
    //         else{
    //             po++;
    //         }
    //     }
    //     end++;
    // }
    // return -1;

    //O(m+n)-approach

    int max_row_index=-1;
    int r=0;
    int c=m-1;
    while (r<n && c>=0)
    {
        if (arr[r][c]==1)
        {
            c--;
            max_row_index=r;
        }
        else{
            r++;
        }
    }
    return max_row_index;
    
}
vector<int> twoSum(vector<int>& nums, int target) {
    //using two pointer approach
        // vector<int> temp=nums;
        // sort(temp.begin(),temp.end());
        // vector<int> ans;
        // int i=0;
        // int j=nums.size()-1;
        // while (temp[i]+temp[j]!=target)
        // {
        //     if (temp[i]+temp[j]>target)
        //     {
        //         j--;
        //     }
        //     else{
        //         i++;
        //     } 
        // }
        // for (int k = 0; k < nums.size(); k++)
        // {
        //     if (nums[k]==temp[i] || nums[k]==temp[j])
        //     {
        //        ans.emplace_back(k); 
        //     }
        // }
        
        // return ans;


        //using hashtable
        unordered_map<int,int> table;
        vector<int> ans; 
        for (int i = 0; i < nums.size(); i++)
        {
            if (table.find(target-nums[i])!=table.end())
            {
                ans.push_back(table[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            table[nums[i]]=i;
        }
        return ans;
}
void sortColors(vector<int>& nums) {
        // map<int,int> mp;
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     mp[nums[i]]++;
        // }
        // int t=0;
        // for (int i = 0; i < 3; i++)
        // {
        //     while (mp[i]--)
        //     {
        //         nums[t]=i;
        //         t++;
        //     }
        // }
        
        //Dutch National Flag Algorithm

        //three pointers-low,mid,high
        //Assumption-
        // element from 0 to low-1-0
        // element from high+1 to n-2
        // Algo-
        //traverse array
        // mid=0,low=0,high=n-1;
        //if arr[mid]=0--swap arr[mid],arr[low] and low++
        //if arr[mid]=1,mid++
        //iff arr[mid]=2,swap arr[mid],arr[high] and high--

        int mid=0,low=0,high=nums.size()-1;
        while (mid<=high)
        {
            if (nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==0){ 
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
}
int allXor(vector<int>& nums){ 
    int ans=nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans^=nums[i];
    }
    return ans;
}
int majorityElement(vector<int>& nums) {
    //hashing
    // map<int,int> mp;
    // int ans;
    //  for (int i = 0; i < nums.size(); i++)
    //  {
    //      mp[nums[i]]++;
    //      if (mp[nums[i]]>floor(nums.size()/2))
    //      {
    //          ans=nums[i];
    //          break;
    //      }
    //  }
    //  return ans;

    //moore voting  algorithm
    // majority element cancels out the minority
    int count=0,candidate=0;
    for (auto num : nums)
    {
        if (count==0)
        {
            candidate=num;
        }
        if (num==candidate)
        {
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}
// 5,4,-1,7,8 
int maxSumOfSubArray(vector<int>& nums) {
        //kadane's algo
        //take maxi,sum
        //iterate in array
        //if sum<0 make it 0 else take max of maxi and sum
        int sum=0,maxi=nums[0];
        for (int i = 0; i < nums.size(); i++)
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
vector<int> maxSumSubArray(vector<int>& nums) {
        //kadane's algo
        //take maxi,sum
        //iterate in array
        //if sum<0 make it 0 else take max of maxi and sum
        int sum=0,maxi=nums[0];
        int st=0,end=0;
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
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
        for (int k = st; k <=end; k++)
        {
            temp.push_back(nums[k]);
        }
        return temp;
}
//{5, 4, 3, 1, 6}
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
int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int res=0;
        for (int i = 0; i < prices.size(); i++)
        {
            mn=min(mn,prices[i]);
            if (prices[i]>mn)
            {
                res=max(res,prices[i]-mn);
            }
        }
        return res;
    }
vector<int> rearrangeArray(vector<int>& nums) {
        // int i=0;
        // vector<int> temp;
        // vector<int> temp1;
        // vector<int> ans;
        // while (i<nums.size())
        // {
        //     if (nums[i]>0)
        //     {
        //         temp.push_back(nums[i]);
        //     }
        //     else{
        //         temp1.push_back(nums[i]);
        //     }
        //     i++; 
        // }
        // i=0;
        // int s1=0;
        // int s2=0;
        // while (i<nums.size())
        // {
        //     if (i&1)
        //     {
        //         ans.push_back(temp1[s2]);
        //         s2++;
        //     }
        //     else{
        //         ans.push_back(temp[s1]);
        //         s1++;
        //     }
            
        //     i++; 
        // }
        // return ans;

        //optimised approach
        int pos=0,neg=0;
        vector<int>ans;
        while(pos<nums.size() && neg<nums.size()){
            while(nums[pos]<0)pos++;//making sure first element is always positive (tricky part of this problem)
            while(nums[neg]>0)neg++;
			
            ans.push_back(nums[pos]);
            ans.push_back(nums[neg]);
			
            pos++;
            neg++;
        }
        return ans;
}
void nextPermutation(vector<int>& nums) {
        int i,l;
        for (i = nums.size()-2; i>=0; i--)
        {
            if (nums[i]<nums[i+1])
            {
               break;
            }
        }
        if (i<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
            for (l = nums.size()-1; l>=0; l--)
            {
                if (nums[l]>nums[i])
                {
                    break;
                }
            }
            swap(nums[i],nums[l]);
            reverse(nums.begin()+i+1,nums.end());
        }
}
vector<int> leaders(int a[], int n){
        int mx=INT_MIN;
        vector<int> temp;
        for (int i = n-1; i>=0; i--)
        {
            if (a[i]>=mx)
            {
                temp.push_back(a[i]);
                mx=a[i];
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;       
}
int longestConsecutive(vector<int>& nums) {
    //striver code-tle at leet code
    // set<int> hashSet;
    // for (auto num : nums)
    // {
    //     hashSet.insert(num);
    // }
    // int longestStreak=0;
    // for ( auto num:nums)
    // {
    //     if (!hashSet.count(num-1))
    //     {
    //         int currStreak=1;
    //         int currNum=num;
    //         while (hashSet.count(currNum+1))
    //         {
    //             currNum+=1;
    //             currStreak++;
    //         }
    //         longestStreak=max(longestStreak,currStreak);
    //     }
    // }
    // return longestStreak;

    //tle less accepted code
      int n = nums.size(); // extract the size of the array
        
        unordered_map<int, int> mp; // declaring unordered map
        
        // Step 1)  we are giving 1 to each of the elemnt
        // (Assuming that it may be the starting point of consecutive sequence)
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]] = 1;
        }
        
        // step 2) validating our assumption taken in step 1
        for(int i = 0; i < n; i++)
        {
            if(mp.find(nums[i] - 1) != mp.end()) // if(arr[i] - 1) is present in map
            {
                // then arr[i] can never be the starting point some of consecutive sequence
                // so give value zero for that arr[i]
                mp[nums[i]] = 0;
            }
        }
        
        // step 3) Now the elements for which value 1 is left
        // for them we definately know they are the starting point of 
        // some consecutive sequence, using that length trick we find the maxlen
        
        int mxLen = 0; // this variable holds my answer
        
        for(int i = 0; i < n; i++) // travel in the array
        {
            // if value is 1, then they are starting point some of consecutive sequence
            if(mp[nums[i]] == 1) 
            {
                // if it is the starting point, then definately length is going to be 
                // atleast 1
                int length = 1; 
                
               // we dicuss it above
                while(mp.find(nums[i] + length) != mp.end())
                {
                    length++;
                }
                
                mxLen = max(mxLen, length); // update mxLen
            }
        }
        
        return mxLen; // Finally return mxLen
}
void setZeroes(vector<vector<int>>& matrix) {
        // bool col0=true;
        // int col=matrix[0].size();
        // int row=matrix.size();
        // for (int i = 0; i < row; i++)
        // {
        //     if (matrix[i][0]==0)
        //     {
        //         col0=false;
        //     }
            
        //     for (int j = 0; j < col; j++)
        //     {
        //         if (matrix[i][j]==0)
        //         {
        //             matrix[0][j]=0;
        //             matrix[i][0]=0;
        //         }
        //     }
        // }
        // for (int i = row-1; i>=0; i--)
        // {
        //     for (int j = col-1; j>=1; j--)
        //     {
        //         if (matrix[i][0]==0 || matrix[0][j]==0)
        //         {
        //             // cout<<matrix[i][j]<<" ";
        //             matrix[i][j]=0;
        //         }
        //     }
        //     // cout<<endl;
        //     if (col0==false)
        //     {
        //         matrix[i][0]=0;
        //     }
        // }
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
}
void rotate902dMatrixAnticlock(vector<vector<int>>& matrix) {

    //first transpose then reverse each row
    int rows = matrix.size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
           swap(matrix[i][j],matrix[j][i]);
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    
     
}
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    // int m= matrix.size(), n= matrix[0].size();
    // //print in lateral fashion and then reverse after every 2n size starting from n till m size
        // vector<int> temp;
    //     for (int i = 0; i < m*n; i++)
    //     {
    //         temp.push_back(matrix[i/n][i%n]);
    //     }
    //     for (int i = n; i < m*n; i+=2*n)
    //     {
    //         reverse(temp.begin()+i,temp.begin()+i+n);
    //     }
    //     return temp;

    int top = 0, left = 0, bottom = matrix.size() - 1, right = matrix[0].size() - 1;
        vector<int> temp;
  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++)
      temp.push_back( matrix[top][i] );

    top++;

    for (int i = top; i <= bottom; i++)
      temp.push_back( matrix[i][right] );

    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; i--)
        temp.push_back( matrix[bottom][i] );

      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        temp.push_back( matrix[i][left] );

      left++;
    }
  }
    return temp;
        
}
vector<vector<int>> pascalsTriangle(int numRows) {
        vector<vector<int>> v(numRows);
        for (int i = 0; i < numRows; i++)
        {
            v[i].resize(i+1);
            v[i][0]=v[i][i]=1;
            for (int j =1; j < i; j++)
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        return v;
        
}
vector<int> majorityElementNby3(vector<int>& nums){
    // set<int> temp;
    // int size=floor(nums.size()/3);
    // sort(nums.begin(),nums.end());
    // int count=0;
    // int prevNum=nums[0];
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i]==prevNum)
    //     {
    //         count++;
    //     }
    //     else{
    //         prevNum=nums[i];
    //         count=1;
    //     }
    //     if (count>size)
    //     {
    //         count=0;
    //         temp.insert(prevNum);
    //     }
    // }
    // nums.clear();
    // for (auto it:temp)
    // {
    //     nums.push_back(it);
    // }
    // return nums;

    //boyer more voting algorithm
    int size=floor(nums.size()/3);
    int num1=-1,num2=-1,c1=0,c2=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==num1)c1++;
        else if(nums[i]==num2)c2++;
        else if(c1==0){
            num1=nums[i];
            c1=1;
        }
        else if(c2==0){
            num2=nums[i];
            c2=1;
        }
        else{
            c1--;
            c2--;
        }
    }
    c1=count(nums.begin(),nums.end(),num1);
    c2=count(nums.begin(),nums.end(),num2);
    nums.clear();
    if (c1>size && num1!=num2)
    {
        nums.push_back(num1);
    }
    if(c2>size && num1!=num2){
        nums.push_back(num2);
    }
    if(num1==num2){
        nums.push_back(num1);
    }
    return nums;
    
}
vector<vector<int>> threeSum(vector<int>& nums) {
    //two pointer
    //a+b+c=0
    //take a as constant such that b+c=-a
    //[-1,0,1,2,-1,-4]
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size()-2; i++)
        {
            if (i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int pi=-nums[i];
                int low=i+1;
                int hi=nums.size()-1;
                while (low<hi)
                {
                    if (nums[low]+nums[hi]==pi)
                    {
                        vector<int> temp;
                        temp.push_back(nums[low]);
                        temp.push_back(nums[hi]);
                        temp.push_back(nums[i]);
                        ans.push_back(temp);
                        int prevlow=nums[low];
                        int prevhi=nums[hi];
                        int previ=nums[i];
                        low++;
                        hi--;
                        while (low<hi && nums[low]==prevlow)
                        {
                            prevlow=nums[low];
                            low++;

                        }
                        while (low<hi && nums[hi]==prevhi)
                        {
                            prevhi=nums[hi];
                            hi--;
                        }
                    }
                    else if(nums[low]+nums[hi]<pi){ 
                        low++;
                    }
                    else{ 
                        hi--;
                    }
                }
            }

        }
        return ans;
}
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if (nums.empty())
        {
            return  ans;
        }    
        sort(nums.begin(),nums.end());
       for (long i = 0; i < nums.size(); i++)
        {
            for (long j = i+1; j < nums.size(); j++)
            {
                long long int reqSum=long(target)-long(nums[j])-long(nums[i]);
                long long int left=j+1;
                long long int right=nums.size()-1;
                
                while (left<right)
                {
                    if (nums[left]+nums[right]==reqSum)
                    {
                        vector<int> temp(4,0);
                        temp[0]=(nums[i]);
                        temp[1]=(nums[j]);
                        temp[2]=(nums[left]);
                        temp[3]=(nums[right]);
                        ans.push_back(temp);
                        left++;
                        right--;
                        while (left<right && nums[left-1]==nums[left])
                        {
                            left++;
                        }
                        while (left<right && nums[right+1]==nums[right])
                        {
                            right--;
                        }
                    }
                    else if(nums[left]+nums[right]<reqSum){ 
                        left++;
                    }
                    else{
                        right--;
                    }
                }
                while (j+1<nums.size() && nums[j+1]==nums[j])
                {
                    j++;
                }
            }
            while (i+1<nums.size() && nums[i+1]==nums[i])
            {
                i++;
            }
        }
        return ans;
    }
int maxLen(vector<int>&A, int n){   
    int ans=0;
    unordered_map<int,int> mp;
    int maxi=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=A[i];
        if (sum==0)
        {
            ans=i+1;
        }
        else{ 
            if (mp.find(sum)!=mp.end())
            {
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    
    return ans;
}
int SubarrayXOR(vector<int> arr, int N, int K) {
        map<int,int> mp;
        int cnt=0;
        int xr=0;
        for (int i = 0; i < N; i++)
        {
            xr=xr^arr[i];
            if (xr==K)
            {
                cnt++;
            }
            if (mp.find(xr^K)!=mp.end())
            {
                cnt+=mp[xr^K];
            }
            mp[xr]++;
        }
        return cnt; 
}
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    
    vector<vector<int>> ans;
    if (intervals.size()==0)
    {
        return ans;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> p={intervals[0][0],intervals[0][1]};
    for (int i = 0; i < intervals.size(); i++)
    {
        if (intervals[i][0]<=p[1])
        {
            p[1]=max(p[1],intervals[i][1]);
        }
        else{
            vector<int> temp(2,0);
            temp[0]=p[0];
            temp[1]=p[1];
            ans.push_back(temp);
            p[0]=intervals[i][0];
            p[1]=intervals[i][1];
        }
    }
    ans.push_back(p);
    return ans;
}
void mergeSortedArrays(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if (nums1.size()==0)
    {
        nums1=nums2;
        return;
    }
    else if(nums2.size()==0){ 
        return;
    }
    else{ 
        int s1,s2;
        s1=0;s2=0;
        while (s1<nums1.size())
        {
            
            if (s1<m)
            {
                if (nums1[s1]<=nums2[s2])
                {
                    s1++;
                }
                else{ 
                    swap(nums1[s1],nums2[s2]);
                    sort(nums2.begin(),nums2.end());
                }
            }
            else{
                swap(nums1[s1],nums2[s2]);
                s1++;
                s2++;
            }
        }
    }
        
}
int *findTwoElement(int *arr, int n) {
        int *ans = new int[2], i;
        for (i = 0; i < n; i++) {
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            else
                ans[0] = abs(arr[i]);
        }
        for (i = 0; i < n; i++) {
            if (arr[i] > 0) ans[1] = i + 1;
        }
        return ans;
    }
long long  mergeInversion(long long  arr[],int lo,int mid,int hi){ 
    long long temp[hi-lo+1];
    int ptr1=lo,ptr2=mid+1,pos=0;;
    long long int inversion_count=0;
    while (ptr1<=mid && ptr2<=hi)
    {
        if (arr[ptr1]>arr[ptr2])
        {
            temp[pos++]=arr[ptr2++];
            inversion_count+=(mid-ptr1+1);
        }
        else{
            temp[pos++]=arr[ptr1++];
        }
        
    }
    while (ptr1<=mid)
    {
        temp[pos++]=arr[ptr1++];
    }
    while (ptr2<=hi)
    {
        temp[pos++]=arr[ptr2++];
    }
    for (int i = 0; i < pos; i++)
    {
        arr[lo+i]=temp[i];
    }
    return inversion_count;
}
long long mergeSortInversion(long long arr[],int lo,int hi){ 
    if (hi<=lo)return 0;
    int mid=(hi+lo)/2;
    long long invCount=mergeSortInversion(arr,lo,mid);
    invCount+=mergeSortInversion(arr,mid+1,hi);
    invCount+=mergeInversion(arr,lo,mid,hi);
    return invCount; 
}
long long int inversionCount(long long arr[], long long N)
{
    return mergeSortInversion(arr,0,N-1);
}
int mergeReverse(vector<int>& nums,int lo,int mid,int hi){ 
    int countReverse=0;
    int j=mid+1;
    for (int i = lo; i <=mid; i++)
    {
        while (j<=hi && nums[i] > 2LL *nums[j])
        {
            j++;
        }
        countReverse+=(j-(mid+1));
    }

    vector<int> temp;
    int le=lo,ri=mid+1;
    while (le<=mid && ri<=hi)
    {
        if (nums[le]<=nums[ri])
        {
            temp.push_back(nums[le++]);
        }
        else{
            temp.push_back(nums[ri++]);
        }
    }
    while (le<=mid)
    {
         temp.push_back(nums[le++]);
    }
    while (ri<=hi)
    {
         temp.push_back(nums[ri++]);
    }
    for (int i = lo; i <=hi; i++)
    {
        nums[i]=temp[i-lo];
    }
    return countReverse;
}
int mergeSortReverse(vector<int>& nums,int lo,int hi){ 
    if(lo>=hi)return 0;
    int mid=(lo+hi)/2;
    int reverseCount=mergeSortReverse(nums,lo,mid);
    reverseCount+=mergeSortReverse(nums,mid+1,hi);
    reverseCount+=mergeReverse(nums,lo,mid,hi);
    return reverseCount;
}
int reversePairs(vector<int>& nums) {
        return mergeSortReverse(nums,0,nums.size()-1);
}
int maxProduct(vector<int>& nums) {
        int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
        for(int i=1;i<nums.size();i++) {
            int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
            prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
            prod1 = temp;
            
            result = max(result,prod1);
        }
    
        return result;
}



//Binary search



int Binarysearch(vector<int>& nums, int target) {
        int ans=-1;
        int s=0,e=nums.size()-1;
        while(s<=e){ 
            int mid=(s+e)/2;
            if (nums[mid]==target)
            {
                ans=mid;
                break;
            }
            else if (nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
}
int findFloor(vector<long long> v, long long n, long long x){
        int s=0,e=n-1;
        int ans=-1;
        while (s<=e)
        {
            int mid=(s+e)/2;
            if (v[mid]>x)
            {
                e=mid-1;
            }
            else{
                ans=v[mid];
                s=mid+1;
            }
        }
        return ans;
}
int findCeil(vector<long long> v,long long n,long long x){ 
    int s=0,e=n-1;
    int ans=-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (v[mid]<x)
        {
            s=mid+1;
        }
        else{
            ans=v[mid];
            e=mid-1;
        }
        
    }
    return ans;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    pair<int,int> p={findFloor(v,v.size(),long(x)),findCeil(v,v.size(),long(x))};
    return p;
}
int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int ans=-1;
        int idx=-1;
        while (s<=e)
        {
            int mid=(s+e)/2;
            if (nums[mid]>target)
            {
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
                if (nums[mid]==target)
                {
                    ans=mid;
                    idx=mid;
                }
            }
        }
        if (idx==ans && ans!=-1)
        {
            return idx;
        }
        return ans+1;
}
bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n;i++){
            if (arr[i]>arr[i+1] && i!=n-1)
            {
                return false;
            }
        }
        return true;
            
}
vector<int> firstAndLastOccurence(vector<int>& nums, int target) {
        int f=-1,l=-1;
        for (int i = 0,j=nums.size()-1; i<nums.size(); i++)
        {
            if (nums[i]==target)
            {
                l=i;
            }
            if (nums[j]==target)
            {
                f=j;
            }
            j--;
        }
        vector<int> ans;
        ans.push_back(f);
        ans.push_back(l);
        return ans;

        //last occurence
        /*
        int res = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == key) {
            res = i;
            break;
            }
        }
        return res;
        */
}
int binaryCountOccurence(int arr[], int n, int x) {
    sort(arr,arr+n);
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int m = (s + e) / 2;

    if (arr[m] == x) {
      return m;
    } else if (arr[m] < x) {
      s = m + 1;
    } else {
      e = m - 1;
    }
  }
  return -1;
}
int countNumberOfOccurences(int arr[], int n, int x) {
    int idx=binaryCountOccurence(arr,n,x);
    if (idx==-1)
    {
        return 0;
    }
    int count=1;
    int left=idx-1;
    while (left >= 0 && arr[left] == x) {
        count++;
        left--;
    }
    // check right half for X
    int right = idx + 1;
    while (right < n && arr[right] == x) {
        count++;
        right++;
    }

  return count;
    
}
int findPeakElement(vector<int>& nums) {
    int start = 0, end = nums.size()-1;
    while (start < end) {
        int mid = (start + end) / 2;

        if (mid == 0)
        return nums[0] >= nums[1] ? 0 : 1;

        if (mid == nums.size()-1)
        return nums[nums.size()-1] >= nums[nums.size() - 2] ? nums.size()-1 : nums.size() - 2;

        //Cheking whether peak ele is in mid position
        if (nums[mid] >= nums[mid - 1] && nums[mid] >= nums[mid + 1])
        return mid;

        //If left ele is greater then ignore 2nd half of the elements
        if (nums[mid] < nums[mid - 1])
        end = mid - 1;

        //Else ignore first half of the elements
        else
        start = mid + 1;
    }
    return start;
}
int searchInSortedArray(vector<int>& nums, int target) {
    int s=0,e=nums.size()-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (nums[mid]==target)
        {
            return mid;
        }

        //check left half is sorted or not
        if (nums[s]<=nums[mid])
        {
            if(target>=nums[s] && target<=nums[mid]){ 
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        //check if right half is sorted
        else{
            if(target>=nums[mid] && target<=nums[e]){ 
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }   
    }
    return -1;

}
bool ifInSortedArray(vector<int>& nums, int target){
    // int s=0,e=nums.size()-1;
    // while (s<=e)
    // {
    //     int mid=(s+e)/2;
    //     if (nums[mid]==target)
    //     {
    //         return true;
    //     }

    //     //check left half is sorted or not
    //     if (nums[s]<=nums[mid])
    //     {
    //         if(target>=nums[s] && target<=nums[mid]){ 
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }
    //     }
    //     //check if right half is sorted
    //     else{
    //         if(target>=nums[mid] && target<=nums[e]){ 
    //             s=mid+1;
    //         }
    //         else{
    //             e=mid-1;
    //         }
    //     }   
    // }
    // return false;
    if (searchInSortedArray(nums,target)!=-1)
    {
        return true;
    }
    return false;
    
}
int findMinInSortedArray(vector<int>& nums) {
    int s=0,e=nums.size()-1,mn=INT_MAX;
    while (s<=e)
    {
        if(nums[s]<=nums[e]) return min(mn,nums[s]);
        int mid=(s+e)/2;
        if (nums[s]<=nums[mid])
        {
            mn= min(mn,nums[s]);
            s=mid+1;
        }
        else{
            mn=min(mn,nums[mid]);
            e=mid-1;
        }
    }
    return mn;
}
int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
            while (s<e)
            {
                int mid=(s+e)/2;
                if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                {
                    s=mid+1;
                }
                else{
                    e=mid;
                }
            }
        return nums[s];
        
}
int kthElement(int arr1[], int arr2[], int n, int m, int k){
    if (n>m)
    {
        return kthElement(arr1,arr2,m,n,k);
    }
    int lo=max(0,k-m),hi=min(k,n);
    while (lo<=hi)
    {
        int cut1=(lo+hi)>>1;
        int cut2=k-cut1;
        int l1=cut1==0?INT_MIN:arr1[cut1-1];
        int l2=cut2==0?INT_MIN:arr2[cut2-1];
        int r1=cut1==n?INT_MAX:arr1[cut1];
        int r2=cut2==m?INT_MAX:arr2[cut2];

        if (l1<=r2 && l2<=r1)
        {
            return max(l1,l2);
        }
        else if(l1>r2){ 
            hi=cut1-1;
        }
        else{
            lo=cut1+1;
        }
    }
    return 1;
}
// Returns count of rotations for an array which
	// is first sorted in ascending order, then rotated
int countRotations(int arr[], int low, int high) {
	    // This condition is needed to handle the case
	    // when the array is not rotated at all
	    if (high < low) return 0;

	    // If there is only one element left
	    if (high == low) return low;

	    // Find mid
	    int mid = low + (high - low) / 2; /*(low + high)/2;*/

	    // Check if element (mid+1) is minimum element.
	    // Consider the cases like {3, 4, 5, 1, 2}
	    if (mid < high && arr[mid + 1] < arr[mid]) return (mid + 1);

	    // Check if mid itself is minimum element
	    if (mid > low && arr[mid] < arr[mid - 1]) return mid;

	    // Decide whether we need to go to left half or
	    // right half
	    if (arr[high] > arr[mid]) return countRotations(arr, low, mid - 1);

	    return countRotations(arr, mid + 1, high);
}
int findKRotation(int arr[], int n) {
	   return countRotations(arr,0,n-1);
}
bool searchinaMatrix(vector<vector<int>>& matrix, int target) {
        if (!matrix.size())
        {
            return false;
        }
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=(n*m)-1;
         while (low<=high)
         {
             int mid=(low+(high-low)/2);
             if (matrix[mid/m][mid%m]==target)
             {
                 return true;
             }
             else if(matrix[mid/m][mid%m]<target){
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
         }
         return false;
}
vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int startCol = 0, endCol = mat[0].size()-1;
        
        while(startCol <= endCol){
            int maxRow = 0, midCol = startCol + (endCol-startCol)/2;
            
            for(int row=0; row<mat.size(); row++){
                maxRow = mat[row][midCol] >= mat[maxRow][midCol]? row : maxRow;   
            }
            
            bool leftIsBig    =   midCol-1 >= startCol  &&  mat[maxRow][midCol-1] > mat[maxRow][midCol];
            bool rightIsBig   =   midCol+1 <= endCol    &&  mat[maxRow][midCol+1] > mat[maxRow][midCol];
            
            if(!leftIsBig && !rightIsBig)          // we have found the peak element
                return vector<int>{ maxRow, midCol};
            
            else if(rightIsBig) // if rightIsBig, then there is an element in 'right' that is bigger than all the elements in the 'midCol', 
                startCol = midCol+1;    //so 'midCol' cannot have a 'peakPlane'
            
            else // leftIsBig
                endCol = midCol-1;
        }
        return vector<int>{-1,-1};
}
int countSmallerThanEqualToMid(vector<int> &row,int mid){ 
    int l=0,h=row.size()-1;
    while (l<=h)
    {
        int md=(l+h)>>1;
        if (row[md]<=mid)
        {
            l=md+1;
        }
        else{
            h=md-1;
        }
    }
    return l;
}
int median2D(vector<vector<int>> &matrix, int R, int C){
    int low=1;
    int high=1e9;
    while (low<=high)
    {
        int mid=(low+high)>>1; 
        int cnt=0;
        for (int i = 0; i < R; i++)
        {
            cnt+=countSmallerThanEqualToMid(matrix[i],mid);
        }
        if (cnt<=(R*C)/2)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;   
}
long long int floorSqrt(long long int x) 
{
    //Given an integer x, find the square root of x. 
    // If x is not a perfect square, then return floor(√x).

    long long int hi=x;
    long long int lo=1;
    long long int ans=1;
    while (lo<=hi)
    {
        long long int mid=(hi+lo)/2;
        if(mid*mid==x){ 
            return mid;
        }
        else if(mid*mid<x) lo=mid+1,ans=mid;
        else hi=mid-1;
    }
    return ans;
}
int NthRoot(int n, int m)
{
	long long int hi=m;
    long long int lo=1LL;
    while (lo<=hi)
    {
        long long int mid=(hi+lo)/2;
        long long int x= mid;
        for (int i = 1; i < n; i++)
        {
            x*=mid;
            if (x>m*1LL)
            {
                break;
            }
        }
        if (x==m*1LL)
        {
            return mid;
        }
        else if(x<m*1LL) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int lo=0,hi=piles[piles.size()-1];
        while (lo<hi)
        {
            int mid=(lo+hi)/2,cnt=0;
            for (auto p : piles)
            {
                cnt+=ceil((double)p/mid);
            }
            if(cnt>h) lo=mid+1;
            else hi=mid;
        }
        return lo;
        
}
int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size()<m*k)
        {
            return -1;
        }
        int le=1,ri=1e9;
        while (le<ri)
        {
            int mid=(le+ri)/2,flow=0,bouq=0;
            for (int i = 0; i < bloomDay.size(); i++)
            {
                if (bloomDay[i]>mid)
                {
                    flow=0;
                }
                else if(++flow>=k){ 
                    bouq++;
                    flow=0;
                }
            }
            if (bouq>=m)
            {
                ri=mid;
            }
            else{
                le=mid+1;
            }
        }
        return le;
}
int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size(),le=1,ri=1e6;
        while (le<ri)
        {
            int mid=(le+ri)/2,sum=0;
            for (int i = 0; i < n; i++)
            {
                sum=sum+ceil(double(nums[i])/mid);
            }
            if (sum<=threshold)
            {
                ri=mid;
            }
            else{
                le=mid+1;
            }
        }
        return ri;
    }
int shipWithinDays(vector<int>& weights, int days) {
    int le=*max_element(weights.begin(),weights.end()),mx=*max_element(weights.begin(),weights.end()),ri=1e9,ans;
    while (le<ri)
    {
        int mid=(le+ri)/2,day=1,sum=0;
        for (int i = 0; i < weights.size(); i++)
        {
            sum+=weights[i];
            if (sum> mid)
            {
               day++;
               sum=weights[i];
            }
        }
        if (day<=days)
        {
            ri=mid;
        }
        else{
            le=mid+1;
        }
    }
    return le;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if (nums2.size()<nums1.size())
    {
        return findMedianSortedArrays(nums2,nums1);
    }
    int n1=nums1.size(),n2=nums2.size();
    int lo=0,hi=n1;
    while (lo<=hi)
    {
        int cut1=(hi+lo)>>1;
        int cut2=((n1+n2+1)/2)-cut1;

        int l1= cut1==0 ? INT_MIN :nums1[cut1-1];
        int l2= cut2==0 ? INT_MIN :nums2[cut2-1];
        int r1= cut1==n1 ? INT_MAX :nums1[cut1];
        int r2= cut2==n2 ? INT_MAX :nums2[cut2];

        if (l1<=r2 && l2<=r1)
        {
            if ((n1+n2)%2==0)
            {
                 return (max(l1,l2)+min(r1,r2))/2.0;
            }
            else{ 
            return (max(l1,l2));
            }
        }
        else if(l1>r2){ 
            hi=cut1-1;
        }
        else{
            lo=cut1+1;
        }
    }
    return 0.0;    
}
bool canPlaceCows(int n, int k, vector<int> &stalls,int dist){ 
    int coord=stalls[0],count=1;
    for (int i = 1; i < stalls.size(); i++)
    {
        if((stalls[i]-coord)>=dist){ 
            count++;
            coord=stalls[i];
        }
        if (count==k)
        {
            return true;
        }
    }
    return false;
}
int aggressiveCows(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int s=1,e=abs(stalls[0]-stalls[stalls.size()-1]);
    int ans=0;
    while (s<=e)
    {
        int mid=(s+e)>>1;
        if(canPlaceCows(n,k,stalls,mid)){ 
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;    
}
bool isPossible(int arr[], int n, int m, long long int curMin) 
    {
        int studentsRequired = 1;
        int curSum = 0;
        
        //iterating over all the books.
        for (int i = 0; i < n; i++) 
        {
            //if current number of pages are greater than curMin, return false
            if (arr[i] > curMin) 
                return false;
            
            //counting number of students required to distribute curMin pages
            if (curSum + arr[i] > curMin) 
            {
                //incrementing student count and updating curSum.
                studentsRequired++;
                curSum = arr[i];

                //if students required becomes greater than given number 
                //of students, we return false.
                if (studentsRequired > m) return false;
            }
            //else updating curSum
            else 
            {
                curSum += arr[i];
            }
        }
        return true;
    }
int findPages(int arr[], int n, int m) 
    {
        long long sum = 0;

        //returning -1 if no. of books is less than no. of students.
        if(n < m) return -1;
        
        //counting total number of pages.
        for(int i = 0; i < n; ++i) sum += arr[i];
        
        //initializing start as 0 pages and end as total pages.
        long long start = 0;
        long long end = sum, mid;
        long long int ans = int(1e15);
        
        while(start <= end) 
        {
            mid = (start + end) / 2;
            
            //checking if it is possible to distribute books 
            //by using mid as current minimum.
            if (isPossible(arr, n, m, mid))
            {
                //if yes, then we find the minimum distribution.
                ans = ans<mid? ans:mid;
                
                //as we are finding minimum and books are sorted 
                //so reducing end as end = mid -1. 
                end = mid - 1;
            }
            //if not possible means pages should be increased so
            //updating start = mid + 1.
            else {
                start = mid + 1;
            }
        }
        //returning minimum number of pages.
        return ans;
    }
int splitArray(vector<int>& nums, int k) {
        int arr[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            arr[i]=nums[i];
        }
        return findPages(arr,nums.size(),k);
        
}
int compute(int actual,int expected){
    return actual-expected;
}
int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int lo=0,ri=n-1;
        int missing=compute(arr[n-1],n);
        while (lo<=ri)
        {
            int mid=lo+(ri-lo)/2;
            missing=compute(arr[mid],mid+1);
            if(missing>=k)  ri=mid-1;
            else lo=mid+1;
        }
        if(ri==-1 )return k;
        else return arr[ri]+k-compute(arr[ri],ri+1);

}
bool isPossible(vector<int>& stations, int k, double mid){
        int count = 0;
        for(int i = 1; i < stations.size(); i++){
            int difference = stations[i] - stations[i - 1];
            double val = (double)difference/mid;
            count += (int(val));
        }
        if(count <= k) return true;
        return false;
    }
double findSmallestMaxDist(vector<int> &stations, int K){
       int x = stations.size() - 1;
      double low = 0;
      double high = stations[x] - stations[0];
      double result = high;
      while(high - low > 1e-6){
          double mid = low + (high - low)/2;
          if(isPossible(stations,K,mid)){
              result = mid;
              high = mid;
          } 
          else{
              low = mid;
          }
      }
      return result;
}




//Strings


string removeOuterParentheses(string s) {
        int count=0;
        string ans="";
        pair<char,char> p={'(',')'};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]==p.first)
            {
                count++;
                if (count>=2)
                {
                    ans+=s[i];
                }
            }
            else{
                count--;
                if (count>0)
                {
                    ans+=s[i];
                }
            } 
        }
        return ans;
}
string reverseWords(string s) {
         string ans="";
        string temp="";
        bool flag=false;
        int i =s.size()-1;
        while(i >=0)
        {
            
            if (s[i]==' ' && flag)
            {
                reverse(temp.begin(),temp.end());
                ans+=temp+" ";
                temp="";
                flag=false;
            }
            if(s[i]!=' '){ 
                temp+=s[i];
                flag=true;
            }
            if(i==0)
            { 
                reverse(temp.begin(),temp.end());
                ans+=temp;
            }
            i--;
        }
        if(ans[ans.size()-1]==' ') ans.erase(ans.size()-1);
        return ans;
    }
string largestOddNumber(string num) {
        int idx=-1;
        for (int i = 0; i < num.size(); i++)
        {
            if(int(num[i])&1){ 
                idx=i;
            }
        }
        return (idx==-1)?"":num.substr(0,idx+1);
}
string longestCommonPrefix(vector<string> strs) {
    if (strs.size() == 0) return "";
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++)
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }        
    return prefix;
}
bool isIsomorphic(string s, string t) {
        map<char,char> mp_s_t;
        map<char,char> mp_t_s;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp_s_t.find(s[i])==mp_s_t.end() && mp_t_s.find(t[i])==mp_t_s.end())
            {
                mp_s_t[s[i]]=t[i];
                mp_t_s[t[i]]=s[i];
            }
            else if(mp_s_t[s[i]]!=t[i] && mp_t_s[t[i]]!=s[i]){ 
                return false;
            }
        }
        return true;
}
bool rotateString(string s, string goal) {
        if(goal.size()!=s.size()) return false;
        map<char,char> next;
        for (int i = 0; i < goal.size(); i++)
        {
            next[goal[i%goal.size()]]=goal[(i+1)%goal.size()];
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!=next[s[i]]) return false;
        }
        return true;   
}
bool isAnagram(string s, string t) {
    // if(s.size()!=t.size()) return false;      
    // map<char,int> mp1;
    // map<char,int> mp;
    // for (int i = 0; i < t.size(); i++)
    // {
    //     mp[s[i]]++;
    //     mp1[t[i]]++;
    // }
    // for (int i = 0; i < t.size(); i++)
    // {
    //     if(mp1[t[i]]!=mp[t[i]]) return false;
    // }
    // return true;
    
    // sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     return s == t; 

    int count[123] =  {0};
    if(s.size() != t.size()) return false;
    for(int i = 0; i < s.size(); i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i = 97; i < 123; i++){
        if( count[i] == 0) continue;
        else return false;
    }
    return true;
}
bool compCount(pair<char,int> p1,pair<char,int> p2){
    return p1.second>p2.second;
}
string frequencySort(string s) {
        string ans="";
        map<int,int> mp;
        vector<pair<int,int>> v;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
           v.push_back(it);
        }
        sort(v.begin(),v.end(),compCount);
        for (auto it : v)
        {
            for (int i = 0; i < it.second; i++)
            {
                ans+=it.first;
            }
        }
        return ans;
        
}
int romanToInt(string s) {
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            if (mp[s[i]]<mp[s[i+1]])
            {
                ans-=mp[s[i]];
            }
            else{
                ans+=mp[s[i]];
            }
        }
        return ans;
}
int myAtoi(string s) {
        string ans="";
        string digits="0123456789";
        bool flag=false;
        bool minus=false;
        for (int i = 0; i < s.size(); i++)
        {
           if(digits.find(s[i])!=string::npos){ 
                ans+=s[i];
                flag=true;
           }
           else{
            if (s[i]=='-' || s[i]=='+')
            {
                if(minus) break;
                if(s[i]=='-') ans+=s[i];
                minus=true;
            }
            else if(s[i]==' '){
                if (flag)
                {
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                if (s[i]!='+')
                {
                    break;
                }
            }
            
           }
        }
        if(ans=="" || ans=="-" || ans=="+" || ans=="--" || ans=="-+" || ans=="+-" || ans=="++") ans="0";
        if(stoll(ans)<pow(-2,31)) return pow(-2,31);
        if(stoll(ans)>(pow(2,31)-1)) return pow(2,31)-1;
        return stoll(ans);
}
bool validate_upc(ll upc){ 
    if(upc<pow(10,12) && upc>999999999999) return false;
   long long int a[12];
   int sum_even=0;
   int sum_odd=0;
    for (int i = 0; i < 12; i++)
    {
        a[i]=upc%10;
        upc/=10;
    }
    for (int i = 1; i < 12; i++)
    {
        if(i%2==0) sum_even+=a[i];
        else sum_odd+=a[i]; 
        cout<<a[i]<<"-";
    }
    cout<<endl;
    int p=10-(((sum_even*3)+(sum_odd))%10);
    if(p==a[0]) return true;
    return false;
}
long long int substrCount (string s, int k) {
    int cnt[26];
    int n = s.size();
    long long int res = 0;
    int left = 0, distinct = 0;
    for (int right = 0; right < n; right++) {
        if (cnt[s[right]-'a'] == 0)
            distinct++;
        cnt[s[right]-'a']++;
        while (distinct >= k) {
            cnt[s[left]-'a']--;
            if (cnt[s[left]-'a'] == 0)
                distinct--;
            left++;
        }
        res += left;
    }
    return res;
    }


//LINKED LISTS- Single Linked List
//leetcode struct
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
ListNode* reverseList(ListNode* head) {
    //iterative
        ListNode* dummy=nullptr;
        ListNode* next=nullptr;
        while (head!=nullptr)
        {
            next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        return dummy;
    }
bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        while (fast->next!=nullptr && fast!=nullptr)
        {
            ListNode* slow=head->next;
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)
            {
                return true;
            }
        }
        return false;
    }
ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;
        while (fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)
            {
                while (entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return nullptr;
    }
//gfg struct
struct Node {
    int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
int countNodesinLoop(struct Node *head)
{
    if(head==NULL || head->next==NULL) return 0;
        Node* fast=head;
        Node* slow=head;
        Node* entry=head;
        int count=0;
        bool flag=false;
        while (fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)
            {
                while (entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                flag=true;
                break;
            }
        }
        if(flag){
        do
        {
            entry=entry->next;
            count++;
        } while (entry!=slow);
        return count;
        }
        return 0;
}
bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while (fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;

        while (slow!=nullptr)
        {
            if(head->val!=slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
}
ListNode* oddEvenList(ListNode* head) {
    if(head==nullptr || head->next==nullptr) return head;
        ListNode* even=head->next;
        ListNode* evenhead=head->next;
        ListNode* odd=head;
        ListNode* oddhead=head;
        while (even && even->next)
        {
            odd->next=even->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return oddhead;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* slow=start;
        ListNode* fast=start;
        for (int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        while (fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return start->next;
    }
ListNode* deleteMiddle(ListNode* head) {
    if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* fast=head->next;
        ListNode* slow=head;
        while (fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
//MergeSort Function O(n*logn)
ListNode* mergelist(ListNode *l1, ListNode *l2)
    {
        ListNode *ptr = new ListNode(0);
        ListNode *curr = ptr;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else
            {
                curr -> next = l2;
                l2 = l2 -> next;
            }
        
        curr = curr ->next;
        
        }
        
        //for unqual length linked list
        
        if(l1 != NULL)
        {
            curr -> next = l1;
            l1 = l1->next;
        }
        
        if(l2 != NULL)
        {
            curr -> next = l2;
            l2 = l2 ->next;
        }
        
        return ptr->next;
    }
ListNode* sortList(ListNode* head) {
        //If List Contain a Single or 0 Node
        if(head == NULL || head ->next == NULL)
            return head;
        
        
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        
        // 2 pointer appraoach / turtle-hare Algorithm (Finding the middle element)
        while(fast !=  NULL && fast -> next != NULL)
        {
            temp = slow;
            slow = slow->next;          //slow increment by 1
            fast = fast ->next ->next;  //fast incremented by 2
            
        }   
        temp -> next = NULL;            //end of first left half
        
        ListNode* l1 = sortList(head);    //left half recursive call
        ListNode* l2 = sortList(slow);    //right half recursive call
        
        return mergelist(l1, l2);         //mergelist Function call
}
Node* segregate(Node *head) {
        
        // Given a linked list of 0s, 1s and 2s, sort it.
        int count[3]={0,0,0};
        Node* ptr=head;
        while (ptr)
        {
            count[ptr->data]++;
            ptr=ptr->next;
        }
        int i=0;
        ptr=head;
        while (ptr)
        {
            if(count[i]==0){++i;}
            else{
                ptr->data=i;
                --count[i];
                ptr=ptr->next;
            }
        }
        return head;
    }
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB==nullptr) return nullptr;
        ListNode* d1=headA;
        ListNode* d2=headB;
        while (d1!=d2)
        {
            d1=d1==nullptr?headB:d1->next;
            d2=d2==nullptr?headA:d2->next;
        }
        return d1;   
}
Node* reverseListNode(Node* head) {
    //iterative
       Node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* addOne(Node *head) 
{
      // Reverse the list
    // Node* prev = NULL, *current = head;
    // while (current != NULL) {
    //     Node* next = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = next;
    // }
    // head = prev;

    // // Add 1 to the number represented by the list
    // int carry = 1;
    // current = head;
    // Node* prevNode = NULL;
    // while (current != NULL && carry != 0) {
    //     int sum = current->data + carry;
    //     current->data = sum % 10;
    //     carry = sum / 10;
    //     prevNode = current;
    //     current = current->next;
    // }

    // // If there is still a carry, create a new node at the end of the list
    // if (carry != 0) {
    //     Node* newNode = new Node(carry);
    //     prevNode->next = newNode;
    // }

    // // Reverse the list again to restore its original order
    // prev = NULL;
    // current = head;
    // while (current != NULL) {
    //     Node* next = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = next;
    // }
    // head = prev;

    // return head;

    head = reverseListNode(head);
    int carry = 1;
    Node* curr = head, *prev = NULL;
    while (curr != NULL && carry) {
        int sum = curr->data + carry;
        curr->data = sum % 10;
        carry = sum / 10;
        prev = curr;
        curr = curr->next;
    }
    if (carry) prev->next = new Node(carry);
    return reverseListNode(head);

    
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode();
        ListNode *temp=head;
        int carry=0;
        while (l1!=nullptr || l2!=nullptr || carry!=0)
        {
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            int sum=carry+x+y;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }
        return head->next;
}
ListNode* reverseKGroup(ListNode* head, int k) {
    if(head==nullptr || k==1) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy,*nex=dummy,*pre=dummy;
        int cnt=0;
        while (curr->next!=nullptr)
        {
            curr=curr->next;
            cnt++;
        }
        while (cnt>=k)
        {
            curr=pre->next;
            nex=curr->next;
            for (int i = 1; i < k; i++)
            {
                curr->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=curr->next;
            }
            pre=curr;
            cnt-=k;
        }
        return dummy->next;
        
}
ListNode* rotateRight(ListNode* head, int k) {
    int cnt=0;
    ListNode* temp=head;
    while (temp)
    {
        cnt++;
        temp=temp->next;
    }
    int diff=abs(cnt-k);
    temp=head;
    while (diff--)
    {
        temp=temp->next;
    }
    ListNode* curr=temp->next;
    ListNode* dummy=temp->next;
    temp->next=nullptr;
    while (dummy->next!=nullptr)
    {
        dummy=dummy->next;
    }
    dummy->next=head;
    return curr;
           
}
Node* mergeTwoLists(Node* a,Node* b){ 
    Node* temp=new Node(0);
    Node* res=temp;
    while (a!=NULL && b!=NULL)
    {
        if(a->data>b->data){
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
        else{
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
    }
    if(a) temp->bottom=a;
    else temp->bottom=b;
    return res->bottom;
}
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL) return root;
   //recur for list on right!
   root->next=flatten(root->next);
   //now merge two lists
   root=mergeTwoLists(root,root->next);
   //return root
   return root;
}
class NodeLL {
public:
    int val;
    NodeLL* next;
    NodeLL* random;
    
    NodeLL(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
NodeLL* copyRandomList(NodeLL* head) {
     NodeLL* iter=head;   
     NodeLL* front=head;   
     while (iter)
     {
        front=iter->next;
        NodeLL* copy=new NodeLL(iter->val);
        iter->next=copy;
        copy->next=front;
        iter=front;
    } 
    iter=head;
    while (iter)
    {
        if(iter->random!=NULL){
            iter->next->random=iter->random->next;
        }
        else{
            iter->next->random=NULL;
        }
        iter=iter->next->next;
    }
    iter=head;
    NodeLL* pHead=new NodeLL(0);
    NodeLL* copy=pHead;
    while (iter)
    {
        front=iter->next->next; 
        copy->next=iter->next;
        iter->next=front;
        copy=copy->next;
        iter=iter->next;
    }
    return pHead;
     
}

//LINKED LISTS- Double Linked List
struct Nodedll
{
  int data;
  struct Nodedll *next;
  struct Nodedll *prev;
  Nodedll(int x) { data = x; next = prev = NULL; }
};
void deleteAllOccurOfX(struct Nodedll** head_ref, int x) {
        Nodedll* curr=*head_ref;
        while (curr!=NULL)
        {
            if(curr->data==x){ 
                if(curr==*head_ref){
                    *head_ref=curr->next;
                    curr->next->prev=NULL;
                }
                Nodedll* temp=curr;
                temp->prev->next=curr->next;
                temp->next->prev=curr->prev;
                free(temp);
            }
            curr=curr->next;
        }
}
vector<pair<int, int>> findPairsWithGivenSum(Nodedll *head, int target)
    {
        map<int,int> mp;
        vector<pair<int, int>> v;
       Nodedll* temp=head;
       while (temp)
       {
        int diff=target-temp->data;
        if(mp.find(diff)!=mp.end()){ 
            v.push_back(make_pair(min(temp->data,diff),max(temp->data,diff)));
        }
        else{
            mp[temp->data]++;
        }
        temp=temp->next;
       }
       sort(v.begin(),v.end());
       return v;
    }
Nodedll * removeDuplicates(struct Nodedll *head)
    {
        // 1 1 1 2 3 4
        Nodedll* temp=head;
        while (temp->next!=NULL)
        {
                if(temp->next->data==temp->data){ 
                    Nodedll* curr=temp->next;
                    temp->next=curr->next;
                    if (curr->next != NULL) {
                    curr->next->prev = temp;
                    }
                    delete curr;
                }
                else {
                temp = temp->next; // Move to next distinct node
            }
        }
        return head;
    }
int* p(void){
    int x=10;
    return(&x);
}
int main(){
    // vector<ll> v=lcmAndGcd(18,24);
    // for (auto it : v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // cout<<sumOfDivisors(5)<<endl;
    // cout<<isPalindrome("aabbaa")<<endl;
    // cout<<isPalindrome("aacaa")<<endl;
    // cout<<isPalindrome("accaa")<<endl;
    // cout<<fib(4)<<endl;
    // ll N;
    // cin>>N;
    // ll k;
    // cin>>k;
    // ll p;
    // cin>>p;
    // ll v[N];
    // for (ll i = 0; i < N; i++)
    // {
    //     // ll x;
    //     // cin>>x;
    //     // v.push_back(x);
    //     cin>>v[i];
    // }
    // mergeSort(v,0,N-1);
    // quickSort(v,0,N-1);
    // for (ll i = 0; i < N; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // vector<ll> v1;
    // v1=frequencyCount(v,N,p);    
    // for (ll i = 0; i < v1.size(); i++)
    // {
        // cout<<v1[i]<<" ";
    // }
    // cout<<endl;
    // cout<<maxFrequency(v,k)<<endl;


    //removing duplicates
    // vector<ll> nums={0,0,1,1,1,2,2,3,3,4};
    // vector<ll> nums={1,2,3,4,5,6,7};
    // vector<ll> nums={-1};
    // ll k=2;
    // vector<ll> nums={1,1,2};
    // cout<<removeDuplicates(nums)<<endl;
    // if (nums.size()>=k)
    // {
    //     rotate(nums,k);
    // }
    // else{
    //     rotate(nums,k%nums.size());
    // }
    // rightRotate(nums,k);
    // for (auto it : nums)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // ll a=10,b=256;
    // vector<ll> v=lcmAndGcd(a,b);
    // for (auto it : v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<gcd(10,256)<<endl;
    // cout<<lcm(10,256)<<endl;
    // vector<int> nums1 = {3,1,0};//112234558
    // vector<int> nums1 = {4,1,2,1,2};//112234558
    // cout<<missingNumber(nums1)<<endl;
    // cout<<findMaxConsecutiveOnes(nums1)<<endl;
    // cout<<singleNumber(nums1)<<endl;
    // int nums2[] = {1, 2,2,2, 3, 4, 5,8};
    // vector<int> nums=findUnion(nums1,nums2,3,5);
    // vector<int> nums=findIntersection(nums1,nums2,9,8);
    // for (auto it : nums)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // moveZeroes(nums);
    // cout<<endl;
    // for (auto it : nums)
    // {
    //     cout<<it<<" ";
    // }
    // vector<int> nums1 = {-1,-1,1};//112234558
    // // cout<<subarraySum(nums1,0)<<endl;
    // int A[] = {10, 5, 2, 7, 1, 9};
    // int B = 15;
    // cout<<countingSubarrays(A,3,B)<<endl;
    // cout<<lenOfLongSubarr(A,6,B)<<endl;
    // int N ,M;
    // cin>>N>>M;
    // vector<vector<int>> Arr;
    // for (int i = 0; i < N; i++)
    // {  vector<int> temp;
    //     for (int j = 0; j < M; j++)
    //     {
    //         int x;
    //         cin>>x;
    //         temp.push_back(x);
    //     }
    //     Arr.push_back(temp);
    // }
    // cout<<rowWithMax1s(Arr,N,M)<<endl;
    // vector<int> nums = {2,7,11,15};
    // int target = 13;
    // vector<int> res={1,2,3,-2,5};
    // vector<int> res={-4,-1,-2,-3};
    // cout<<maxSumOfSubArray(res)<<endl;
    // vector<int> ans=maxSumSubArray(res);
    // for (auto it : ans)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<majorityElement(res)<<endl;
    // sortColors(res);
    // for (auto it : res)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<allXor(res)<<endl;
    // long long int N;
    // cin>>N;
    // long long int arr[N];
    // for (long long int  i = 0; i < N; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<pairWithMaxSum(arr,N)<<endl;
    // vector<int> prices = {7,6,4,3,1};
    // cout<<maxProfit(prices)<<endl;
    // vector<int> arr = {3,1,-2,-5,2,-4};
    // vector<int> ans=rearrangeArray(arr);
    // vector<int> arr={1,2,3};
    // nextPermutation(arr);
    // int a[]={16,17,4,3,5,2};
    // vector<int> ans=leaders(a,6);
    // for (auto it : ans)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // vector<int> nums={0,3,7,2,5,8,4,6,0,1};
    // cout<<longestConsecutive(nums)<<endl;
    // ll n,m;
    // cin>>m>>n;
    // vector<vector<int>> v; 
    // for (int i = 0; i < m; i++)
    // {
    //     vector<int> temp;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin>>x;
    //         temp.push_back(x);
    //     }
    //     v.push_back(temp);
    // }
    // // setZeroes(v);
    // // rotate902dMatrixAnticlock(v);
    // vector<int> l=spiralOrder(v);
    // for (auto it : l)
    // {
    //         cout<<it<<" ";
    // }
    // cout<<endl;
    

    // pascal's triangle
    // ll n;
    // cin>>n;
    // ll target;
    // cin>> target;
    // vector<int> a;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     a.push_back(x);
    // }
    // majorityElementNby3(a);

    //three sum
    // vector<vector<int>> v=threeSum(a);
    //four sum
    // vector<vector<int>> v=fourSum(a,target);
    // vector<vector<int>> v=fourSum(a,target);
    // for (auto it : v)
    // {
    //     for (auto p : it)
    //     {
    //             cout<<p<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //max subarray with zero sum
    // int count=maxLen(a,n);
    // cout<<count<<endl;

    //SubarrayXor
    // int xorCountSubarray=SubarrayXOR(a,n,target);
    // cout<<xorCountSubarray<<endl;

    // vector<vector<int>> v=pascalsTriangle(n);
    // for (auto it : v)
    // {
    //     for (auto p : it)
    //     {
    //         cout<<p<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //merge overlapping intervals
    // vector<int> v1={};
    // vector<int> v2={1};
    // int m,n;
    // m=0;n=1;
    // vector<vector<int>> ans=mergeIntervals(v);
    // vector<vector<int>> ans=mergeIntervals(v);
    // mergeSortedArrays(v1,m,v2,n);
    // int n;
    // cin>>n;
    // vector<int> arr;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // sort(arr,arr+n);
    // int* ans=findTwoElement(arr,n);
    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<*(ans+i)<<endl;
    // }
    // cout<<endl;

    //inversion count 
    // int count_inversion=inversionCount(arr,n);
    //reverse pairs
    // int reverse_Pair=reversePairs(arr);
    // cout<<reverse_Pair<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int nums[] = {5, 6, 8, 9, 6, 5, 5, 6};
    // int nums[] = {1, 1, 2, 2, 2, 2, 3};
    // vector<int> nums = {1,1,2,3,3,4,4,8,8};
    // int nums[] = {5, 6, 8, 9, 6, 5, 5, 6};
    // cout<<getFloorAndCeil(nums,8,10).first<<" "<<getFloorAndCeil(nums,8,10).second<<endl;
    // for (int i = 0; i < 8; i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;
    // cout<<maxProduct(nums)<<endl;
    // cout<<Binarysearch(nums,9)<<endl;
    // cout<<findFloor(nums,nums.size(),5)<<endl;
    // cout<<findCeil(nums,nums.size(),5)<<endl;
    // cout<<searchInsert(nums,0)<<endl;
    // cout<<arraySortedOrNot(nums,4)<<endl;
    // vector<int> temp=firstAndLastOccurence(nums,0);
    // for (auto it : temp)
    // {
    //         cout<<it<<" ";
    // }
    // cout<<endl;
    // cout<<countNumberOfOccurences(nums,7,2)<<endl;
    // cout<<findPeakElement(nums)<<endl;

    // cout<<searchInSortedArray(nums,5)<<endl;
    // cout<<ifInSortedArray(nums,0)<<endl;
    // cout<<findMinInSortedArray(nums)<<endl;
    // cout<<singleNonDuplicate(nums)<<endl;

    // int arr1[] = {100, 112, 256, 349, 770};
    // int arr2[] = {72, 86, 113, 119, 265, 445, 892};
    // cout<<kthElement(arr1,arr2,5,7,7)<<endl;

    // cout<<floorSqrt(5)<<endl;
    // cout<<NthRoot(6,4096)<<endl;
    // vector<int> v={1,10,2,9,3,8,4,7,5,6};
    // minDays(v,4,2);
    // vector<int> v={1,10,3,10,2};
    // minDays(v,3,1);
    // vector<int> v={7,7,7,7,12,7,7};
    // minDays(v,2,2);
    // vector<int> v={5,37,55,92,22,52,31,62,99,64,92,53,34,84,93,50,28};
    // cout<<minDays(v,8,2)<<endl;
    
    // vector<int> v={1,2,3,4,5,6,7,8,9,10};
    // cout<<smallestDivisor(v,6)<<endl;
//    cout<<shipWithinDays(v,5);
    // vector<int> nums1 = {1,3}, nums2 = {2};
    // cout<<findMedianSortedArrays(nums1,nums2)<<endl;
    // cout<<frequencySort("tree")<<endl;
    // romanToInt("asda");
    // cout<<myAtoi("-+42")<<endl;
    // cout<<validate_upc(499995326190)<<endl;
    // diamond_pattern(5);



//     int n;
//   cin >> n;

//   // First line
//   cout << " " << string(n - 1, ' ') << "*" << endl;

//   // Middle lines
//   for (int i = 1; i <= n - 1; i++) {
//     string spaces = string(n - i - 1, ' ');
//     string stars = string(2 * i - 1, 'o');
//     cout << spaces << "/" << stars << "\\" << endl;
//   }

//   // Last line
//   cout << string(n - 1, ' ') << "/" << string(2 * n - 3, 'o') << "\\" << endl;

//   // Reverse middle lines
//   for (int i = n - 1; i >= 1; i--) {
//     string spaces = string(n - i - 1, ' ');
//     string stars = string(2* i - 1, 'o');
//     cout << spaces << "\\" << stars << "/" << endl;
//   }

//   // Last star 
//   cout << " " << string(n - 1, ' ') << "*" << endl;
//     //2 star compulsory
//    // n+1
// cout<<-15%7<<endl;
// cout<<+15%-7<<endl;
// int a=2*3/4+2.0/5+8/5;
// cout<<a<<endl;
// cout<<15.0/2*2%7<<endl;
return 0;
}
