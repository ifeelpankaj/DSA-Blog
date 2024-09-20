#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i ; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
}

void bubble_sort(vector<int>&arr){
    int n = arr.size();


    for(int i = n-1; i>=0;i--){
        int didSwap = 0;
        for(int j =0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<" run"<<endl;
       
    }
}

void recursive_bubblo_sort(vector<int>&arr,int i,int n){

if(i==n) return;
int j=i;
while(j>0 && arr[j-1]>arr[j])
{
    swap(arr[j-1],arr[j]);
    j--;
}
recursive_bubblo_sort(arr, i+1, n);
}

void recursive_insertion_sort(vector<int>&arr,int i,int n){
    if(i==n) return;
    int j = i;
    while(j>0  && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
    recursive_insertion_sort(arr,i+1,n);
}

void insertion_sort(vector<int>&arr){
    int n = arr.size();
    for (int i = 0; i<n;i++){
        int j = i;
        while( j> 0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
}


}
void merge_sort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    merge_sort(arr, low, mid);  // left half
    merge_sort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
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


recursive_insertion_sort(arr,0,n);

for(auto it: arr){
    cout<<it<<" ";
}


 return 0;
}