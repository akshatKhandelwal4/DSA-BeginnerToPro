                     // Basics of C++
/*#include<iostream>
using namespace std;

int main()
{
   cout<<"Hello World"<<endl;
}*/


/*
#include <iostream>
using namespace std;  
int main(){
    int a=102;
    float f =124.42;
    char c='h';
    double d= 123.2321;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int P,R,T;
    float SI;
    cout<<"Enter the values"<<endl;
    cin>>P>>R>>T;
    SI=P*R*T/100;
    cout<<SI<<endl;
}
*/



/*
#include<iostream>
using namespace std;
int main(){
    int a;
    char c;
    a=100;     //typecasting
    c=a;
    char d='y';
    int s=d;
    cout<<c<<endl;
    cout<<s<<endl;

    float f=12.34;
    int g=f;
    cout<<g<<endl;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int a=102;
    char c='g';
    int o=a+c;
    cout<<o<<endl;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
    int f,c;
    cout<<"enter value"<<endl;
    cin>>f;
    c=5.0/9*(f-32);
    cout<<c<<endl;
    cout<<5.0/9*(f-32)<<endl;
}
*/


/*
#include<iostream>
using namespace std;
int main(){
int a =102;
int b=1234;
int isGreater=a>b;
bool isLesser=a<b;
bool isEqual=a==b;
cout<<"is a greater: "<<isGreater<<endl;
cout<<"is a Lesser: "<<isLesser<<endl;
cout<<"is they eqaul:"<<isEqual<<endl;      //realtional Operator(<,>,==,<=,>=,!=)
cout<<"not equal: "<<!isLesser<<endl;    

int third=isGreater&&isEqual;              //logical Operator(&&,||,!)
cout<<third<<endl;
int fourth=isLesser||isEqual;
cout<<fourth<<endl;
}
*/



/*
#include <iostream>
using namespace std;   
int main()
{
    double a = 6 / 4;           //int/int always gives int 
    int b  = 6 / 4;
    double c = a + b;
    cout << c;
}
*/


/*
#include <iostream>
using namespace std;  
int main()
{
    double a = 55.5;
    int b = 55;
    a = a % 10;   //error we can't use % with double or float
    b = b % 10;
    cout << a << " "  << b;       
}
*/


/*
#include<iostream>
using namespace std;
int main(){
unsigned int a=-123;    //it will give the huge value
cout<<a<<endl;
}
*/



