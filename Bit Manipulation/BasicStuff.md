Swapping of 2 number in Bit manipulation

int a =5; int b= 6
output: a = 6 b = 5

How to achive this
first
110 101
a= a^b 
b = a^b 
a = a^b

explainthis this is how we can do swapping of two numbers

Document this also 
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

    with explanation


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
 document this also with brute force as well as optimised approach

 bool alternateBits(int n){
      while (n > 0) {
          if ((n & 1) == ((n >> 1) & 1)) {
              return false;
          }
          n >>= 1;
      }
      return true;
    
}

document thi salso with proper explaination
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
    this must be also documented with explaination
