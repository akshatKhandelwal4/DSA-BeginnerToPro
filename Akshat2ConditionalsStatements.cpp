                         //Conditionals{only if, nested if, if-else, if-esle if}
/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values"<<endl;             
    cin>>a>>b;
    if(a==b){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater"<<endl;
    }
    cout<<"Nothing"<<endl;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values"<<endl;
    cin>>a>>b;
    if(a==b){
        cout<<"equal"<<endl;
    }
    else{
        if(a>b){
            cout<<"a is greater"<<endl;
        }
        else{
            cout<<"a is smaller"<<endl;
        }
    }
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        if(b%2==0){
            cout<<"b is even"<<endl;
        }else{
            cout<<"b is odd"<<endl;
        }
    }else{
        cout<<"a is smaller"<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the values"<<endl;
    cin>>a>>b;
    if(a==b){
        cout<<"Equal"<<endl;
    }
    else if(a>b){
        cout<<"a is greater"<<endl;
    }
    else{
        cout<<"a is smaller"<<endl;
    }
} 
*/


/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"1"<<endl;
    }
    else if(ch>='a' &&ch<='z'){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
*/


/*
#include <iostream>
using namespace std;
int main() {
    int x = 15;
    if(x <= 15) {
        cout << "Inside if ";
    } else if(x == 15) {
        cout << "Inside else if ";
    }
    cout << x;
}
*/


// #include <iostream>
// using namespace std; 
// int main(){
//     int var1 = 5; 
//     int var2 = 6;
//     if ((var2 = 1) == var1)
//         cout << var2<<endl;
//     else 
//         cout  << (var2 + 1); 
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10, b = 20, c = 30;
//     if(a <= b && !b) {
//         cout << "hello";
//     }
//     else if(c >= a && c >= b) {
//         cout << "hi";
//     }
//     else {
//         cout << "hey";
//     }
// }

/*
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Equal"<<endl;
    }else{
        cout<<"Not Equal"<<endl;
    }
    cout<<"May be a is greater or not"<<endl;
    return 0;                                   // return keyword
    cout<<"May be a is even"<<endl;
    cout<<"maybe b is odd"<<endl;
}
*/



                       // While loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     int i=1;

//     while(i<=n){
//         cout<<i<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     int i=1,sum=0;

//     while(i<=n){
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<sum<<endl; 
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     int i=2,sum=0;

//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<sum<<endl; 
// }



/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form. The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 */
/*
#include<iostream>
using namespace std;
int main(){
    int s,e,w;
    float f;
    cout<<"enter values"<<endl;
    cin>>s>>e>>w;
    while(s<=e){
        f=(s-32)*5.0/9;
        cout<<s<<"  "<<f<<endl;
        s=s+w;
    }
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no."<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"prime for"<<i<<endl;
        }else{
            cout<<"not prime for"<<i<<endl;
        }
        i+=1;
    }
}
*/


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     int i = 2;
//     bool divided = false;
//     while(i<n){
//         if(n%i == 0){
//             divided = true;
//         }
//         i=i+1;
//     }
//     if(!divided){
//         cout<<"Prime"<<endl;
//     }else{
//         cout<<"Not Prime"<<endl;
//     }
// }



                             //PATTERNS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value"<<endl;
//     cin>>n;
//     int i,j;
//     i=1;
//     while(i<=n){
//         j=1;
//         while(j<=i){
//             cout<<j;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value"<<endl;
//     cin>>n;
//     int i=1;
//     int var=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<var;
//             j++;
//             var++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     int var=1;
//     while(i<=n){
//         int k=1;
//         while(k<=n-i){
//             cout<<" ";
//             k++;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<var;
//             j++;
//             var++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int var=i;
//         int j=1;
//         while(j<=i){
//             cout<<var;
//             j++;
//             var++;
//         }
//         cout<<endl;
//         i++;
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value"<<endl;
//     cin>>n;
//     int i=1;
//     int var=i;
//     while(i<=n){
//         int k=1;
//         while(k<=n-i){
//             cout<<" ";
//             k++;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<var;
//             j++;
//             var++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value"<<endl;
//     cin>>n;
//     int i=1;
//     int var=i;
//     while(i<=n){
//         int k=1;
//         while(k<=n-i){
//             cout<<" ";
//             k++;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//             var++;
//         }
//         int m=1;
//         while(m<=i-1){
//             cout<<"*";
//             m++;
//         }       
//         cout<<endl;
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n-i){
//             cout<<" ";
//             j++;
//         }
//         int k=1;
//         while(k<=2*i-1){
//             cout<<"*";
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int basic;
//     char grade;
//     cout<<"enter the basic and grade"<<endl;
//     cin>>basic>>grade;
//     int allow;

//     if(grade=='A'){
//         allow=1700;
//     }else if(grade=='B'){
//         allow=1500;
//     }else{
//         allow=1300;
//     }
//     double totalSalary = basic + 0.2*basic + 0.5*basic + allow - 0.11*basic;
//     int ans = totalSalary;
//     cout<<round(ans)<<endl;
// }




/*Write a program to input an integer N and print the sum of all its even digits
and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", 
even digits are 2 & 4 and odd digits are 1, 3 & 5.*/

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int sumOfEven=0;
//     int sumOfOdd=0;
    
//     while(n>0){
//         int last=n%10;
//         if(last%2==0){
//             sumOfEven=last+sumOfEven;
//         }else{
//             sumOfOdd=last+sumOfOdd;
//         }
//         n=n/10;
//     }
//     cout<<sumOfEven<<" "<<sumOfOdd<<endl;
// }


/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user.
You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1*/

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int x,n;
//     cin>>x>>n;
//     int ans=1;
//     while(n>0){
//         ans=x*ans;
//         n--;
//     }
//     cout<<ans<<endl;
// }


// int main(){
//     int x,n;
//     cin>>x>>n;
//     int ans=pow(x,n);
//     cout<<ans<<endl;
// }