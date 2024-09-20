#include<bits/stdc++.h>

using namespace std;

string DecimalToBinary(int x) {
    string res = "";

    while (x > 0) {
        if (x % 2 == 1) {
            res += '1';
        } else {
            res += '0';
        }
        x /= 2; 
    }
    // reverse(res.begin(),res.end());
    return res;
}

int BinaryToDecimal(string a){
    int n = a.size(); int num = 0; int p2 = 1;
    for(int i = n-1;i>=0;i--){
        if(a[i]=='1'){
            num += p2;
        }
            p2 = p2*2;
    }
    return num;
}

void Swapping(int &a,int &b){
    a = a^b;
    // cout<<a<<endl; 010 
    b = a^b;
    // cout<<b<<endl; a^b^b  we will et 6 ie 110 value of a
    a = a^b;
    // cout<<a<<endl; a^b ^a

}

    bool isSet(int n,int k){
        //Brute force
        // string s = DecimalToBinary(n);
        

        //     if(s[k-1] == '1'){
        //         return true;
        //     }
        
        // return false;

        //Optimized
        if((n>>(k-1))&1){
            return true;
        }else{
            return false;
        }
    }
void SetBit(int n,int k){
    // brute force
    // string res = DecimalToBinary(n);
    // if(res[k]== '0'){
    //     res[k] = '1';
    // }
    // reverse(res.begin(),res.end());
    // n = BinaryToDecimal(res);
    // cout<<n;
    int ans = n| 1<<k;
    cout<<ans;

    

}
 int countSetBit(uint32_t n){
    // string res = DecimalToBinary(n);
    // int len= res.length();
    // int ctr = 0;
    // for(int i=0;i<len;i++){
    //     if(res[i] =='1'){
    //         ctr++;
    //     }
    // }

    int ctr = 0;
    while(n>0){
    n= n&n-1;
    ctr++;
    }
    return ctr;
 }

bool alternateBits(int n){
      while (n > 0) {
          if ((n & 1) == ((n >> 1) & 1)) {
              return false;
          }
          n >>= 1;
      }
      return true;
    
}

bool compare(int a,int b){
    int m = countSetBit(a);
    int n = countSetBit(b);

    if(m !=n){
        return m<n;
    }

    return a<b;

}
vector<int> SortIntBySetBit(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i+1; j < n ; j++) {
            if(compare(arr[j],arr[mini])){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    return arr;
}


    int divide(int dt, int ds) {
        if(dt == ds) return 1;
        bool sign  = true;
        if(dt >=0 && ds<0) sign = false;
        if(dt<=0 && ds>0) sign = false;
        int n = abs(dt); int d = abs(ds);
        int ans = 0;
        while(n>=d){
            int ctr = 0;
            while(n>=(d<<ctr+1)){
                ctr++;
              
            }
                ans+=1<<ctr;
                n =n-(d*(1<<ctr));
        }
        if(ans==(1<<31)&&sign){
            return INT_MAX;
        }if(ans ==(1<<31)&& !sign){
            return INT_MIN;
        }
        return sign ? ans:-ans;
    }
    void reverse(vector<int>& nums ,int s,int e){
    

        while(s<=e){
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e--;
        }

    }

    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>res;
        reverse(nums,0,n-(k+1));
        reverse(nums,n-(k),n-1);
        reverse(nums,0,n-1);
        
        return res;
    }

    
     vector<int> arrange(vector<int>& nums) {
        int start = 0;
       
        for(int i = start+1;i<nums.size();i++){
            if(nums[i]>0){
                
                swap(nums[start],nums[i]);
                start++;
            }
        }
        return nums;
    }

    int firstSetBit(int num) {
        int ctr = 1;
        if(num == 0) return -1;
        while(num){
            if(num&1){
                break;
            }
                ctr++;
          num>>=1;  // num = num>>1
        }
        return ctr;
    }

    int changeBits(int num) {
       
        num= num | ~0;
        return num;
    }

    bool isAnagram(string s1,string s2) {

        if(s1.length() !=s2.length()) return false;
        int xorResult = 0;
    for (size_t i = 0; i < s1.length(); ++i) {
        xorResult ^= s1[i] ^ s2[i];
    }
        return xorResult == 0;
    
    }

     int firstUniqueChar(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0; i<n;i++){
            int flag = 1;
            for(int j = i+1;j<n;j++){
                if(s[i]  == s[j]){
                    flag = 0;
                }
            }
            if(flag == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
    string removeDuplicates(string s) {
        // set<char>hashSet;
        int n =s.length();
        // string res = "";
        // for(int i = 0; i<s.length();i++){
        //     if(hashSet.find(s[i]) == hashSet.end()){
        //         hashSet.insert(s[i]);
        //         res +=s[i];
        //     }

        // }
        int i = 0;
        for(int j = 1;j<n;j++){
            if(s[i] != s[j]){
                i++;
                s[i] = s[j];
            }
        }
        s.resize(i+1);
        // for(auto it : hashSet){
        //     cout<<it;
        // }
        return s;
    }
    
     vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
       for(int i = 0;i<n*2;i++){
            int element  = 0;
            if(i<n){
                element  = nums[i];
            }else{
                element = nums[i-n];
            }
            ans.push_back(element);
       }
       return ans;
    }

    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int i = 0; i<n;i++){
           ans.push_back(nums[i]);
           ans.push_back(nums[i+n]);
        }
        return ans;
    }
    
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low = 0, high = n-1,mid;
	int floor = -1,ceil =-1;
	while(low<=high){
		mid = (low+high)/2;
		
		if(a[mid] == x){
			floor = a[mid];
			ceil = a[mid];
            break;
		}else if(a[mid] >x){
			floor = a[mid];
			high = mid-1;
		}else{
			ceil = a[mid];
			low = mid+1;
		}
	}
	return{ceil,floor};
}
    int first(vector<int>& nums,int target){
        int low = 0,high = nums.size()-1,mid;
        int first = -1;
         while(low<=high){
            mid= (low+high)/2;
            if(nums[mid] ==target){
                first = mid;
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return first;
    }
    int last(vector<int>& nums,int target){
        int low = 0,high = nums.size()-1,mid;
        int last = -1;
         while(low<=high){
            mid= (low+high)/2;
            if(nums[mid] ==target){
                last = mid;
                low = mid+1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return last;
    }
    int firstOccurence(vector<int>& nums, int target){
        int low = 0,high = nums.size()-1,mid;
        int first = -1;
        while(low<=high){

            if(nums[mid] == target){
                first = mid;
                high = mid-1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return first;
    }
     int lastOccurence(vector<int>& nums, int target){
        int low = 0,high = nums.size()-1,mid;
        int last = -1;
        while(low<=high){
            if(nums[mid] == target){
                last = mid;
                low = mid+1;
            }else if(nums[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return last;
    }
    
    int lowerBound(vector<int>& nums, int target){
        int low = 0,high = nums.size()-1,mid;
        int ans = nums.size();
        while(low<=high){
            mid= (low+high)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& nums, int target){
        int low = 0,high = nums.size()-1,mid;
        int ans = nums.size();
        while(low<=high){
            mid= (low+high)/2;
            if(nums[mid] > target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lowerBound(nums,target);
        int last = upperBound(nums,target);
        if(nums.empty()|| first >= nums.size()||nums[first] != target ){
            return {-1,-1};
        }
        // vector<int>::iterator first = lower_bound(nums.begin(), nums.end(), target);
        // vector<int>::iterator last = upper_bound(nums.begin(), nums.end(), target);
        
        return{first,last-1};
    }

    int bs(vector<int> &nums, int target){
        int low = 0,high = nums.size()-1,mid;

        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(nums[mid]<=target && target<=nums[high]){
                    low = mid+1;
                }else{
                    high= mid-1;
                }
            }
        }

        // while(low<=high){
        //     mid =(low+high)/2;
        //     if(nums[mid] == target) return mid;
        //     if(nums[low]<=nums[mid]){
        //         if(nums[low]<=target && nums[mid]>=target){
        //             high = mid-1;
        //         }else{
        //             low = mid+1;
        //         }
        //     }else{
        //         if(nums[high]< target && nums[mid]<=target){
        //             high = mid-1;
        //         }else{
        //             low = mid+1;
        //         }
        //     }
        // }
        return -1;
    }
    int main(){

  

    return 0;
}

    



