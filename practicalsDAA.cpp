#include<iostream>
#include<cmath>
using namespace std;
int merge(int arr[],int l,int mid,int h,int& sum){ 
    int merged[h-l+1];
    int idx1=l,idx2=mid+1,x=0;
    while (idx1<=mid && idx2<=h)
    {
        if(arr[idx1]<=arr[idx2]){
        merged[x++]=arr[idx1++];
        }
        else{
             merged[x++]=arr[idx2++];
        }
        sum++;

    }
    while (idx1<=mid)
    {
        merged[x++]=arr[idx1++];
    }
    while (idx2<=h)
    {
        merged[x++]=arr[idx2++];
    }
    for (int i = 0,j=l; i < h-l+1; i++,j++)
    {
       arr[j]=merged[i];
    }
    return sum;
}
void mergesort(int arr[],int l,int h,int& sum){
    if(l>=h) return;
    int mid=l+(h-l)/2;
    mergesort(arr,l,mid,sum);
    mergesort(arr,mid+1,h,sum);
    merge(arr,l,mid,h,sum);
}

//Heap sort
void heapify(vector<int> &a,int n,int i){ 
    int maxIdx=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l] > a[maxIdx]){
        maxIdx=l;
    }

    if(r<n && a[r] > a[maxIdx]){
        maxIdx=r;
    }

    if(maxIdx!=i){
        swap(a[i],a[maxIdx]);
        heapify(a,n,maxIdx);
    }
}
void heapsort(vector<int>& a){ 
    int n=a.size();
    //first non leaf element is at (n/2)-1
    for (int i = (n/2)-1; i>=0; i--)
    {
        heapify(a,n,i);
    }
    for (int i = n-1; i > 0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
    
}
int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // insertion sort 
    // int sum=0;
    // for (int i = 1; i < n; i++)
    // {
    //     int current=a[i];
    //     int j=i-1;
    //     while (a[j]>current && j>=0)
    //     {
    //         a[j+1]=a[j];
    //         j--;
    //         sum++;
    //     }
    //     a[j+1]=current;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"No. of comparisons:"<<sum<<endl;

    //Merge Sort
    // mergesort(a,0,n-1);


    //Heap Sort
    // int n;
    // cin>>n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // heapsort(v);
    // for (auto it : v)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    
    return 0;
}