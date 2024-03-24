                            //STL Array
/*
#include<bits/stdc++.h>
#include<iostream>
#include<array>                        //for STL array
using namespace std;

int main(){

    int arr[3] = {1,2,3};              //basic-normal array

    array<int, 4> a = {1,222,45,4};       //STL array
    int size = a.size();
    cout << a.size() << endl;

    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;                                                                //T.C.-> O(1)
    cout << "Element at 2nd Index: " << a.at(2) << endl;        //return element at 2nd index
    cout << "is Empty: " << a.empty() << endl;
    cout << "First Element: " << a.front() <<endl;           //print the first element
    cout << "Last Element: " << a.back() <<endl;             //print the last element
    a.fill(100);
    for(auto i:a){
        cout << i << " ";
    }

}
*/



                           //STL Vector(dynamic array)
/*#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;                                    //initally its size will be zero
    cout << "Capacity-> " << v.capacity() << endl;    //capacity shows about assigned memory for elements

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    
    cout << "Size-> " << v.size() << endl;             //size shows about no. of element  

    cout << v[2] << endl;
    cout << "Variable at 2nd index-> " << v.at(2) << endl;
    cout << "First Element: " << v.front() <<endl;           
    cout << "Last Element: " << v.back() <<endl;

    cout << "Before Pop" << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop" << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of vector before clear operataion-> " << v.size() << endl;
    cout << "Capacity of vector before clear operataion-> " << v.capacity() << endl;

    v.clear();    //capacity will goona remain same, only size gets 0

    cout << "Size of vector after clear operataion-> " << v.size() << endl;
    cout << "Capacity of vector after clear operataion-> " << v.capacity() << endl;
    
    vector<int> vec(5,1);            //vector of capacity 5 and all elements are 1
    for(int i=0; i<vec.size(); i++){ //for(int i:vec)
        cout << vec[i] << " ";
    }

    cout << endl;
    vector<int> last(vec);            //copying vector vec into last
    for(int i:last){
        cout << i << " ";
    }
}*/



                            //Deque(Double ended queue)
/*#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    cout << d.at(0) << endl;

    cout << d.size() <<endl;
    d.erase(d.begin(), d.begin()+1);
    cout << d.size() <<endl;

}*/



                           //List(implement done by doubly linked list)
/*#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    for(int i:l){
        cout << i << " ";
    }
    cout << endl;
    
    l.pop_front();

    for(int i:l){
        cout << i << " ";
    }
    cout << endl;
    
    l.erase(l.begin());
    cout << "After erase: ";
    for(int i:l){
        cout << i << " ";
    }
    
    cout << endl;
    list<int> li(5,100);
    for(int i:li){
        cout << i << " ";
    }

    cout << endl;
    list<int> av(li);
    for(int i:li){
        cout << i << " ";
    }
}*/



                         //Stack(LIFO)
/*#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(13);
    s.push(23);
    s.push(35);

    s.pop();
    s.pop();

    cout << s.top() << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    cout << "Size is " << s.size() << endl;
    cout << "Is Empty " << s.empty() << endl;

}*/



                             //Queue(FIFO)
/*#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Akshat");
    q.push("Khandelwal");
    q.push("JECRC");

    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "first element after pop " << q.front() << endl; 

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    cout << "Size " << q.size() << endl;

}*/



                     //Priority Queue(First element always greatest by defualt{max heap, min heap})
/*#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);
    maxi.push(9);

    cout << maxi.top() << endl;

    int n = maxi.size();

    for(int i=0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;
    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);
    mini.push(9);

    cout << endl;
    cout << "Top Element " <<mini.top() << endl;

    int size = mini.size();
    for(int i=0; i<size; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
}*/



                        //Set(Store Unique Elements, implementation done by BST)
/*#include<iostream>
#include<set>
using namespace std;

int main(){
    
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(5);
    s.insert(1);

    for(auto i:s){
        cout << i << endl;
    }

    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout << "After Erase" << endl;
    for(auto i:s){
        cout << i << endl;
    }

    cout << "Is present " << s.count(10) << endl;
    cout << "Is present " << s.count(5) << endl;

    set<int> :: iterator itr = s.find(5);
    cout << *it << endl;

    for(auto it=itr; it!=s.end(); it++){
        cout << *it << " ";
    }
}*/



                        // Map(stores key value pair)
/*#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, string> m;
    m[1] = "Akshat";
    m[200] = "Khandelwal";
    m[30] = "JECRC";

    m.insert({40, "Harshit"});

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "is 200 present " << m.count(200) << endl;

    m.erase(1);
    cout << "after erase" << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(30);

    for(auto i=it; i!=m.end(); i++){
        cout << (*it).first << endl;
    }

}*/



                        //Algorithm
/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);

    cout << binary_search(v.begin(), v.end(), 6) << endl;
    cout << binary_search(v.begin(), v.end(), 19) << endl;


    cout << "Lower Bound " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "Upper Bound " << upper_bound(v.begin(), v.end(), 6)-v.end() << endl;

    int a = 10;
    int b = 20;

    cout << min(a,b) << endl;
    cout << max(a,b) << endl;

    swap(a,b);
    cout << a << " " << b << endl;

    string s = "Akshat";

    reverse(s.begin(), s.end());
    cout << s << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i:v){
        cout << i << " ";
    }

    cout << endl;

    cout << "After Sort" << endl;
    sort(v.begin(), v.end());      //based on Intro Sort(combination of Insertion,Quick,Heap algo)
    for(auto i:v){
        cout << i << " ";
    }
}  */

