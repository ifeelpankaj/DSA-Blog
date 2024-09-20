#include <bits/stdc++.h>
using namespace std;

//Simple Recursion
void print(int i ,int n){
    if(i>n){
        return;
    }
    cout<<"Pankaj !!"<<endl;
    print(i+1,n);
}
//Reverse Number using recursion
void print1(int i ,int n){
    if(i < 1){
        return;
    }
    cout<<i<<endl;
    print1(i-1,n);
}
//Bcktreacking using recursion and print number 
void print2(int i ,int n){
    if(i < 1){
        return;
    }
    print2(i-1,n);
    cout<<i<<endl;
}
//Bcktreacking using recursion and print in reverse order
void print3(int i ,int n){
    if(i > n){
        return;
    }
    print3(i+1,n);
    cout<<i<<endl;
}
//Sum of N number using recursion
void sum(int i ,int s){
    if(i<1){
        cout<< s;
        return;
    }
    sum(i-1,s+i);
}

// functional recursion addition
int  Addtion(int n)
{
    if(n ==0 ) return 0;
    else return n+Addtion(n-1);
}

int Factorial(int n){
   if( n == 1){
    return 1;
   }else return n*Factorial(n-1);
}

// Swapping array using recursion

void RevArray(int i , vector<int>& arr, int n){
    if(i>=n/2) return ;
    else swap(arr[i], arr[n-i-1]);
    RevArray(i+1, arr,n);
}
// Palindrome String using recurssion
bool palindrome(int i,string s){
  int size =s.size();
  if(i >=size/2) return true;
  if(s[i]!=s[size-i-1]) return false;
  return palindrome(i+1,s);
}

int f(int n){
    // if(n<=1){
    //     return n;
    // }
    // int last = f(n-1);
    // int lastSecond = f(n-2);
    // return last+lastSecond;
    int firstTerm = 0, secondTerm = 1;

    std::cout << "Fibonacci Series:\n";

    // Loop to generate the Fibonacci series
    for (int i = 0; i <n; ++i) {
        // std::cout << firstTerm << " ";

        // Update the terms for the next iteration
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    return firstTerm;
}

int duplicate(vector<int>& arr,int num){
    int ctr =0;
    int size=arr.size();
    for(int i = 0; i < size; i++){
        if(arr[i]==num){
            ctr=ctr+1;
        }
    }
    return ctr;
}
string n2s(int n){
    vector<int> values = 
    {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = 
    {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    int size = values.size();
    for (int i = 0; i < size; ++i) {
        while (n >= values[i]) {
            result = result + symbols[i];
            n = n-  values[i];
        }
    }

    return result;

}
void multiply(string num1, string num2) {


        int  n1 = std::stoi(num1);
        int  n2 = std::stoi(num2);

        int n3 = n1*n2;

        

        cout<< n1<<" "<<n2<<" "<<n3;
    }



int main(){
// int n;
// cin >> n;

//Reverse Number using recursion
// print(1,n);
//Reverse Number using recursion
// print1(n,n);
//Bcktreacking using recursion and print number 
// print2(n,n);
//Bcktreacking using recursion and print in reverse order
// print3(1,n);

//Sum of N number using recursion
// sum(n,0);

//   cout<<Addtion(n);
// cout<<Factorial(n);
// vector<int> array(n);

// for(int i=0;i<n;i++){
//     cin>>array[i];
// }
// RevArray(0,array,n);
// for(int arr:array){
//     cout<<arr<<" ";
// }
//  string s ;
//  cin>>s;

// cout<<palindrome(0,s);
// int n =10;
// cout<<f(n);
// vector<int> numbers = {10, 20, 30, 40, 50,30,70,60,10,10};

// cout<<duplicate(numbers,10);

// int n;
//     cin >> n;
//     vector<int> array(n);
//     for (int i = 0; i < n; i++) {
//         cin >> array[i];
//     }

//     //precompute:
//     int hash[100] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[array[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     for(int j=0;j<q;j++) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
// int n =1534236469;
// cout<<extractNum(n);

// cout<<n2s(58);

int n;
cin>>n;


cout<<"Orginal Number :"<<n<<endl;


return 0 ;
}
