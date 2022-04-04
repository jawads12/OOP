#include <bits/stdc++.h>
using namespace std;
string sum (string a, string b)
{
    int len = a.size();
    int c;
    string res = "";
    while(len--){
        c = (a[len]-48) +(b[len]-48);
      //  int c = stoi(c)
        if(c>9){
            c=c-10;
        }
        if((a[len+1]-48 +b[len+1]-48)>9){
            c++;
        }
        string s = "c"+48;
       // c = c+48;
        res = s + res;
    }
    return res;

}

int main ()
{
    string a, b;
    cin>>a>>b;
    if(a.size()>b.size()) {
        int len = a.size()-b.size();
        while(len--){
            b = "0" + b;

        }
    }
    else {
        int len = b.size()-a.size();
        while(len--){
            a = "0" + a;

        }
    }
    cout<<sum(a, b)<<endl;


    //cout<<a<<endl<<b<<endl;




}
