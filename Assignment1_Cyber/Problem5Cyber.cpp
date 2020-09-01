#include<iostream>
#include<string>

using namespace std;

void encrypt(string str)
{
    string enc;
    int h = str.length();
    int i,m;
    char l;
    for(i=0;i<h;i++)
    {
        m=0;
        l=toupper(str[i]);
        m = l-64 ;
        if(i%2==0)
        {
            while(m>0)
            {
                enc.append("#");
                m--;
            }
        }
        else
        {
            while(m>0)
            {
                enc.append("$");
                m--;
            }
        }

    }
    cout << enc << "\n";
}

int main()
{
    string str;
    getline (cin,str);
    encrypt(str);
    return 0;
}
