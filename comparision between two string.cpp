#include<iostream>
#include<string.h>
using namespace std;
class string1
{
    char str[20];

public:

    void getdata()
    {
        cout<<"enter your string:"<<endl;
        cin>>str;
    }

    string1 operator <(string1 str1)
    {
        string1 temp;
        strcpy(temp.str,str);
        if(strcmp(temp.str,str1.str)<0)
        {
            cout<<temp.str<<" is smaller than "<<str1.str<<"\n";
        }
        else
        {
            cout<<str1.str<<" is smaller than "<<temp.str<<"\n";
        }

    }
    string1 operator >(string1 str1)
    {
        string1 temp;
        strcpy(temp.str,str);
        if(strcmp(temp.str,str1.str)>0)
        {
            cout<<temp.str<<" is greater than "<<str1.str<<"\n";
        }
        else
        {
            cout<<str1.str<<" is greater than "<<temp.str<<"\n";
        }
    }
    string1 operator ==(string1 str1)
    {
        string1 temp;
        strcpy(temp.str,str);
        if(strcmp(temp.str,str1.str)==0)
        {
            cout<<temp.str<<" is equal as "<<str1.str<<"\n";
        }
        else
        {
            cout<<str1.str<<" is not equal as "<<temp.str<<"\n";
        }
    }

    void putdata()
    {
        cout<<str<<"\n";
    }
};

int main()
{
    string1 s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1<s2;
    s3=s1>s2;
    s3=s1==s2;
    s3.putdata();
 }
