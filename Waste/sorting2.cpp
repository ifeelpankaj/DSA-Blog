#include <bits/stdc++.h>
using namespace std;

int  partition(vector<int> &arr,int low,int high){

   int p = arr[low];
   int i,j;
   i = low;
   j = high;

while(i<j){
    while(arr[i]<=p && i<=high-1){
        i++;
    }
    while(arr[j]>p && j>=low-1){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }   
}
swap(arr[low],arr[j]);
return j;

}

void quick_sort(vector<int> &arr,int low,int high){
if(low<high){
    int pIndex =  partition(arr,low,high);
    quick_sort(arr, low, pIndex - 1);
    quick_sort(arr, pIndex + 1, high); 
}
}

void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low;i<=high;i++){
        arr[i]= temp[i-low];
    }

}

void merge_sort(vector<int> &arr,int low,int high){
    if(low >= high) return;
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main() {

int n;
cin>>n;
vector<int> arr;


for(int i = 0; i<n;i++){
    int element;
    cin>>element;
    arr.push_back(element);
}


merge_sort(arr,0,n-1);

for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}