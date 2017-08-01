///  STRING COMPARE
#include<bits/stdc++.h>
char s1[100],s2[100];
    int i,result;
 int string_compare()
 {
     i=0;

     while(s1[i]!='\0'  && s2[i]!='\0')
    {
        if(s1[i]>s2[i])
        {
            result=1;
            break;
        }
        if(s1[i]<s2[i])
        {
            result=-1;
            break;
        }
        i++;
    }
    return result;
 }
using namespace std;
int main ()
{
    cout <<"Enter 1st string "<<endl;
    cin >>s1;
    cout <<"Enter 2nd string "<<endl;
    cin >>s2;

     result= string_compare();
     if(result==0)  cout <<s1<<" is sequal to "<<s2<<endl;
     else if(result ==1 )     cout <<s1<<" greater than "<<s2<<endl;
     else if(   result == -1)   cout <<s2<<" greater than "<<s1<<endl;


}
