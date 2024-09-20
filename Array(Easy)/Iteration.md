# Brute force approach Iterating Through an Array in C++ and comparing

When you have an array and you need to compare each element with every other element, you can achieve this by iterating through the array and comparing each element with the rest. This process typically involves nested loops.



## Example Array
Consider an array of integers:
```cpp
int arr[] = {1, 2, 3, 4, 5};
```

## Iterating and Comparing Elements
To compare each element of the array with every other element, you can use nested loops. Here's how you can do it:

```cpp
for (int i = 0; i < size; ++i) {
    for (int j = i + 1; j < size; ++j) {
        // Compare arr[i] with arr[j]
        // For example:
        if (arr[i] == arr[j]) {
            // Do something if arr[i] is equal to arr[j]
        }
    }
}
```

In the outer loop, `i` iterates through each element of the array. In the inner loop, `j` iterates from `i + 1` to the end of the array, comparing each element with the element at index `i`. This ensures that each element is compared with every other element exactly once, avoiding redundant comparisons (e.g., comparing element 1 with element 2 and later comparing element 2 with element 1).

```cpp
 vector<int> topper(vector<int>& arr) {
        //code here 
        vector<int> res;

        //optimal approach
        int n = arr.size();
        int maxi = arr[n-1];
        res.push_back(maxi);
        for(int i = n-2;i>=0;i--){
            if(arr[i]>maxi){
                res.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        //brute force approach
        for(int i = 0; i<n;i++){
            int flag = 0;
                for(int j = i+1;j<n;j++){
                    
                    if(arr[i]<=arr[j]){
                        flag = 1;
                    }   
                }
            if(flag == 0){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
```

## Summary
Iterating through an array and comparing each element with every other element is achieved by using nested loops. By carefully setting the loop conditions, you can ensure that each element is compared exactly once with all other elements, optimizing the comparison process.
