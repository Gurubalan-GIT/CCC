///Author : Uchiha Madara
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

char sym1, sym2;

void ThomsonsRule1(char re[]);
void ThomsonsRule2(char re[]);
void REtoNFA(char re[]);

int main()
{
    char re[100];
    cout<<"Enter the RE : ";
    gets(re);

    cout<<"The Resulting NFA for the RE is given as follows (Using Thomson's Construction Mechanism) : "<<endl;


    REtoNFA(re);
    return 0;
}
void REtoNFA(char re[])
{
    if(re[1] == '|' || re[1] == '+')
    {
        ///call Thomson's Rule 1 SuperNFA Construction Module Initiate!
        ThomsonsRule1(re);
    }
    else
    {
        ///call Thomson's Rule 2 SuperNFA Construction Module Initiate!
        ThomsonsRule2(re);
    }
}

void ThomsonsRule1(char re[])
{
        sym1 = re[0];
        sym2 = re[2];
        int n = 6;
        cout<<"Number of Symbols = "<<n<<endl;
        cout<<"Starting Symbol = "<<0<<endl;
        cout<<"---Transitions---"<<endl;
        for(int i = 0; i < n; i ++)
        {
            if(i == 0)cout<<i<<"--"<<"epsilon"<<"-->"<<i+1<<endl;
            else if(i == 1)cout<<i<<"--"<<sym1<<"-->"<<i+1<<endl;
            else if(i == 2)cout<<i<<"--"<<"epsilon"<<"-->"<<i+1<<"*"<<endl;
            else if(i == 3)cout<<0<<"--"<<"epsilon"<<"-->"<<i+1<<endl;
            else if(i == 4)cout<<4<<"--"<<sym2<<"-->"<<i+1<<endl;
            else cout<<i<<"--"<<"epsilon"<<"-->"<<i-2<<"*"<<endl;
        }
    cout<<"-----------------"<<endl;
    cout<<"Final State = "<<3<<endl;

}
void ThomsonsRule2(char re[])
{
    sym1 = re[0];
    int n = 3;
    cout<<"Number of symbols = "<<n<<endl;
    cout<<"Starting Symbol = "<<0<<endl;
    cout<<"---Transitions---"<<endl;
    for(int i = 0; i < n; i ++)
    {
        if(i == 0)cout<<i<<"--"<<sym1<<"-->"<<i+1<<endl;
        else if(i == 1)cout<<i<<"--"<<"epsilon"<<"-->"<<i-1<<endl;
        else cout<<i-1<<"--"<<"epsilon"<<"-->"<<i<<"*"<<endl;
    }
    cout<<"-----------------"<<endl;
    cout<<"Final State = "<<2<<endl;
}
