#include <iostream>

using std::cout;
using std::endl;
using std::boolalpha;

#include "String.h"

int main()
{
    String s1("happy");
    String s2(" birth day ");
    String s3;

    cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2 
         << "\"; s3 is \"" << s3 << '\"'
         << boolalpha << "\n\nThe results of comparing s2 and s1:"
         << "\ns2 == s1 yields " << (s2 == s1)
         << "\ns2 != s1 yields " << (s2 != s1)
         << "\ns2 >  s1 yields " << (s2 > s1)
         << "\ns2 <  s1 yields " << (s2 < s1)
         << "\ns2 >= s1 yields " << (s2 >= s1)
         << "\ns2 <= s1 yields " << (s2 <= s1);

    cout << "\n\nTesting !s3:" << endl;

    if (!s3)
    {
        cout << "s3 is empty; assigning s1 to s3;" << endl;
        s3 = s1;
        cout << "s3 is \"" << s3 << "\"";
    }

    cout << "\n\ns1 += s2 yields s1 = ";
    s1 += s2;
    cout << s1;

    cout << "\n\ns1 += \" to you\" yields " << endl;
}
