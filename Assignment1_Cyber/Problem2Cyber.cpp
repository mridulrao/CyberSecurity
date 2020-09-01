#include<iostream>
#include<string>

using namespace std;

void Palindrome(string str)
{
    int l=0;
    int h=str.length()-1;
    while(h>l)
    {
        if(str[l++] != str[h--])
        {
            cout << "String is not palindrome\n";
            return;
        }
    }
    cout << "String is palindrome\n";
}

int main()
{
    string str;
    getline(cin,str);
    Palindrome(str);
    return 0;
}
