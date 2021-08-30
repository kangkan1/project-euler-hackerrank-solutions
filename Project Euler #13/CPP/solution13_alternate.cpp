#include <iostream>
#include <algorithm>
using namespace std;
string largeSum(string s1, string s2);
int main(){

    int t;
    cin>>t;
    string sum = "0";
    while(t--){
        string s;
        cin>>s;
        sum = largeSum(sum, s);
    }
    cout<<sum.substr(0, 10)<<endl;
    return 0;
}

string largeSum(string s1, string s2){
    string s;
    if(s1.length() > s2.length()){
        s = s1;
        s1 = s2;
        s2 = s;
    }
    s = "";
    int n1 = s1.length(), n2 = s2.length();
    int carry = 0;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for(int i=0;i<n1;i++){
        int sum = (s1[i]-'0')+(s2[i]-'0')+carry;
        s.push_back(sum%10+'0');
        carry = sum/10;
    }
    for(int i=n1;i<n2;i++){
        int sum = (s2[i]-'0')+carry;
        s.push_back(sum%10+'0');
        carry = sum/10;
    }
    if(carry)
        s.push_back(carry+'0');
    reverse(s.begin(), s.end());
    return  s;
}