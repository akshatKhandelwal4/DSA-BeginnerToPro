                        //Functions
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int i=1;
//     int ans=1;
//     while(i<=n){
//         ans*=i;
//         i++;
//     }
//     return ans;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nr=factorial(n-r);

//     int ans=fact_n/(fact_r*fact_nr);
//     cout<<ans<<endl;
// }




// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     int d=2;
//     while(d<n){
//         if(n%d==0){
//             return false;
//         }
//         d++;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     bool ans=isPrime(n);
//     cout<<ans<<endl;
// }




// #include<iostream>
// using namespace std;

// void numbers(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     numbers(n);
// }




// #include<iostream>
// using namespace std;

// int multiply(int a,int b){
//     int ans=a*b;
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = multiply(a,b);
//     cout<<ans<<endl;
// }



// #include<iostream>                          //calculate total set bits of 2 no.
// using namespace std;

// int setBits(int num){
//     int count = 0;
    
//     while(num != 0){
//         int bit = num&1;
//         if(bit == 1){
//             count++;
//         }
//         num=num>>1;
//     }
//     return count;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
    
//     int bit_a = setBits(a);
//     int bit_b = setBits(b);
    
//     cout<<bit_a+bit_b<<endl;
// }



/*  Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need 
to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius 
values and print the table.
Input Format :
3 integers - S, E and W respectively
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value. 
Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")   */

// #include<iostream>
// using namespace std;
// void printTable(int start, int end, int step) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Print output and don't return it.
//      * Taking input is handled automatically.
//      */
//     while(start<=end){
//         int celcius=(5.0/9)*(start-32);
//         cout<<start<<" "<<celcius<<endl;
//         start+=step;
//     }
// }



/*  Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number 
is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1
Input Format :
Integer N
Output Format :
true or false        */

// #include<iostream>
// using namespace std;

// bool checkMember(int n){

//   /* Don't write main().
//    * Don't read input, it is passed as function argument.
//    * Return output and don't print it.
//    * Taking input and printing output is handled automatically.
//   */
//   int a=0,b=1;
//   while(a<=n){
//     int c=a+b;
//     if(a==n){
//       return true;
//     }
//     a=b;
//     b=c;
//   }
//   return false;
// }



                   //How function calling works
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     int d=2;
//     while(d<n){
//         if(n%d==0){
//             return false;
//         }
//         d++;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int x=2;x<=n;x++){
//         if(isPrime(x)){
//             cout<<x<<endl;
//         }
//     }
// }


// #include<iostream>
// using namespace std;

// void B(){
//     cout<<5<<endl;
// }

// void A(int a){
//     cout<<1<<endl;
//     B();
//     cout<<2<<endl;
// }

// int main(){                       //call stack
//     int n=10;
//     cout<<3<<endl;
//     A(n);
//     cout<<n<<endl;                
//     cout<<4<<endl;
// }



// #include <iostream>
// using namespace std;

// int fact(int n) {
// 	//cout << a << endl;             //can't access outside the scope
// 	int ans = 1;
// 	for (int i = 1; i <=n ;i++) {
// 		ans = ans * i;
// 	}
// 	return ans;
// }

// int main() {
// 	int a;
// 	cin >> a;
// 	int output = fact(a);
// 	//cout << ans << endl;             //can't access outside the scope
// 	//cout << n << endl;
// 	cout << output << endl;
// }



// #include <iostream>
// using namespace std;

// void func(int a) {
//     int b = 10;
//     a = b + 10;
//     cout << a << " ";
// }

// int main() {
//     int a = 10;
//     func(a);
//     cout << a << " ";
// }



                       //Pass by value
// #include<iostream>
// using namespace std;

// void increament(int a){
//     a+=1;
// }

// int main(){
//     int n=10;
//     increament(n);              //here we just pass the value of n to a so, a just copy the value of n 
//     cout<<n<<endl;              
// }



// #include<iostream>
// using namespace std;

// void increament(int a){
//     a+=1;
// }

// int main(){
//     int a=10;
//     increament(a);               
//     cout<<a<<endl;              
// }



// #include<iostream>
// using namespace std;

// int increament(int a){
//     a+=1;
//     return a;
// }

// int main(){
//     int n=10;
//     n = increament(n);               
//     cout<<n<<endl;              
// }




// #include<iostream>
// using namespace std;
// void doubleValue(int a) {
//     a = a * 2;
// }
// int main() {
//     int a = 8;
//     doubleValue(a);
//     cout << a;
// }



// #include<iostream>
// using namespace std;
// int func(int a){
//     a += 10;
//     return a;
// }

// int main() {
//     int a = 5;
//     func(a);
//     cout << a;
// }



// #include<iostream>
// using namespace std;
// int square(int a){
//     int ans = a * a;
//     return ans;
// }

// int main() {
//     int a = 4;
//     a = square(a);
//     cout << a;
// }



// #include<iostream>
// using namespace std;

// double areaCircle(double r){
//     double area= 3.14*r*r;
//     return area;
// }

// int main(){
//     double r;
//     cin>>r;
//     double ans=areaCircle(r);
//     cout<<ans<<endl;
// }