#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define backtr(i,x,n) for(int i=x;i>=n;i++)
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool f=true;

        if (n>=2){
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    f=false;
                    break;
                }
        }

        if(f)
            cout<<n<<" "<<"is prime number"<<endl;
        else
            cout<<n<<" "<<"is not a prime number"<<endl;
           
        } 
        else
            cout<<"Not a prime number"<<endl;

    }
}