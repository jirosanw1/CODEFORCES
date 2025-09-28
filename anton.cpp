#include <bits/stdc++.h>
using namespace std;    
int main(){
string s;
getline(cin,s);
set<char>lett;
for(char a:s){
    if(a>='a'&&a<='z'){
        lett.insert(a);

    }
}    
cout<<lett.size()<<endl;
return 0;
}