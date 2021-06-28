#include <iostream>
#include <cstring>
#include <cctype>
class String
{
 public:

 char s[100];

 String get_string()
 {
 std::cin >> s;
 return *this;
 }

 char* put_string()
 {
 return (char*) s;
 }

 int length()
 {
 return strlen(s);
 }

 String operator = (const String &op)
 {
 strcpy(s, op.s);
 return *this;
 }


 String operator + (const String &op)
 {
 String res;
 res = *this;
 strcat(res.s, op.s);
 return res;
 }

 bool operator <= (String op)
 {
 if (length() <= op.length())
 return true;
 else
 return false;
 }

 String tolower()
 {
 for (int i = 0; i < length(); i++)
 {
 s[i] = std::tolower(s[i]);
 }
 return *this;
 }

 String toupper()
 {
 for (int i = 0; i < length(); i++)
 {
 s[i] = std::toupper(s[i]);
 }
 return *this;
 }
};
int main()
{
 String A, B;
 std::cout << "Enter the first string: ";
 A.get_string();
 std::cout << "Enter the second string: ";
 B.get_string();

 String C = A + B;
 std::cout << "\nConcatenated string: " << C.put_string() <<
"\n";

 std::cout << "String A <= String B: " << (A <= B ? "true\n"
: "false\n");
String D;
std::cout<<"\nThe copied string: "<<(D=C).put_string()<<"\n";

 std::cout << "Length of string A: " << A.length() << "\n";
 std::cout << "Length of string B: " << B.length() << "\n";
 return 0;
}
