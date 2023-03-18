/*#include<iostream>
using namespace std;
int main(){
    string name = "Haider";
    cout<<name;
}*/
/*String Functions
1) strcpy(sq, s2): copies string s2 into string s1.
2) strcat(s1, s2): concatenates string s2 onto the end of string s1.
3)strcmp(s1,s2): returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
4) strlen(s1): returns the length of the string s1.
5) strchr(s1, ch): returns a pointer to the first occurence of character ch in string s1.
6) strstr(s1,s2):returns a pointer to the first occurence of string s2 in string s1.
*/
#include <iostream>
#include <cstring>

using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   return 0;
}