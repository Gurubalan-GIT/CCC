#include<iostream>
#include<cstring>
using namespace std;
char postfix[100] = "";
void Postfix(char exp[])
{
    char opn[2], opt, pfix[30]; int k = 0;
    for(int i = 0; exp[i] != '\0'; i ++)
    {
        if(isalnum(exp[i]))
        {
            opn[k++] = exp[i];
        }
        else if(exp[i]!= ' ')opt = exp[i];
    }
    pfix[0] = opn[0]; pfix[1] = opn[1]; pfix[2] = opt;
    pfix[3] = '\0';
    strcat(postfix,pfix);
}
void subexp_post(char exp[])
{
    char outerops[2] = "";
    int out=0;
    char subexp[100];
    int k = 0;
    for(int i = 0, j = 0; exp[i]!='\0';i++)
    {
        if(exp[i] == '(')
        {
            k = 0;
            for( j = i+1; exp[j] != ')'; j ++)
            {
                subexp[k++] = exp[j];
            }
            subexp[k] = '\0';
            Postfix(subexp);
            i = j;
        }
        else if(exp[i] != ')')outerops[out++] = exp[i];
    }
    strcat(postfix,outerops);
}
char prefix[100] = "";
void Prefix(char exp[])
{
    char opn[2], opt, pfix[30]; int k = 0;
    for(int i = 0; exp[i] != '\0'; i ++)
    {
        if(isalnum(exp[i]))
        {
            opn[k++] = exp[i];
        }
        else if(exp[i]!= ' ')opt = exp[i];
    }
    pfix[0] = opt; pfix[1] = opn[0]; pfix[2] = opn[1];
    pfix[3] = '\0';
    strcat(prefix,pfix);
}
void subexp_pre(char exp[])
{
    char outerops[2] = "";
    char big_str[100] = "";
    int out=0;
    char subexp[100];
    int k = 0;

    for(int i = 0, j = 0; exp[i]!='\0';i++)
    {
        if(exp[i] == '(')
        {
            k = 0;
            for( j = i+1; exp[j] != ')'; j ++)
            {
                subexp[k++] = exp[j];
            }
            subexp[k] = '\0';
            Prefix(subexp);
            i = j;
        }
        else if(exp[i] != ')')outerops[out++] = exp[i];
    }
    strcat(big_str,outerops);
    strcat(big_str,prefix);
    strcpy(prefix,big_str);
}

int main()
{
    char exp[100];
    cout<<"Enter the expression : "; cin.getline(exp,100);
    subexp_post(exp); subexp_pre(exp);
    cout<<"Postfix is : "<<postfix<<endl;
    cout<<"Prefix is : "<<prefix<<endl;

 return 0;
}
