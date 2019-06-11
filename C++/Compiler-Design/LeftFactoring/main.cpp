#include <iostream>

using namespace std;

int main()
{
 char exp[100], x[50] = "", y[50] = "";
 int i;
 cout<<"Enter the expression : E->";
 cin.getline(exp,100);

char  alpha = exp[0];

 for( i = 1; exp[i] != '|'; i ++)
 {
     x[i-1] = exp[i];
 }
 i++;
 if(exp[i] != alpha) cout<<"No left factoring!"<<endl;
 else
 {
     i++;
     for(int j  = 0;exp[i]!='\0';i++,j++)
        y[j] = exp[i];

    cout<<"E->"<<alpha<<"E'"<<endl;
    cout<<"E'->"<<x<<"|"<<y<<endl;

 }
    return 0;
}
