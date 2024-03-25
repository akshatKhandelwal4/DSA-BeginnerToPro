                          //Characters & 2D Array
/*#include<iostream>
using namespace std;

int main(){

    char name[20];
    cout << "Enter Your Name: ";
    cin >> name;

    name[4] = '\0';

    cout << "Your name is: " << name << endl;

}*/


/*#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[], int length){
    int s = 0;
    int e = length-1;

    while(s <= e){
        swap(ch[s++], ch[e--]);
    }
}

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char ch[20];
    cin >> ch;

    int ans = getLength(ch);
    cout << ans << endl;

    reverse(ch, ans);
    cout << ch << endl;
}*/



                               //Replace Character
/*Given an input string S and two characters c1 and c2, you need to replace every occurrence of character 
c1 with character c2 in the given string.
Constraints :
1 <= Length of String S <= 10^6
Sample Input :
abacd
a x
Sample Output :
xbxcd*/

/*#include<iostream>
using namespace std;

void replaceCharacter(char ch[], char c1, char c2){
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(ch[i] == c1)
        {
            ch[i] = c2;
        }
    }
}

int main(){
    char c1, c2;
    cin >> c1 >> c2;

    char ch[1000];
    cin >> ch;

    replaceCharacter(ch, c1, c2);
    cout << ch << endl;
}*/




                              //Check Palindrome
/*Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and
forwards.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1 :
abcdcba
Sample Output 1 :
true */

/*#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char ch[], int len){
    int i = 0;
    int j = len-1;

    while(i <= j){
        if(ch[i++] != ch[j--]){
            return false;
        }
    }
    return true;
}

int main(){
    char ch[10000];
    cin >> ch;

    int ans = getLength(ch);
    int result = checkPalindrome(ch, ans);
    
    cout << result << endl;
}*/



//Another Apporch in order to handel numbers, special_characters, and upper_lowerCase 
/*#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

bool checkValid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    return (ch-'A'+'a');
}

bool checkPalindrome(char ch[], int len){
    int start = 0;
    int end = len-1;

    while(start <= end){
        while(start<=end && !(checkValid(ch[start]))){
            start++;
        }
        while(start<=end && !(checkValid(ch[end]))){
            end--;
        }

        if(start <= end){
            if(toLower(ch[start]) != toLower(ch[end])){
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    char ch[10000];
    cin >> ch;

    int len = getLength(ch);
    int ans = checkPalindrome(ch, len);

    cout << ans << endl;

}*/



                             //Valid Palindrome
/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing 
all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include 
letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.*/

/*#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    return ch-'A'+'a';
}

bool checkPalindrome(string s){
    string str = "";
    
    for(int i=0; i<s.length(); i++){
        if(isValid(s[i])){
            str.push_back(s[i]);
        }
    }

    int i =0; 
    int j = str.length()-1;
    while(i <= j){
        if(toLower(str[i]) != toLower(str[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}*/




                                //cin.getline()
/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverse(char ch[]){
    int len = getLength(ch);
    int i = 0;
    int j = len-1;

    while(i <= j){
        swap(ch[i++], ch[j--]);
    }
}

int main(){
    char ch[100];
    //cin.getline(ch, 100);
    cin.getline(ch, 100);
    reverse(ch);
    cout << ch << endl;
}*/




                                  //Trim Spaces
/*Given an input string S that contains multiple words, you need to remove all the spaces present in the 
input string.
There can be multiple spaces present after any word.
Constraints :
1 <= Length of string S <= 10^6
Sample Input :
abc def g hi
Sample Output :
abcdefghi*/

/*#include<bits/stdc++.h>
using namespace std;

void trimSpaces(char input[]){
    int i = 0;
    int k = 0;
    while(input[i]!='\0' && input[k]!='\0')
    {
        while(input[i] != ' ')
        {
            i++;
            k++;
        }
        while(!(input[k]>='a' && input[k]<='z' || input[k]>='A' && input[k]<='Z'))
        {
            k++;
        }
        while(input[k] != ' ' && input[k] != '\0'){
            swap(input[i++], input[k++]);
        }
    }
}

// void trimSpaces(char input[]){
//     int j = 0;                                             //Approach 2nd
//     for(int i=0; input[i]!='\0'; i++){
//         if(input[i] != ' '){
//             input[j] = input[i];
//             j++;
//         }
//     }
//     input[j] = '\0';
// }

int main(){
    char input[1000];
    cin.getline(input, 1000);

    trimSpaces(input);
    cout << input << endl;
}*/




                              //Reverse word in a string
/*Reverse the given string word wise. That is, the last word in given string should come at 1st place, 
last second word at 2nd place and so on. Individual words should remain as it is.
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcom*/


/*#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int x, int y)
{
    while(x <= y)
    {
        swap(s[x++], s[y--]);
    }
}

int main(){

    string s ;
    getline(cin, s);

    int i = 0;
    int e =  s.length()-1;

    while(i <= e)
    {
        swap(s[i++], s[e--]);
    }

    int x = 0;
    int y = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            y = i-1;
            reverse(s,x,y);
            x = y+2;
        }
    }
    reverse(s,x,s.length()-1);

    cout << s;
}*/



                                 //Maximum Occuring Character
/*Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the 
string str. If more than one character occurs the maximum number of time then print the lexicographically 
smaller character.
Example 1:
Input:
str = testsample
Output: e
Explanation: e is the character whichis having the highest frequency.*/
/*#include<bits/stdc++.h>
using namespace std;

char maxOccuringChar(string s){
    char arr[26] = {0};

    for(int i=0; i<s.length(); i++)
    {
        int num = s[i]-'a';
        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++)
    {
        if(arr[i] > maxi){
            maxi = arr[i];
            ans = i;
        }
    }
    return char(ans)+'a';
}

int main(){
    string s;
    cin >> s;

    char ans = maxOccuringChar(s);

    cout << ans << endl;
}*/




                              //Some Inbuilt Functions
/*#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    char input[100], input2[100];
    cin >> input;
    cin >> input2;

    int len = strlen(input);
    cout << "Length: " << len << endl;

    if(strcmp(input, input2) == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    char input1[100] = "abcd";
    char input2[100] = "fgh";

    cout << "Before Copying: " << endl;
    cout << "Input1 : " << input1 << endl;
    cout << "Input2 : " << input2 << endl;

    strcpy(input1, input2);

    cout << "After Copying: " << endl;
    cout << "Input1 : " << input1 << endl;
    cout << "Input2 : " << input2 << endl;
    
    strcpy(input1, "hello Akshat");
    cout << input1 << endl;

    cout << strcpy(input1, "nottyHoRahaHai");

    char s1[] = "Alpha";
    char s2[] = "Beta";

    strncpy(s1, s2, 3);
    cout << s1 << endl;

    char s3[] = "Alpha";
    char s4[] = "Be";

    strncpy(s3, s4, 4);
    cout << s3 << endl;
}*/




                               //Print all prefixes of string 
/*#include<bits/stdc++.h>
using namespace std;

void printAllPrefixes(char s1[]){
    for(int i=0; s1[i]!='\0'; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << s1[j];
        }
        cout << endl;
    }
}

int main(){

    char s1[1000] = "abcd";
    printAllPrefixes(s1);
    
}*/



                                   //Print All Substrings
/*For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
Print the total number of substrings possible, where every substring is printed on a single line and hence the total number of output lines will be equal to the total number of substrings.
Note:
The order in which the substrings are printed, does not matter.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.
Time Limit: 1 second
Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c */
/*#include<iostream>
using namespace std;

void printAllSubStrings(string s){
    int i = 0;
    while(i < s.length())
    {
        for(int j=i; j<s.length(); j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout << s[k];
            }
            cout << endl;
        }
        i++;
    }
}

int main(){

    string s;
    getline(cin, s);

    printAllSubStrings(s);
}*/




                                //Replace Spaces
/*You have been given a string 'str' of words. You need to replace all spaces between words with "@40".*/
/*#include<iostream>
using namespace std;

string replaceWithWord(string str){
    string st = "";

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            st.push_back('@');
            st.push_back('4');
            st.push_back('0');
        }
        else
        {
            st.push_back(str[i]);
        }
    }

    str = st;
    return str;
}

int main(){
    string s;
    getline(cin, s);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            s.replace(i,1,"@40");                         //for inPlace 
        }
    }

    //cout << replaceWithWord(s) << endl;

    cout << s << endl;
}*/




                                  //Remove Character
/*For a given string str and a character x, write a function to remove all the occurences of x. the 
input string will remains unchanged if the given character dosen't exists.
Sample Input:
aabccbaa 
a
Output:
bccb*/
/*#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(char s[], char c){
    int i = 0;
    int j = 0;

    while(s[i] != '\0' && s[j] != '\0')
    {
        while(s[i] != c)
        {
            i++;
            j++;
        }
        while(s[i] == c)
        {
            i++;
        }
        while(s[i] != c && s[i] != '\0')
        {
            swap(s[j++], s[i++]);
        }
    }
    s[j] = '\0';
}

int main(){

    int size = 1e6;
    char str[size];

    cin.getline(str, size);
    char c;
    cin >> c;

    removeAllOccurrencesOfChar(str, c);
    cout << str;
}*/




                              //Remove all Occurence of Substrings
/*Given two strings s and part, perform the following operation on s until all occurrences of the 
substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.
Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".*/
/*#include<bits/stdc++.h>
using namespace std;

string removingOccurences(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    string part;
    cin >> part;

    cout << removingOccurences(s, part) << endl;
}*/




                                  //Check Permutation
/*For a give two string str1 ans str2, check whether they are permutation of each other or not.
Two strings are said to be permutation of each other when either of the string's character can be re-
arranged so that it become identical to the other(lowercase string only)
Example:
str1 = "string"
str2 = "sgrtin"*/
/*#include<bits/stdc++.h>
using namespace std;

bool isPermutation(char s1[], char s2[]){
    int arr[26] = {0};
    for(int i=0; s1[i]!='\0'; i++)
    {
        int index = s1[i]-'a';
        arr[index]++;
    }

    for(int i=0; s2[i]!='\0'; i++)
    {
        int index = s2[i]-'a';
        arr[index]--;
    }

    for(int i=0; i<26; i++)
    {
        if(arr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main(){
    int size = 1e6;
    char str1[size];
    char str2[size];

    cin >> str1 >> str2;
    
    cout << (isPermutation(str1, str2) ? "true" : "false");
}*/




                                //Permutation in String
/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.
In other words, return true if one of s1's permutations is the substring of s2.
Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:
Input: s1 = "ab", s2 = "eidboaoo"
Output: false*/
/*#include<bits/stdc++.h>
using namespace std;

bool isEqual(int arr[26], int arr2[26]){

    for(int i=0; i<26; i++){
        if(arr[i] != arr2[i]){                                //T.C -> O(m+n)
            return false;
        }
    }
    return true;
}

bool checkInclusion(string part, string s){
    int arr[26] = {0};
    for(int i=0; i<part.length(); i++)
    {
        int index = part[i]-'a';
        arr[index]++;
    }

    int i = 0;
    int windowSize = part.length();
    int arr2[26] = {0};
    while(i < windowSize && i < s.length())
    {
        int index = s[i]-'a';
        arr2[index]++;
        i++;
    }

    if(isEqual(arr, arr2)){
        return true;
    }

    while(i < s.length())
    {
        int oldChar = s[i-windowSize]-'a';
        arr2[oldChar]--;
        int newChar =  s[i]-'a';
        arr2[newChar]++;

        if(isEqual(arr, arr2))
        {
            return true;
        }
        i++;
    }
    return false;
}

int main(){

    string part;
    cin >> part;

    string s;
    cin >> s;

    cout << checkInclusion(part, s) << endl;
}*/




                              //Remove Consecutive Duplicates
/*Given a string str, remove all the consecutive duplicate characters.
Input String: "aaaa"
Otput: "a"
Input String: "aabbcc"
Output String: "abc"*/
/*#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[]){
    int i = 1;
    int j = 1;
    while(input[i] != '\0')
    {
        while(input[j-1] == input[i])
        {
            i++;
        }
        input[j] = input[i];
        i++;
        j++;
    }
    input[j] = '\0';
}

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;

    removeConsecutiveDuplicates(str);

    cout << str;
}*/



                               //Remove All Adjacent Duplicates
/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of 
choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the 
answer is unique.
Example 1:
Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:
Input: s = "azxxzy"
Output: "ay"*/
/*#include<bits/stdc++.h>
using namespace std;

string removeingDuplicates(string s){
    int i = 0;
    while(i < s.length() && s.length() != 0){
        if(s[0] == s[1]){
            s.erase(0,2);
            continue;
        }
        else if(s[i] == s[i+1]){
            s.erase(i,2);
            i--;
        }
        else{
            i++;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << removeingDuplicates(s) << endl;
}*/
 



                               //String Compression
/*Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character 
array chars. Note that group lengths that are 10 or longer will be split into multiple characters in 
chars.
After you are done modifying the input array, return the new length of the array.
You must write an algorithm that uses only constant extra space.
Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
Example 2:
Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.*/
/*#include<bits/stdc++.h>
using namespace std;

int compress(string chars){
    int i = 0;
    int ansIndex = 0;
    while(i < chars.length()){
        int j = i+1;
        while(j < chars.length() && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansIndex++] = chars[i];
        int count = j-i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){
    string chars;
    getline(cin, chars);
    
    cout << compress(chars) << endl;

}*/





/******************************************************************************************************/

                             //2D Arrays(Combinatioin of many 1D arrays)
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100][100];

    int m, n;
    cin >> m >> n;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << "Printing Row-Wise" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Printing Column-Wise" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int c[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}*/



                                //Column & RowWise Sum
/*Given a 2D integer array of size M*N, find and print the sum of ith column elements seperated by space,
Sample Input:
4 2
1 2
3 4
5 6
7 8
Output:
16 20*/
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Column Wise Sum" << endl;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=0; j<m; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }

    cout << endl;
    cout << "Row Wise Sum" << endl;
    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}*/



                              //2d Arrays with Functions
/*#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][100], int m, int n){
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[100][100];
    int m, n;
    cin >> m >> n;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, m, n);
}*/


/*#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][5], int m, int n){
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[5][5] = {{1,2}, {3,4}, {5,6}};

    printArray(arr, 5, 5);
}*/

 

                                //Linear Search in 2D Array
/*#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int m, int n, int target){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == target)                           //T.C.-> O(n*m)
            {                                      
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    if(isPresent(arr, 3, 4, target)){
        cout << "Target Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
}*/



                               //largest Row or Column
/*For a given 2D array of size NxM, you need to find out which row or column has the largest sum amongest all the rows/columns.
If there doesn't exists a sum at all print "row 0 -2147483648.
Sample Input
3 2
6 9 
8 5 
9 2
Sample Output 
column 0 23*/
/*#include<bits/stdc++.h>
using namespace std;

void findLargest(int**arr, int nRows, int mCols){
    int rSum = INT_MIN, cSum = INT_MIN;
    int rowIndex = 0, columnIndex = 0;
    for(int i=0; i<nRows; i++)
    {
        int sum = 0;
        for(int j=0; j<mCols; j++)
        {
            sum += arr[i][j];
        }
        if(rSum < sum)
        {
            rowIndex = i;
            rSum = sum;
        }
    }

    for(int i=0; i<mCols; i++)
    {
        int sum = 0;
        for(int j=0; j<nRows; j++)
        {
            sum += arr[j][i];
        }
        if(cSum < sum)
        {
            columnIndex = i;
            cSum = sum;
        }
    }

    if(rSum == 0 && cSum == 0){
        cout << "row" << " " << "0" << " " << "-2147483648" << endl;
    }
    else if(rSum > cSum){
        cout << "row" << " " << rowIndex << " " << rSum << endl;
    }
    else{
        cout << "column" << " " << columnIndex << " " << cSum << endl;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}*/



                               //Wave Print
/*#include<bits/stdc++.h>
using namespace std;

void wavePrint(int **arr, int nRows, int mCols){
    for(int i=0; i<mCols; i++){
        if(i%2 == 0)
        {
            for(int j=0; j<nRows; j++){                            T.C -> O(n*m)
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j=nRows-1; j>=0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}*/



                               //Spiral Matrix
/*Given an m x n matrix, return all elements of the matrix in spiral order.
Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]*/
/*#include<iostream>
using namespace std;

void sprialPrint(int arr[][100], int n, int m){
    int elements = (m*n);

    int rowLowLimit = 0, rowUpperLimit = n-1;
    int colLowLimit = 0, colUpperLimit = m-1;                      T.C -> O(m*n)
    while(elements > 0){
        for(int i=colLowLimit; i<=colUpperLimit; i++){
            cout << arr[colLowLimit][i] << " ";
            elements--;
        }
        rowLowLimit++;

        for(int i=rowLowLimit; i<=rowUpperLimit; i++){
            cout << arr[i][colUpperLimit] << " ";
            elements--;
        }
        colUpperLimit--;

        for(int i=colUpperLimit; i>=colLowLimit; i--){
            cout << arr[rowUpperLimit][i] << " ";
            elements--;
        }
        rowUpperLimit--;

        for(int i=rowUpperLimit; i>=rowLowLimit; i--){
            cout << arr[i][colLowLimit] << " ";
            elements--;
        }
        colLowLimit++;

    }
}

int main(){

    int arr[100][100];
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    sprialPrint(arr, n, m);
}*/



                               //Rotate 2D Array
/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.(anticlock wise as well)
Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
Example 2:
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]*/
/*#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> matrix){

    int row = matrix.size();
    int col = matrix[0].size();
    reverse(matrix.begin(), matrix.end());

    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void anti_rotate(vector<vector<int> > &matrix) {

    for (auto vi : matrix)
        reverse(vi.begin(), vi.end());                  

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}

int main(){

}*/



                              //Search in 2D Matrix
/*You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
You must write a solution in O(log(m * n)) time complexity.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true*/
/*#include<bits/stdc++.h>
using namespace std;

bool searchElement(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int elements = row*col;

    int start = 0;
    int end = elements-1;

    while(start <= end){
        int mid = start+(end-start)/2;
        int current = matrix[mid/col][mid%col];

        if(current == target){
            return 1;
        }
        else if(current > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}
*/



                                //Search a 2D Matrix II
/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. 
This matrix has the following properties:
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true*/
/*#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex < row && colIndex >= 0){
        int element = matrix[rowIndex][colIndex]; 

        if(element == target){
            return 1;
        }
        else if(element > target){
            colIndex--;
        }
        else{
            rowIndex++;
        }
    }
    return 0;
}*/



/***********************************Practice Test Problems*********************************************/

/*Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 
times…..(n-1)th row will be printed 1 time.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3 3
1 2 3
4 5 6
7 8 9
Sample Output 1 :
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9             */

/*#include<iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col){

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row-i; j++)
        {
            for(int k=0; k<col; k++)
            {
                cout << input[i][k] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}*/



/*Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string. 
Words are seperated by single space only.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= Length of String S <= 10^5

Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a                      */

/*int lengthh(char input[]){
	int len = 0;
	for(int i=0; input[i]!='\0'; i++){
		len++;
	}
	return len;
}

void minLengthWord(char input[], char output[]){
    int rukna = lengthh(input);
    int minIndex = rukna;
    int x = 0, y = 0;
    int i = 0;
    int index = 0;
    while(i < rukna){
        if(input[i] != ' ' && i < rukna){
            y++;
        }
        else{
            int len = y-x;
            if(minIndex > len){
                minIndex = len;
                index = x;
            }
        }
        y++;
        x = y;
    }

    for(int i=0; i<minIndex; i++){
        output[i] = input[index++];
    }
}*/



/*Given an integer array A of size n. Find and print all the leaders present in the input array. An array 
element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less 
than or equal to A[i].
Print all the leader elements separated by space and in the same order they are present in the input 
array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= n <= 10^6

Sample Input 1 :
6
3 12 34 2 0 -1
Sample Output 1 :
34 2 0 -1
Sample Input 2 :
5
13 17 5 4 6
Sample Output 2 :
17 6                               */

/*#include<bits/stdc++.h>
#include<climits>
using namespace std;

void Leaders(int arr[],int len){
    for(int i=0; i<len; i++){
        bool leader = true;
        for(int j=i+1; j<len; j++){
            if(arr[i] < arr[j]){
                leader = false;
                break;
            }
        }
        if(leader){
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int len;
    cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}*/





