#include<iostream>
#include<cstring>
using namespace std;
char first[20] = "";
char * First(char sym, char prod[][20], int n)
{
    int k = strlen(first);
    if(!isalpha(sym)){first[k] = sym; first[k+1] = '\0';}
    else if(islower(sym)){first[k] = sym; first[k+1] = '\0';}
    else
    {
        for(int i = 0; i < n; i ++)
        {
            if(prod[i][0] == sym)
            {
                for(int j = 1; prod[i][j] != '\0'; j ++)
                {
                    if(prod[i][j] == '>' || prod[i][j] == '|')
                    {
                        First(prod[i][j+1], prod, n);
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

    if(sym == prod[0][0]){follow[k] = '$'; follow[k+1] = '\0';}
    k = strlen(follow);
    if(!isalpha(sym)){follow[k] = sym; follow[k+1] = '\0';}
    else if(islower(sym)){follow[k] = sym; follow[k+1] = '\0';}
    else
    {
        for(int i = 0; i < n; i ++)
        {
            for(int j = 1; prod[i][j]!= '\0'; j ++)
            {
                if(prod[i][j] == sym)
                {
                    if(prod[i][j+1] == '|' || prod[i][j+1] == '\0')
                    {
                        Follow(prod[i][0], prod, n);
                    }
                    else
                    {
                        strcpy(first,"");
                        strcat(follow, First(prod[i][j+1], prod, n));
                    }
                }
            }
        }
    }
    return follow;
}

int main()
{
    int n; cout<<"enter the number of productions : "; cin>>n;
    char prod[n][20], frst[n][20], flw[n][20];

    cout<<"Enter the productions : ";
    for(int i = 0; i < n; i ++){
        strcpy(frst[i],"");
        strcpy(flw[i],"");
    }
    for(int i = 0; i < n; i ++)cin>>prod[i];

    for(int i = 0; i < n; i ++)
    {
        strcpy(first,"");
        strcpy(follow,"");
        strcpy(frst[i],First(prod[i][0], prod, n) );
        strcpy(flw[i],Follow(prod[i][0], prod, n) );
    }
    cout<<"First pos : "<<endl;
    for(int i = 0; i < n; i ++)
    {
        cout<<"First["<<prod[i][0]<<"] = { ";
        for(int j = 0; frst[i][j]!='\0'; j ++)
            cout<<frst[i][j]<<" ";
        cout<<"}"<<endl;

    }
    cout<<"First pos : "<<endl;
    for(int i = 0; i < n; i ++)
    {

        cout<<"Follow["<<prod[i][0]<<"] = {";
        for(int j = 0; frst[i][j]!='\0'; j ++)
            cout<<frst[i][j]<<" ";
            cout<<"}"<<endl;
    }
    cout<<endl<<endl;

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; frst[i][j]!= '\0'; j ++)
            cout<<"M["<<prod[i][0]<<" , "<<frst[i][j]<<"] = "<<prod[i]<<endl;
    }
    return 0;
}
