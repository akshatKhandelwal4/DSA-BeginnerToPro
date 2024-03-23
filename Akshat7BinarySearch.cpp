                             //Binary Search
/*   You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. 
Write a function to search this element in the given input array/list using 'Binary Search'. 
Return the index of the element in the input array/list. If the element is not present in the array/list, 
then return -1.
Input format :
The first line contains an Integer 'N', which denotes the size of the array/list.

The second line contains 'N' single space-separated integers representing the elements in the array/list.

The third line contains the value of X to be searched for in the array/list.
Output Format :
Return the index at which X is present for each test case, -1 otherwise.
Constraints :
0 <= N <= 10^6
0 <= X <= 10^9
Time Limit: 1 sec                        */

/*#include<iostream>
using namespace std;

int binarySearch(int input[],int N,int X){
    int start = 0, end = N-1;
    int mid = (start+end)/2;             //Chalaki mid = s+(e-s)/2 -> s+e/2-s/2 -> s/2+e/2

    while(start <= end){            
        if(input[mid] == X){
            return mid;
        }else if(input[mid] > X){
            end = mid-1;
            continue;
        }else if(input[mid] < X){
            start = mid+1;
            continue;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int N;
    cin>>N;

    int input[100000];
    for(int i=0;i<N;i++){
        cin>>input[i];
    }
    int X;
    cin>>X;
    int ans=binarySearch(input,N,X);
    cout<<ans<<endl;
}*/




                         //First and Last Position of an Element In Sorted Array
/*#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int x){
    int s = 0, e = n-1;
    int ans = -1;

    while(s<=e){
        int m = s+(e-s)/2;

        if(arr[m] == x){
            ans = m;
            s = m+1;
        }
        else if(arr[m] > x){
            e = m-1;
        }
        else{
            s = m+1;
        }
    }
    return ans;
}

int firstOcc(int arr[], int n, int x){
    int s = 0, e = n-1;
    int ans = -1;

    while(s<=e){
        int m = s+(e-s)/2;

        if(arr[m] == x){
            ans = m;
            e = m-1;
        }
        else if(arr[m] > x){
            e = m-1;
        }
        else{
            s = m+1;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int x;
        cin>>x;

        cout<<firstOcc(arr, n, x)<<" "<<lastOcc(arr, n, x)<<endl;
    }
}*/



                         //total no. of occurences
/*#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == x){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == x){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n, x;
    cin >> n >> x;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int firstPosi = firstOcc(arr, n, x);
    int lastPosii = lastOcc(arr, n, x);

    int ans = (lastPosii-firstPosi)+1;
    cout << ans << endl;
}*/




                             //Peak in mountain array
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int s = 0, e = n-1;
    while(s<e){
        int mid = s+(e-s)/2;

        if(arr[mid] < arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int n;
    cin>>n;

    int arr[10000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = peak(arr, n);
    cout<<ans<<endl;
}*/




                              //Pivot in an Array
/*#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0, e = n-1;

    while(s < e){
        int mid = s+(e-s)/2;

        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int n;
    cin>>n;

    int arr[10000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = findPivot(arr, n);
    cout<<"Pivot index is: "<<ans<<endl;    
}*/




                            //Search in ratated & sorted Array
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0, e = n-1;

    while(s<e){
        int mid = s+(e-s)/2;

        if(arr[mid] >= arr[0]){
            s  = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int x){

    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[100000];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int ans = findPivot(arr, n);

    if(arr[ans] <= x && x <= arr[n-1]){
        int ans1 = binarySearch(arr,ans,n-1,x);
        cout<<ans1<<endl;
    }
    else{
        int ans2 = binarySearch(arr,0,ans-1,x);
        cout<<ans2<<endl;
    }
}*/



                       //Square root of a number using binary search
/*#include<iostream>
using namespace std;

int sqrtInteger(int x){

    int s = 0, e = x ;
    long long int ans = -1;
    
    while(s<=e){
        long long int mid = s+(e-s)/2;
        long long int sqr = mid*mid;

        if(sqr == x){
            return mid;
        }
        else if(sqr < x){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;    
}

double morePrecision(int n, int precision, int intPart){

    double ans = intPart;
    double factor = 1;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int intPart = sqrtInteger(n);
    
    double result = morePrecision(n,3,intPart);
    cout<<result<<endl;
}*/




                             //Book Allocation Problem
/*#include<iostream> 
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int sCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(arr[i]+pageSum <= mid){
            pageSum += arr[i];
        }
        else{
            sCount++;
            if(sCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    int arr[10000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = allocateBooks(arr, n, m);
    cout << ans << endl;
}*/



                              //Painters Partitation Problem
/*#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int pCount = 1;
    int bDistance = 0;

    for(int i=0; i<n; i++){
        if(arr[i]+bDistance <= mid){
            bDistance += arr[i];
        }
        else{
            pCount++;
            if(k < pCount || arr[i] > mid){
                return false;
            }
            bDistance = arr[i];
        }
    }
    return true;
}

int minArea(int arr[], int n, int k){

    if(n < k){
        return -1;
    }
    int s = 0;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[10000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = minArea(arr, n, k);
    cout << ans << endl;
}*/




                             //Aggressive Cows Problem
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int cowCount = 1;
    int stallsPosi = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]-stallsPosi >= mid){
            cowCount++;
            if(cowCount == m){
                return true;
            }
            stallsPosi = arr[i];
        }
    }
    return false;
}

int findingPosition(int arr[], int n, int m){
    sort(arr, arr+n);
    int s = arr[0];
    int e = arr[n-1];

    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = findingPosition(arr, n, m);
    cout << ans << endl;
}*/




                                //PRATA SPOJ(Cooking Ninjas)
/*#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int dish = 0;
    int tTime = 0;
    for(int i=0; i<n; i++){
        int j = 2;
        tTime = arr[i];
        while(tTime <= mid){
            dish++;
            tTime = tTime+(arr[i]*j);
            j++;
        }
        if(dish >= m){
            return true;
        }
    }
    return false;
}

int cookTime(int arr[], int n, int m){
    sort(arr, arr+n);
    int s = 0;
    int e = ((m*(m+1))/2)*arr[n-1];
    for(int i=0; i<m; i++){
        e += arr[0]*(i+1);
    }

    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        } 
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = cookTime(arr, n, m);
    cout << ans << endl; 
}*/




                              //EKO SPOJ
/*#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    
    int tWood = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > mid){
            tWood = tWood +(arr[i]-mid);
        }
        if(tWood >= m){
            return true;
        }
    }
    return false;
}

int bs(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;

    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = bs(arr, n, m);
    cout << ans << endl;
}*/




                                //Selection Sort
/*#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){            //it's a unstable sorting algo 
    for(int i=0; i<n-1; i++){                    // T.C -> O(n^2)  remains same in best and worst case
        int minIndexz = i;                       // S.C -> O(1)             // Inplace sorting Algo
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndexz]){
                minIndexz = j;
            }
        }
        swap(arr[minIndexz], arr[i]);
    }
}

int main(){
    int n;
    cin>>n;

    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}*/




/*    Provided with a random integer array/list(ARR) of size N, you have been required to sort this array 
using 'Bubble Sort'.
Note:
Change in the input array/list itself. You don't need to return or print the elements.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output format :
For each test case, print the elements of the array/list in sorted order separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec             */

/*#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                   // T.C -> In best case = O(n) {modified bubble sort}         
    }                                        // S.C. -> O(1)              //In worst case = O(n^2)
}                                            // It is an stable sort     //Inplace sorting Algo

void bubbleSort(int arr[],int n){
    for(int i=0; i<n-1; i++){ 
        bool swaping = false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){ 
                swap(arr[j], arr[j+1]); 
                swaping = true;
            }
        }
        if(swaping == false){
            break;  
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);

    printArray(arr,n);
}*/




/* Provided with a random integer array/list(ARR) of size N, you have been required to sort this array 
using 'Insertion Sort'.
 Note:
Change in the input array/list itself. You don't need to return or print the elements.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the elements of the array/list in sorted order separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec                */

/*#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i = 1;                                    // T.C. -> In worst case = O(n^2) 
    while(i < n){                                 //-> In best case = O(n)
        int current = arr[i];                     //S.C. -> O(1)
        int j = i-1;                              //It is stable Algo
        while(j >= 0 && arr[j] > current){        //In-place sorting Algo
            arr[j+1] = arr[j];                    
            j--;
        }
        arr[j+1] = current;
        i++;
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j] > current){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = current;
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
        insertionSort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i] <<" ";
        }
    }
}*/




/*                         Merge two sorted array
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them 
into a third array/list such that the third array is also sorted.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements of the first array/list.
Third line contains an integer 'M' representing the size of the second array/list.
Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec            */

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int ans[]){
    int i = 0;
    int j =0; 
    int k = 0;

    while(i<n && j<m){
        if(arr1[i] > arr2[j]){
            ans[k] = arr2[j];
            k++;
            j++;
        }
        else{
            ans[k] = arr1[i];
            i++;
            k++;
        }
    }

    while(i < n){
        ans[k++] = arr1[i++];
    }

    while(j < m){
        ans[k] = arr2[j];
        j++;
        k++;
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    int arr1[10000];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    int arr2[10000];
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    int ans[10000];

    mergeArray(arr1, n, arr2, m, ans);
    
    for(int i=0; i<n+m; i++){
        cout << ans[i] << " ";
    }
}*/




/*                        Push Zeros to end
You have been given a random integer array/list(ARR) of size N. You have been required to push all the 
zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order 
of the non-zero elements.
Note:
Change in the input array/list itself. You don't need to return or print the elements.
You need to do this in one scan of array only. Don't use extra space.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Output Format :
For each test case, print the elements of the array/list in the desired order separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec                         */

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void pushZeros(int arr[], int n){
    int i = 0;
    int j = 0;

    while(j < n){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    pushZeros(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}*/



                            //Reverse an array
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void getReverse(int arr[], int n){
    int i = 0;
    int j = n-1;

    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    getReverse(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}*/



                               //Rotate array
/*You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given 
array/list by D elements(towards the left).
Note: Change in the input array/list itself. You don't need to return or print the elements.
Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec   */

/*#include<iostream>
using namespace std;

//Approach 1
void rotateArray(int arr[], int n, int d){
    for(int i=0; i<d; i++){
        int save = arr[0];

        int j=1;
        for(; j<n; j++){
            arr[j-1] = arr[j];
        }

        arr[j-1] = save;
    }
}*/

//Approach 2
/*void rotateArray(int arr[], int n, int d){
    int i = 0;
    int j = n-1;
    while(i <= j){
        swap(arr[i++], arr[j--]);
    }

    i = 0;
    j = d-1;
    while(i <= j){
        swap(arr[i++], arr[j--]);
    }

    i = n-d-1;
    j = n-1;
    while(i <= j){
        swap(arr[i++], arr[j--]);
    }
}*/

//Approach 3
/*void rotateArray(int arr[], int n, int d){
    int save[d];

    int i = 0;
    int j = d-1;
    int k = 0;
    while(i <= j){
        save[k++] = arr[i++];
    }    

    i = d;
    j = 0;
    while(i < n){
        arr[j++] = arr[i++];
    }

    i = n-d;
    j = 0;
    while(i < n){
        arr[i++] = save[j++];
    }
}*/

//Approach 4
// void rotateArray(vector<int> arr, int n, int d){
//     vector<int>save[n];
//     int i = 0;
//     while(i < n){
//         save[(i+d)%n] = arr[i++];
//         i++;
//     }
//     arr = save;
// }


/*int main(){
    int n, d;
    cin >> n >> d;

    int arr[10000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    rotateArray(arr, n, d);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}*/



                           //Second Largest in array
/*You have been given a random integer array/list(ARR) of size N. You are required to find and return 
the second largest element present in the array/list.
Constraints :
0 <= N <= 10^2
1<=arr[i]<=10^3

Time Limit: 1 sec  */

/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int secondMax(int arr[], int n){
    int max = INT_MIN;
    int s_max = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            s_max = max;
            max = arr[i];
        }
        else if(arr[i] > s_max && arr[i] != max){
            s_max = arr[i];
        }
    }
    return s_max;
}

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans =  secondMax(arr, n);
    cout << ans << endl;

}*/




                            //Check Array Rotation
/*You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and 
then rotated by some number 'K' (K is greater than 0) in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the 
array/list has been rotated.

Constraints :
1 <= t <= 10^2
2 <= N <= 10^5
Time Limit: 1 sec*/

/*#include<iostream>
using namespace std;

int rotateIndex(int arr[], int n){

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return i+1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = rotateIndex(arr, n);
    cout << ans << endl;
}*/



/*Given an array nums, return true if the array was originally sorted in non-decreasing order, then 
rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that
 A[i] == B[(i+x) % A.length], where % is the modulo operation.*/

/*#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();
    for(int i=1; i<n; i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }
    if(nums[0] < nums[n]){
        count++;
    }

    return count<=1;         
}*/


                                 //Sum of Two Arrays
/*Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the 
arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea 
here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result 
in another array/list i.e. output array/list will also contain only single digit at every index.
Note: The sizes N and M can be different. 
Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the bigger array/list. Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.
Using the function "sumOfTwoArrays", write the solution to the problem and store the answer inside this 
output array/list. The main code will handle the printing of the output on its own.*/

/*#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){
    vector<int> ans;

    int i = n-1;
    int j = m-1;
    int carry = 0;

    while(i>=0 && j>=0){
        int sum = a[i]+b[j]+carry;
        carry = sum/10;
        ans.push_back(sum%10);
        i--;
        j--;
    }

    while(i >= 0){
        int sum = a[i]+carry;
        carry = sum/10;
        ans.push_back(sum%10);
        i--;
    }

    while(j >= 0){
        int sum = b[j]+carry;
        carry = sum/10;
        ans.push_back(sum%10);
        j--;
    }

    ans.push_back(carry);
    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
    int n, m;
    vector<int> arr1(n);
    vector<int> arr2(m);

    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    int result = findArraySum(arr1,n,arr2,m);

    cout << result << endl;
}*/