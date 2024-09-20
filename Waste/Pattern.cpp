#include <bits/stdc++.h>
using namespace std;


void pattern1(int n){

    for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
        cout<<"* ";
       }

        cout<<endl;
    }
    
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){

        
           for(int j=0;j<n-i-1;j++){
            cout<<" ";
           }
            int star  =2*i+1;
            for(int j=0;j<star;j++){
                cout<<"*";
            }

            for(int j=0;j<n-i-1;j++){
            cout<<" ";
           }
   
        cout<<endl;
    }
}

void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}
void pattern10(int n){

    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n -i;
        for(int j = 1;j<=stars;j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}

void pattern11(int n){

    int start=1;
    for(int i=0;i<n;i++){
        if(i%2 == 0) start = 1;
        else start = 0;
       for(int j=0 ; j<=i;j++){
        cout<<start<<" ";
        start= 1-start;
       }

        cout<<endl;
    }
}

void pattern12(int N)
{

      int spaces = 2*(N-1);
      for(int i=1;i<=N;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          spaces-=2;
      }
}

void pattern13(int n)
{
      int start = 1;
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<start<<" ";
              start+=1;
          }
          cout<<endl;
      }
}

void pattern14(int n)
{
      
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
            char a = 'A'+i;
         int num = n-1-i;
          for(char ch='A';ch<='A'+num;ch++){
              
              cout<<a<<" ";
          }
          cout<<endl;
      }
}

void pattern15(int n)
{
      
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
            char a = 'A'+i;
         int num = i;
          for(char ch='A';ch<='A'+num;ch++){
              
              cout<<a<<" ";
          }
          cout<<endl;
      }
}

void pattern16(int n){

    for(int i= 0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
      
        //Character
        char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int n)
{
      
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
         
          for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
              cout<<ch<<" ";
          }
          cout<<endl;
      }
}

void pattern18(int n)
{
      
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
         
          for(char ch=('A'+n-1);ch>=('A'+n-1)-i;ch--){
              cout<<ch<<" ";
          }
        // for(int j = n;j>=n-i;j--){
        //     cout<<j;
        // }
          cout<<endl;
      }
}
void pattern19(int n)
{
  
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
        //   //first 
        for(int j=i;j<=n;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*i-2;j++){
                cout<<" ";
        }
        //   //last 
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
          cout<<endl;
      }
}
void pattern20(int n)
{
  
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
        //   //first 
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*n - 2*i-2;j++){
                cout<<" ";
        }
        // //   //last 
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
          cout<<endl;
      }
}

void pattern21(int n)
{
 int ints = 2*n -2;
      // Outer loop for the number of rows.
      for(int i=1;i<=2*n-1;i++){
       
          
        //stars
          int star = i;
          if(i>n) star = 2*n-i;
          for(int j = 1 ; j<=star;j++){ 
            
            cout<<"*";
          }
          //space
            for(int j = 1;j<=ints;j++){
                cout<<" ";
            }

        //stars
          if(i>n) star = 2*n-i;
          for(int j = 1 ; j<=star;j++){
            
            cout<<"*";
          }
          if(i>=n){
            ints+=2;
          }else{
            ints-=2;
          }
          
        
          cout<<endl;
      }
}

void pattern22(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-1||i==n-1){
                cout<<"*";
            }
            
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
}

void pattern23(int n){

    for(int i=0;i<2*n-1;i++){
       
            for(int j=0;j<2*n-1;j++){

              int top = i;
             int bottom = j;
    

             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;

           
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
            ;
            }
            
            
        
        cout<<endl;
    }
}

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

int main(){



int n;
cin >>n;

// int* divisors = printDivisors(n);
    
//     // Don't forget to free the dynamically allocated memory
//     delete[] divisors;

    printDivisorsOptimal(n);
// cout<<"Original Number is :"<<n<<endl;


// bool ans= checkArmstrong(n);
// if(ans==1) cout<<"true";
// else cout<<"false";





    
return 0 ;
}
