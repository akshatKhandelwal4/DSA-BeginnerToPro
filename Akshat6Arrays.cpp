                                //Arrays
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     // take array input from user 
//     int n;
//     cin>>n;

//     int input[100];

//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }
    
//     // Print array
//     for(int i=0;i<n;i++){
//         cout<<input[i]<<endl;
//     }

//     // laegest element in the array
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(input[i]>max){
//             max=input[i];
//         }
//     }
//     cout<<"Maximum element:"<<max<<endl;
// }



/*    Given an array of length N, you need to find and print the sum of all elements of the array.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^6      */

// #include<iostream>
// using namespace std;

// int main(){
//     /* Read input as specified in the question.
//      * Print output as specified in the question.
//      */
//     int n;
//     cin>>n;
//     int sumArray=0;

//     int input[1000000];

//     for(int i=0;i<n;i++){
//         cin>>input[i];
//         sumArray+=input[i];
//     }
//     cout<<sumArray<<endl;
    
// }




                          //How arrays are stored 
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     a=5;

//     int arr[10];
//     arr[3]=23;

//     cout<<arr[3]<<endl;
//     cout<<arr<<endl;    // gives the memory address of arr in the form of hexademical format
//     cout<<sizeof(a)<<endl;
//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(double)<<endl;

// }



// #include<iostream>
// using namespace std;

// void printArray(int input[]){
//     cout<<sizeof(input)<<endl;   //it will give the size of address bytes which is req. to save it
// }

// int main(){
//     int n;
//     cin>>n;
//     int input[100];

//     cout<<input<<endl;

//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }

//     cout<<input<<endl;           //gives the memory address at 0
//     cout<<"Main"<<" "<<sizeof(input)<<endl;     //it will give the size of input array
//     printArray(input);       // it will pass the address of input 

// }


// #include<iostream>
// using namespace std;

// void printArray(int input[],int n){
//     cout<<"Print: ";
//     for(int i=0;i<n;i++){
//         cout<<input[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
    
//     cout<<"Enter Array elements: ";
//     int input[100];
//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }

//     printArray(input,n);

// }



// #include<iostream>
// using namespace std;

// void func(int a[]) {
// }

// int main() {
//     int a[10];
//     // Call function "func" and pass array a 
//     func(a);
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int a[10];
//     cout << sizeof(a) << endl;
// }



// #include<iostream>
// using namespace std;

// void func(int a[]) {
//     cout << sizeof(a) << endl;
// }

// int main() {
//     int a[10];
//     func(a);
// }




/*
You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for
the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. If X has multiple 
occurrences in the array/list, then you need to return the index at which the first occurrence of X would
be encountered. In case X is not present in the array/list, then return -1.
'Linear search' is a method for finding an element within an array/list. It sequentially checks each 
element of the array/list until a match is found or the whole array/list has been searched.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains the value of X(integer to be searched in the given array/list)
Output format :
For each test case, print the index at which X is present or -1, otherwise.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
-2 ^ 31 <= X <= (2 ^ 31) - 1
Time Limit: 1 sec         
*/

// // #include <iostream>
// // using namespace std;
// // #include "solution.h"

// // int main()
// // {
// // 	int t;
// // 	cin >> t;
// // 	while (t--)
// // 	{
// // 		int n;
// // 		cin >> n;
// // 		int *arr = new int[n];
// // 		for (int i = 0; i < n; ++i)
// // 		{
// // 			cin >> arr[i];
// // 		}
// // 		int val;
// // 		cin >> val;
// // 		cout << linearSearch(arr, n, val) << endl;
// // 	}
// // 	return 0;
// // }



// #include<iostream>
// using namespace std;
// int linearSearch(int *arr, int n, int x)
// {
//     //Write your code here
//     for(int i=0;i<n;i++){
//         if(x==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
//
// int main(){
//     int t;
//     cin>>t;
//     for (int i = 1; i <= t; i++) {
//       int n;
//       cin >> n;
//       int arr[10000];
//       for(int j=0;j<n;j++){
//           cin>>arr[j];
//       }
//       int x;
//       cin>>x;
//       int ans=linearSearch(arr,n,x);
//       cout<<ans<<endl;
//     }
// }




/*
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and 
you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the 
order - 1,3,5,.......,6,4,2.
Note:
You need not print the array. You only need to populate it.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

The first and the only line of each test case or query contains an integer 'N'.
Output Format :
For each test case, print the elements of the array/list separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4

Time Limit: 1sec            */

// #include<iostream>
// using namespace std;

// void arrange(int *arr, int n)
// {
//     //Write your code here
//     int left=0,right=n-1;
//     int value = 1;
//     while(left<=right){
//         if(value%2==1){
//             arr[left]=value;
//             value++;
//             left++;
//         }
//         else{
//             arr[right]=value;
//             value++;
//             right--;
//         }
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         int n;
//         cin>>n;
//         int arr[10000];
//         arrange(arr,n);
//         for(int j=0;j<n;j++){
//             cout<<arr[j]<<" ";
//         }
//     }
// }


                    //approach 2
// void arrange(int *arr, int n){
// if(n%2!=0){
//         for(int i=0;i<=n/2;i++){
//             arr[i]=2*i+1;
//         }
//         for (int i= n-1, j=1;i>n/2;i--,j++) { 
//             arr[i]=2*j;   
//         }
//     }else{
//         for(int i=0;i<n/2;i++){
//             arr[i]=2*i+1;
//         }
//         for (int i=n-1,j=1;i>=n/2;i--,j++) {
//             arr[i]=2*j;
//         }
//     }
// }



                 //Array Decleration and Passing array to functions
/*#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3};      
    int arr1[100]={1,2,3};
    int arr2[10]={1,2,3};
    int arr3[10]={5};
    int arr4[100]={0};    //initalize zero array 
    printArray(arr1,100); 
}



#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void increament(int a,int b[],int n){
    a++;
    b[0]++;
}

int main(){
    int a=10;
    int b[10]={1,2,3};
    increament(a,b,10);

    cout<<"a : "<<a<<endl;      //change in var in other function will not effect the val of main
    cout<<"b[0] : "<<b[0]<<endl;  //change in array in any function will reflect everyehere

    printArray(b,10);
}*/




                     //Reverse Array
/*#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,n);
    printArray(arr,n);

}*/




/*
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in 
the array/list.
You don't need to print or return anything, just change in the input array itself.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the elements of the resulting array in a single row separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec             */

/*#include<iostream>
using namespace std;

void swap(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

             approach 2
void swapAlternate(int *arr, int size)
{

    int i=0,j=1;
    if(size%2==0){
        while(i<size){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=2;
        j+=2;
    }
    }else{
        while(i<size-1){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=2;
        j+=2;
        }
    }  
}*/



/*      You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
 Note:
Unique element is always present in the array/list according to the given condition.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the unique element present in the array.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec        */

/*#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    
    int ans = 0;

    for(int i=0; i<n; i++){
        ans ^= arr[i];
    }
    return ans;
        //aproach 2
    // for(int i=0;i<n;i++){
    //     int val=arr[i];
    //     int count=1;

    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             continue;
    //         }else if(val==arr[j]){
    //                count++;
    //         }
    //     }if(count==1){
    //         return val;
    //     }
    //}
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int arr[100];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=findUnique(arr,n);
        cout<<ans<<endl;     
    }
}*/




                            //Unique Number of Occurrences
/*Given an array of integers arr, return true if the number of occurrences of each value in the array is 
unique or false otherwise.
Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of 
occurrences.                      */

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool uniqueOccurrences(vector<int>& arr){
    vector<int> ans;

    sort(arr.begin(), arr.end());

    int i = 0;
    while(i < arr.size()){
        int count = 1;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]  == arr[j]){
                count++;
            }
            else{
                break;
            }
            ans.push_back(count);
            i += count;
        }
    }
    sort(ans.begin(), ans.end());

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]);
        return false;
    }
    return true;
}*/




/*You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2).
Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
Note :
Duplicate number is always present in the given array/list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the duplicate element in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec                   */

/*#include <iostream>
using namespace std;

 //#include "solution.h"

int duplicateNumber(int *arr, int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        ans ^= arr[i];
    }

    for(int i=1; i<size; i++){
        ans ^= i;
    }
    return ans;
}
//          approach 2
// int duplicateNumber(int *arr, int size)
// {
//     //Write your code here
//     for(int i=0;i<size;i++){
//         int val=arr[i];
//         for(int j=i+1;j<size;j++){
//             if(val==arr[j]){
//                 return val;
//             }
//         }
//     }
// }

int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}*/




/*       You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You 
need to print their intersection; An intersection for this problem can be defined when both the arrays/
lists contain a particular value or to put it in other words, when there is a common value that exists 
in both the arrays/lists.
Note :
Input arrays/lists can contain duplicate elements.
The intersection elements printed would be in the order they appear in the first array/list(ARR1)

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first the array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output format :
For each test case, print the intersection elements in a row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1 sec             */

/*#include<iostream>
#include<climits>
using namespace std;

void intersection(int arr[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n,m;
        cin>>n>>m;
        int arr[100000];
        int arr2[100000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        intersection(arr,arr2,n,m);
    }
}*/



/*     You have been given an integer array/list(ARR) and a number X. Find and return the total number of 
pairs in the array/list which sum to X.
Note:
Given array/list can contain duplicate elements. 
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains an integer 'X'.
Output format :
For each test case, print the total number of pairs present in the array/list.
Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9
Time Limit: 1 sec            */

/*#include<iostream>
using namespace std;

int pairSum(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int arr[100000];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        int ans=pairSum(arr,n,x);
        cout<<ans<<endl;
    }
}*/



/*    You have been given a random integer array/list(ARR) and a number X. Find and return the number of 
triplets in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.
Output format :
For each test case, print the total number of triplets present in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 50
0 <= N <= 10^2
0 <= X <= 10^9
Time Limit: 1 sec          */

/*#include<iostream>
using namespace std;t595bfvhy

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int tripletSum(int arr[],int n,int x){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count ++;
                }
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        int n;
        cin >> n;

        int arr[100000];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        //printArray(arr,n);
        int x;
        cin >> x;
        int ans = tripletSum(arr, n, x);
        cout << ans << endl;
    }
}*/




                                 //3Sum
/*You are given an array/list ARR consisting of N integers. Your task is to find all the distinct
triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices 
i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then 
{2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random
i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for 
such a test case will be "-1".
Sample Input 1:
1
5
10 5 5 5 2
12
Sample Output 1:
5 5 2
Explanation for Sample Input 1:
5 5 2 is the only triplet that adds up to 15. Note that the order of the output doesn’t matter, 
so 5 2 5 or 2 5 5 is also acceptable.*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K){
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());
    
    
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}




/*You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. 
Write a function to sort this array/list. Think of a solution which scans the array/list only once and 
don't require use of an extra array/list.
Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers(all 0s and 1s) representing the elements in the 
array/list.
Output format :
For each test case, print the sorted array/list elements in a row separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec                 */

/*#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int n){
    int i=0,j=n-1;
    for(;i<j;i++){
        if(arr[i]==1){
            for(;j>i;j--){
                if(arr[j]==0){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
                continue;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,n);
        printArray(arr,n);

    }
}*/

               //Approach 2nd
/*void sort(int arr[],int n){
    int nextZero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=arr[nextZero];
            arr[nextZero]=arr[i];
            arr[i]=temp;
            nextZero++;
        }
    }
}*/



                        //Sort 0,1,2
/*#include<iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int n){
    int s = 0, m = 0, e = n-1;

    while(m <= e){
        if(arr[m] == 0){
            swap(arr[s], arr[m]);
            s++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else{
            swap(arr[m], arr[e]);
            e--;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sortZeroOneTwo(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}*/

