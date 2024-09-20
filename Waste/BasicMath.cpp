#include <bits/stdc++.h>
using namespace std;


int extractNum(int n){
    int revNum= 0;
    while(n>0){
        int lastDigit= n%10;
        
        n = n/10;
        revNum = (revNum*10)+lastDigit;
    }
    return revNum;
}

bool palindrome(int n)
{
        int OG = n;
     int revNum= 0;
     while (n > 0) {
       int lastDigit = n % 10;

       n = n / 10;
       revNum = (revNum * 10) + lastDigit;
     }
     if(OG ==revNum){
         return true;
     }else{
         return false;
     }

}

bool checkArmstrong(int n){
    int originalNum = n;
	int OG = n;
     int counter = 0;

     while (OG != 0)
    {
        counter++;
        OG = OG / 10;
    }
     int sum = 0;
     while (n > 0) {
       int lastDigit = n % 10;
       n = n / 10;
      sum += pow(lastDigit,counter);
     }
    return (sum == originalNum);
}

int* printDivisors(int n) {
    int* divisors = new int[n]; 
    int count = 0; 

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[count] = i;
            count++;
        }   
    }

    // Print the divisors
        for (int i = 0; i < count; i++) {
            cout << divisors[i] << " ";
        }
        
        return divisors; 
}


vector<int> printDivisorsOptimal(int n) {
    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }

   

    sort(divisors.begin(),divisors.end());
     for (int divisor : divisors) {
        cout << divisor << " ";
    }
    return divisors;
}

int Gcd(int n1,int n2){
    int gcd = 1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int OptimalGcd(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }

    return n1 + n2;  // the GCD is the sum of the non-zero values
}

bool checkPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        if(n/i ==i){
            return false;
        }
    }
    return true;

}

int main(){

// int n1,n2;
int n;
cin>>n;
// cin >>n1>>n2;
bool ans = checkPrime(n);
  if (n != 1 && ans == true) {
    cout << "Prime Number";
  } else {
    cout << "Non Prime Number";
  }
// int HCF = OptimalGcd(n1,n2);


// cout<<HCF<<endl;
   
return 0 ;
}
