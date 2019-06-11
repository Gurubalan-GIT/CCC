#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
char alpha[100] = "";
char beta[100] = "";

int main()
{
    char exp[100];
    int i;
    cout<<"Enter the expression : "<<endl; cin.getline(exp,100);


    for(i = 0; exp[i]!='>';i++);
    i++;
    if(exp[i] != exp[0])
        cout<<"No left Recursion!"<<endl;
    else
    {
        int flag1 = 0;
        int flag2 = 0;
        for(i = 0; exp[i] != '\0'; i ++)
        {
                if(exp[i] == exp[0] && exp[i-1]== '>')
                {
                    flag1 = 1;continue;
                }
                if(exp[i] == '|' && flag1 == 1)
                {
                    flag2 = 1;continue;
                }
                if(flag1 == 1 && flag2 == 0)
                {
                    alpha[strlen(alpha)] = exp[i];
                    alpha[strlen(alpha)] = '\0';
                }
                else if(flag1 == 1 && flag2 == 1)
                {
                    beta[strlen(beta)] =  exp[i];
                    beta[strlen(beta)] = '\0';
                }

        }

        cout<<"The solution is given as follows : "<<endl;
        cout<<exp[0]<<"->"<<beta<<exp[0]<<"'"<<endl;
        cout<<exp[0]<<"'"<<"->"<<alpha<<exp[0]<<"'|epsilon"<<endl;
    }
    return 0;
}
