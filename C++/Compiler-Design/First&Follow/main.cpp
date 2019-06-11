#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
char first[20] = "";
int in(char arr[20], char sym)
{
    for(int i = 0; arr[i]!='\0'; i ++)
        if(arr[i] == sym)return 1;
    return 0;
}

char * First(char sym, char prod[][20], int n)
{
    int k = strlen(first);
    if(!isalnum(sym)){if(!in(first,sym)){first[k] = sym; first[k+1] = '\0';}}
    else if(islower(sym)){if(!in(first,sym)){first[k] = sym; first[k+1] ='\0';}}
    else
    {
        for(int i= 0; i < n; i ++)
        {
            if(prod[i][0] == sym)
            {
                for(int j = 1; prod[i][j]!='\0';j++)
                {
                    if(prod[i][j-1] == '>' || prod[i][j-1] == '|')
                    {
                        First(prod[i][j], prod, n);
                    }
                }
            }
        }
    }
    return first;
}
char follow[20] = "";
char * Follow(char sym, char prod[][20], int n)
{
    int k = strlen(follow);
    if(prod[0][0] == sym){follow[k] = '$'; follow[k+1] = '\0';k++;}
    if(!isalnum(sym)){if(!in(follow,sym)){follow[k] = sym; follow[k+1] = '\0';}}
    else if(islower(sym)){if(!in(first,sym)){follow[k] = sym; follow[k+1] ='\0';}}
    else
    {
        for(int i = 0; i < n; i ++)
        {
            for(int j = 1; prod[i][j]!='\0';j++)
            {
                if(prod[i][j] == sym && (prod[i][j+1] == '|' || prod[i][j+1] == '\0'))
                {
                    Follow(prod[i][0], prod, n);
                }
                else if(prod[i][j] == sym)
                {
                    strcpy(first,"");
                    strcat(follow,First(prod[i][j+1], prod, n));
                }
            }
        }
    }
    return follow;
}
int main()
{
    int n;

    cout<<"Enter the number of productions : "; cin>>n;
    char prod[n][20];
    char sym;
    cout<<"Enter the productions : "<<endl;

    for(int i = 0; i < n; i ++)
    {
            cin>>prod[i];
    }
    strcpy(first, "");
    cout<<"Enter the symbol for which you want first & follow of : ";cin>>sym;
    cout<<"First : "<<First(sym,prod,n)<<endl;
    cout<<"Follow : "<<Follow(sym,prod,n)<<endl;
    return 0;
}
