                         //Opearators and for loop
          // Bitwise Operator
// #include<iostream>
// using namespace std;

// int main(){
//     int ror = 15 | 30;
// 	int rand = 15 & 30;
// 	int rnot = ~15;
// 	int rxor = 15 ^ 30;
// 	int rls = 15 << 2;
// 	int rrs = 15 >> 2;

// 	cout << ror << endl;
// 	cout << rand << endl;
// 	cout << rnot << endl;
// 	cout << rxor << endl;
// 	cout << rls << endl;
// 	cout << rrs << endl;
// }



        
		 // Increament and Decreament Operator
// #include<iostream>
// using namespace std;

// int main(){
// 	int a=10;
// 	cout<<++a<<endl;
// 	cout<<a++<<endl;

// 	cout<<a<<endl;

// 	cout<<--a<<endl;
// 	cout<<a--<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
// 	int a=10;
// 	a+=3;
// 	a*=2;

// 	cout<<a<<endl;

// 	cout<<a--<<endl;
// 	cout<<--a<<endl;	
// }


// #include<iostream>
// using namespace std;

// int main(){
// 	int a=2*3+4;
// 	int b=10*5/9;

// 	cout<<a<<endl;
// 	cout<<b<<endl;

// 	int c=(10*5)/9;       //we will use brackets in such cases
// 	cout<<c<<endl;
// }


// #include <iostream>
// using namespace std;
// int main(){
// 	int x, y = 1;
//     x = 10;
//     if (x != 10 && x / 0 == 0){
// 		cout << y;
// 	}else{
// 		cout << ++y;
// 	}
// } 
/*Even though you get the output as '2', you'll also get a "division by zero" warning. The reason you only 
get a warning but not an error is short-circuit evaluation. In the if statement, once the first condition
(x != 10) is evaluated to be false, then the second condition (x / 0 == 0) is not even executed because
the result of the overall condition (x != 10 && x / 0 == 0) will be false.
Even if the second condition were true, it would not change the overall result of the two conditions.
However, if the value of x or the first condition itself is changed so that it evaluates to true,then you
will get an error because in that case the second condition would also be checked (or executed).*/


// #include <iostream>
// using namespace std;
// int main()
// {   
//     int x = 15;
//     int y = x++;
//     int z = ++x;
//     cout << y <<" "<< z;
// }


// #include <iostream>
// using namespace std;
// int main(){
// 	int g = 3;
//     cout << (++g * 8);
// } 


// #include <iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int y = 20;
//     if(x++ > 10 && ++y > 20 ){
//     cout << "Inside if ";
//     } else{
//     cout << "Inside else ";
//     }
//     cout << x <<" "<< y;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     int y = 20;
//     if(x++ > 10 || ++y > 20 ){
//     cout << "Inside if ";
//     } else{
//     cout << "Inside else ";
//     }
//     cout << x << " " << y;
// }


// #include<iostream>
// using namespace std;

// int main(){
// 	int a=10,b=20,c=30;
//                     //(c>b>a) is treated as ((c>b)>a), associativity of '>' is left to right.
// 	if(a>b>c){   //Therefore, the value becomes ((30>20)>10). Since (30>20) is true thus its answer is 1.      
// 		cout<<"True"<<endl;       // So the expression becomes (1 > 20)
// 	}else{                        
// 		cout<<"False"<<endl;
// 	}
// 	return 0;
// }



                     //For loop
// #include<iostream>
// using namespace std;

// int main(){
// 	int n;
// 	cout<<"Enter the value"<<endl;
// 	cin>>n;

// 	for(int i=1;i<=n;i++){
// 		cout<<i<<endl;
// 	}
// 	cout<<"Done"<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
// 	int m,n;
// 	cout<<"Enter the value of m and n"<<endl;
// 	cin>>m>>n;

// 	for(;m<=n;m++){
// 		cout<<m<<endl;
// 	}
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     bool isPrime=1;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//         }
//     }
//     if(isPrime==0){
//         cout<<"Not Prime"<<endl;
//     }else{
//         cout<<"Prime"<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i=0,j=4;i<5&&j>=0;i++,j--){
//         cout<<i<<" "<<j<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     for(int i = 0; i < 5; i = i + 1){
//     cout << i << " ";
//     i = i + 1;
// }
// }


/*  // for(int i = 1; i < 5; i = i + 1){
//     cout << i << " ";                       //infinite 1s
//     i = i - 1;
// }    */


// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             if(j==1){
//                 break;
//             }
//             cout<<j<<" ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     for(int i=0;i<5;i++){
//         if(i==2){
//             continue;
//         }
//         cout<<i<<" ";
//     }
// }



/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.  */

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value"<<endl;
//     cin>>n;
//     int a=0,b=1;

//     for(int i=0;i<n;i++){
//         int c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<a<<endl;
// }


               //break and continue keyword
        //break keyword

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         if(i==4){
//             break;
//         }
//         cout<<i<<endl;
//     }
//     cout<<"Done"<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//         if(i==4){
//             break;
//         }
//     }
//     cout<<"Done"<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     bool divided=1;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             divided=0;
//             break;
//         }    
//     }
//     if(divided==0){
//         cout<<"Not Prime"<<endl;
//     }else{
//         cout<<"Prime"<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         if(i==4){
//             break;
//         }
//         cout<<i<<endl;
//         i++;
//     }
//     cout<<"Done"<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j>i){
//                 break;
//             }
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//             if(j>i){
//                 break;
//             }
//         }
//         cout<<endl;
//         i++;
//     }
// }



              //continue keyword
// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i=1;i<=10;i++){
//         if(i==7){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         if(i==4){
//             i++;
//             continue;
//         }
//         cout<<i<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     while(i<5){
//         if(i==3){
//             break;
//         }
//         cout<<i<<" ";
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     while(i<5){
//         if(i==3){
//             //i++;
//             continue;
//         }
//         cout<<i<<" ";
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     while(i<3){
//         int j=1;
//         while(j<5){
//             if(j==3){
//                 break;
//             }
//             cout<<j<<" ";
//             j++;
//         }
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
// while(i < 3) {
//     int j = 0;
//     while(j < 5) {
//         j++;
//         if(j == 3) {
//             continue;
//         }
//         cout << j << " ";
//     }
//     i++;
// }
// }



/*  Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines     */

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter The Value"<<endl;
//     cin>>n;

//     for(int i=2;i<=n;i++){
//         bool divided=false;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 divided=true;
//                 break;
//             }
//         }
//         if(divided==false){
//             cout<<i<<endl;
//         }
//     }
// }



                //Scope of Variables
// #include<iostream>
// using namespace std;

// int main(){
//     int i=10;
//     cout<<i<<endl;

//     if(i==10){
//         int j=2;
//         cout<<j<<endl;
//     }
//     //cout<<j<<endl;     //j is not accessable here
//     cout<<i<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int k=1;
//     while(k<100){
//         int k2=1000;
//         cout<<k2<<endl;
//         k++;
//     }
//     //cout<<k2<<endl;       //k2 is not available here
// }


              //in case of for loop
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl;
//     }
//     //Not Accessable here
//     //cout<<i<<endl;
// }

//but if we wanna access outside for loop the we can do it as 
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     for(;i<=10;i++){
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     if(a > 5) {
//         int a = 100;
//     }
//     else {
//         int a = 110;
//     }
//     cout << a << endl;
// }


// #include <iostream>
// using namespace std; 
// int main() {
//     int a = 10;
//     while(a > 5) {
//         int a = 1;
//         cout << a << " ";
//         a--;                   
//     }
// }



           //cin Vs cin.get
// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cin>>ch;
//     int count=0;
//     while(ch!='$'){
//         count++;
//         cin>>ch;                 //cin can't able to count enter or spaces, it ignores that
//     }
//     cout<<count<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     ch=cin.get();          //if we wanna count \n,\t,spaces then we will use cin.get()
//     int count =0;
//     while(ch!='$'){
//         count++;
//         ch=cin.get();
//     }
//     cout<<count<<endl;
// }



/*
Write a program to count and print the total number of characters (lowercase english alphabets only),
digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are 
entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2
Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
*/

// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     ch=cin.get();
//     int characters=0;
//     int digits=0;
//     int spaces=0;

//     while(ch!='$'){
//         if(ch>='a' && ch<='z'){
//             characters++;
//         }else if(ch>='0' && ch<='9'){
//             digits++;
//         }else if(ch==' '|| ch=='\t' || ch=='\n'){
//             spaces++;
//         }
//         ch=cin.get();
//     }
//     cout<<characters<<" "<<digits<<" "<<spaces<<endl;
// }




/*  Write a program that asks the user for a number N and a choice C. And then give them the possibility 
to choose between computing the sum and computing the product of all integers in the range 1 to N 
(both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)    */

// #include<iostream>
// using namespace std;

// int main(){
//     int n,choice;
//     cout<<"Enter the No. and choice"<<endl;
//     cin>>n>>choice;
//     int sum=0;
//     int product=1;

//     if(choice==1){
//         for(int i=1;i<=n;i++){
//             sum+=i;
//         }
//         cout<<sum<<endl;
//     }else if(choice==2){
//         for(int i=1;i<=n;i++){
//             product*=i;
//         }
//         cout<<product<<endl;
//     }else{
//         cout<<"-1"<<endl;
//     }  
// }




/*  Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.  */

// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     cin>>x;
//     int n=1;
//     int count=0;

//     while(count!=x){
//         int s=3*n+2;
//         if(s%4!=0){
//             cout<<s<<" ";
//             count++;
//         }
//         n++;
//     }
// }




/*     Write a program to generate the reverse of a given number N. 
Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. 
For e.g., reverse of 10400 will be 401 instead of 00401.      */

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int rev=0;

//     for(int i=n;i>0;i/=10){
//         int last=i%10;
//         rev=rev*10+last;
//     }
//     cout<<rev<<endl;
// }

// int main(){
//     int n;
//     cin>>n;

//     int rev=0;
//     while(n>0){
//         int last=n%10;
//         rev=rev*10+last;
//         n/=10;
//     }
//     cout<<rev<<endl;
// }




/*   Given a binary number as an integer N, convert it into decimal and print. */

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=0;

//     while(n>0){
//         int last=n%10;
//         int k= pow(2,i);
//         int num=k*last;
//         sum=sum+num;
//         i++;
//         n/=10;
//     }
//     cout<<sum<<endl;
// }





/*     Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer 
range. So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that 
function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement 
your own "pow" function to work for non-float data types.     */


// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     float ans=0;
//     int i=0;

//     while(n!=0){
//         int last_bit=n&1;
//         ans=(last_bit*pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<ans<<endl;
// }




/*   Given a number N, find its square root. You need to find and print only the integral part of square 
root of N.
For eg. if number given is 18, answer is 4.   */

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i=0;
//     while(i<=n){
//         int root=i*i;
//         if(root==n){
//             cout<<i<<endl;
//             break;
//         }else if(root>n){
//             cout<<--i<<endl;
//             break;
//         }
//         i++;
//     }
// }




/* You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S
into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part 
is strictly decreasing while the second is strictly increasing one.
Note : We say that x is strictly larger than y when x > y.
So, a strictly increasing sequence can be 1 4 8. However, 1 4 4 is NOT a strictly increasing sequence.


That is, in the sequence if numbers are decreasing, they can start increasing at one point. Thereafter, 
they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So, in both 
the cases, print true.


You just need to print true/false. No need to split the sequence.
Input format :
Line 1 : Integer 'n'
Line 2 and Onwards : 'n' integers on 'n' lines(single integer on each line)
Output Format :
"true" or "false" (without quotes)     */

// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int prev, curr;
//        cin>>prev;
//        int count = 2;
//        bool isDec = true;

//        while(count <= n){
//               cin>>curr;

//               if(prev == curr){
//                      cout<<"false"<<endl;
//                      return 0;
//               }
//               if(curr < prev){
//                      if(isDec == false){
//                             cout<<"flase"<<endl;
//                             return 0;
//                      }
//               }else{
//                      if(isDec == true){
//                             isDec == false;
//                      }
//               }
//               prev = curr;
//               count++;
//        }
//        cout<<"true"<<endl;
// }


                           //Decimal to Binary of any number
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//        int n;
//        cin >> n;

//        cout << " Binary representation is: " << bitset<32>(n) << endl;
// }




                       // switch statement 
// #include<iostream>
// using namespace std;

// int main(){
//        int num = 1;

//        switch( num ){
              
//               case 1: cout<<"First"<<endl;
//                       break;

//               case 2: cout<<"Second"<<endl;
//                       break;

//               default: cout<<"Default case"<<endl; 
//        }
// }


// #include<iostream>
// using namespace std;

// int main(){
//        char ch = '1';

//        switch( ch ){
//               case 1: cout<<"First"<<endl;
//               break;

//               case '1': cout<<"Character one"<<endl;
//               break;

//               default: cout<<"Default case"<<endl; 
//        }
// }


// #include<iostream>
// using namespace std;

// int main(){
//        char ch = 'a';

//        switch( ch ){
//               case 1: cout<<"First"<<endl;
//                       cout<<"First Again"<<endl;
//                      break;                         //break is not mandatory, it breaks the switch

//               case '1': cout<<"Character one"<<endl;
//                      break;

//               default: cout<<"Default case"<<endl;          //defualt case is not mandatory
//        }
// }



// #include<iostream>
// using namespace std;

// int main(){
//        int num = 1;
//        char ch = '1';

//        switch(ch){
//               case 1: cout<<"First"<<endl;
//                      cout<<"Akshat Khandelwal"<<endl;
//               break;

//               case '1': cout<<"Second"<<endl;
//                      switch(num){
//                             case 1: cout<<"value of num is: "<<num<<endl;
//                             break;
//                      }
//                      break;

//               default: cout<<"In default case"<<endl;       
//        }
// }



// #include<iostream>
// using namespace std;

// int main(){

//        while(1){
//               int num = 1;
//               char ch = 'a';

//               switch(num){
//                      case 1: cout<<"Akshat Khandelwal"<<endl;
//                      switch(ch){
//                             case 'a': cout<<"Love Babbar"<<endl;
//                             exit(0);        //exit will terminate the whole C++ program
//                      }
//                      break;
//               }
//        }
// }


                    //Siple Calculator Program :->
// #include<iostream>
// using namespace std;

// int main(){
//        int a, b;
//        cout<<"Enter the valur of a and b"<<endl;
//        cin>>a>>b;

//        char operation;
//        cout<<"Enter the operation"<<endl;
//        cin>>operation;

//        switch(operation){
//               case '+': cout<< (a+b) <<endl;
//               break;

//               case '-': cout<< (a-b) <<endl;
//               break;

//               case '*': cout<< (a*b) <<endl;
//               break;

//               case '/': cout<< (a/b) <<endl;
//               break;

//               case '%': cout<< (a%b) <<endl;
//               break;

//               default: cout<<"Enter a valid operation"<<endl;
//        }
// }




// #include<iostream>
// using namespace std;

// int main(){
//        int num = 1;
//        char ch = '1';

//        switch(2*num){
//               case 2: cout<<"First"<<endl;
//                      cout<<"Akshat Khandelwal"<<endl;
//                      break;

//               case '1': cout<<"Second"<<endl;
//                      switch(num){
//                             case 1: cout<<"value of num is: "<<num<<endl;
//                             break;
//                      }
//                      break;

//               default: cout<<"In default case"<<endl;       
//        }
// }


                    //Rupees notes calculation program
/*#include<iostream>
using namespace std;

int main(){
       int amount;
       cout<<"Enter the Total Amount"<<endl;
       cin>>amount;
       int rs100, rs50, rs20, rs1;

       switch(1){
              case 1: rs100 = amount/100;
              amount = amount - rs100*100;

              case 2: rs50 = amount/50;
              amount = amount - rs50*50;

              case 3: rs20 = amount/20;
              amount = amount - rs20*20;

              case 4: rs1 = amount/1;
              cout<<"rs100: "<<rs100<<endl; 
              cout<<"rs50: "<<rs50<<endl;
              cout<<"rs20: "<<rs20<<endl;
              cout<<"rs1: "<<rs1<<endl;
              break;
       } 
}*/




/*     Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second 
largest should be INT_MIN ( - 2^31 ).
Input format :
Line 1 : Total number of elements (n)
Line 2 : N elements (separated by space)           */

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int num;
//        int max = INT_MIN, sec_max = INT_MIN;

//        while(n>0){
//               cin>>num;
//               if(num > max){
//                      sec_max = max;
//                      max = num;
//               }else if(num != max && sec_max < num){
//                      sec_max = num;
//               }
//               n--;
//        }
//        cout<<sec_max<<endl;

// }




