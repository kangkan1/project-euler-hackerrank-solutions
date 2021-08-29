#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    long long sum=0, num;
    while(t--){
        string s;
        cin>>s;
        num = stol(s.substr(0,13));
        sum += num;
    }
    string s1 = to_string(sum);
    cout<<s1.substr(0,10);
      
    return 0;
}
