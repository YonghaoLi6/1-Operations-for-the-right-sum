#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string sol(ll m,ll n,ll sum)
{
    ll tmp=(n-1)+(m+1)*m/2;
    ll dif=sum-tmp;
    ll down=dif/(n-1);
    ll res=dif%(n-1);
    string ans="";
    for(int i=0;i<down;i++) ans+="D";
    for(int i=0;i<n-res-1;i++) ans+="R";
    ans+="D";
    for(int i=0;i<res;i++) ans+="R";
    for(int i=0;i<m-down-2;i++) ans+="D";
    return ans;
}
int main(){
	
	ofstream out;
	out.open("1.txt");
	out<<"65 "<<sol(9,9,65)<<endl;
    out<<"72 "<<sol(9,9,72)<<endl;
    out<<"90 "<<sol(9,9,90)<<endl;
    out<<"110 "<<sol(9,9,110)<<endl;
    out<<endl;
    out<<"87127231192 "<<sol(90000,100000,87127231192)<<endl;
    out<<"5994891682 "<<sol(90000,100000,5994891682)<<endl;
	out.close();
}
