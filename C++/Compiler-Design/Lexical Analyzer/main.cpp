#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;

char keywords[][10] = {"for", "if", "do", "while", "else", "char", "int", "float", "double", "bool"};
char punctuators[][3] = {";", ":", "(", ")", "[" , "]" , "{" , "}" };

int iskeyword(char exp[])
{
    for(int i = 0; i < 10; i ++)
        if(strcmpi(exp,keywords[i]) == 0)
            return 1;

    return 0;
}

int ispunctuator(char exp[])
{
    for(int i = 0; i < 8; i ++)
        if(strcmpi(exp,punctuators[i]) == 0)
            return 1;
    return 0;
}

int isidentifier(char exp[])
{
    //not a keyword.
    if(iskeyword(exp))return 0;
    //first digit is alpha
    if(!isalpha(exp[0]))return 0;
    //subsequent digits are either alpha or num
    for(int i = 1; exp[i]!='\0'; i ++)
        if(!isalnum(exp[i]))return 0;

    return 1;
}

int isoperator(char exp[])
{
    if(strcmpi(exp,"&&") == 0 || strcmpi(exp,"||") == 0 || strcmpi(exp,"!") == 0 || strcmpi(exp,"=") == 0 || strcmpi(exp,"==") == 0 || strcmpi(exp,"!=") == 0 || strcmpi(exp,"*") == 0 || strcmpi(exp,"/") == 0 || strcmpi(exp,"+") == 0 || strcmpi(exp,"++") == 0 || strcmpi(exp,"-") == 0 || strcmpi(exp,"--") == 0 || strcmpi(exp,"%") == 0)
        return 1;
    else return 0;
}

int main()
{
    char exp[100];
    char subexp[50];
    strcpy(subexp,"");
    cout<<"Enter the expression : ";
    gets(exp);
    // cout<<"Exp : "<<exp<<endl;
    //cout<<"subexp : "<<subexp<<endl;
    for(int i = 0; exp[i]!='\0';i++)
    {
        if(!(exp[i] == ' ' || exp[i] == '\0')){
            int len = strlen(subexp);
            subexp[len] = exp[i];
            subexp[len+1] = '\0';
        //cout<<"==Subexp : "<<subexp<<endl;
        }

        if(exp[i+1] == ' ' || exp[i+1] == '\0')
        {
            //cout<<"Subexp : "<<subexp<<endl;
            if(iskeyword(subexp)) cout<<"Keyword : "<<subexp<<endl;
            else if(ispunctuator(subexp)) cout<<"Punctuator : "<<subexp<<endl;
            else if(isidentifier(subexp)) cout<<"Identifier : "<<subexp<<endl;
            else if(isoperator(subexp)) cout<<"Operator : "<<subexp<<endl;
            strcpy(subexp,"");
        }
    }
    return 0;
}
