#include <bits/stdc++.h>
using namespace std;
int main(){
vector<string>mat(3);
for(int i=0;i<3;i++){
    cin>>mat[i];

}
bool sym=true;
if(mat[0][0]!=mat[2][2]) sym=false;
if(mat[0][1]!=mat[2][1]) sym=false;     
if(mat[0][2]!=mat[2][0]) sym=false;
if(mat[1][0]!=mat[1][2]) sym=false;

if(sym){
cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;    
}

/*#include <bits/stdc++.h>
using namespace std;
int main(){*/








}