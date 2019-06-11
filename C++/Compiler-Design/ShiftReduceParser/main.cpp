#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
char a[20], ac[20], act[20], stk[20];
int i = 0, j = 0, k = 0, z = 0, c =0;
void check();
int main()
{
     cout<<"Grammar is : \nE->E+E\nE->E*E\nE->(id)\nE->id"<<endl;
    cout<<"Enter the input string : "; gets(a);

    c =  strlen(a);
    strcpy(act, "Shift->Symbols");
    for(i = 0, j = 0, k = 0; j < c; i ++, j ++, k ++)
    {
        if(a[j] == 'i' && a[j+1] == 'd')
        {
            stk[i] = a[j];
            stk[i+1] = a[j+1];
            stk[i+2] = '\0';
            a[j] = ' ';
            a[j+1] = ' ';
            cout<<stk<<"\t"<<a<<"\t"<<act<<endl;
            check();
        }
        else
        {
            stk[i] = a[j];
            stk[i+1] = '\0';
            a[j] = ' ';
            cout<<stk<<"\t"<<a<<"\t"<<act<<endl;
            check();
        }
    }
    return 0;
}
void check()
{
    strcpy(ac, "Reduce to E");
    for(z = 0; z < c; z ++)
    {
        if(stk[z] == 'i' && stk[z+1] == 'd')
        {
            stk[z] = 'E';
            stk[z+1] = '\0';
            cout<<stk<<"\t"<<a<<"\t"<<ac<<endl;
            j++;
        }
    }

    for(z = 0; z < c; z ++)
    {
        if(stk[z] == 'E' && (stk[z+1] == '*' || stk[z+1] == '+') && stk[z+2] == 'E')
        {
            stk[z] = 'E';
            stk[z+1] = '\0';
            stk[z+2] = '\0';
            i-=2;
            cout<<stk<<"\t"<<a<<"\t"<<ac<<endl;
        }
    }

    for(z = 0; z < c; z ++)
    {
        if(stk[z] == '(' && stk[z+1] == 'E'  && stk[z+2] == ')')
        {
            stk[z] = 'E';
            stk[z+1] = '\0';
            stk[z+2] = '\0';
            i-=2;
            cout<<stk<<"\t"<<a<<"\t"<<act<<endl;
        }
    }
}
