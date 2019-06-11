#include<iostream>
#include<cstring>
#include<stdio.h>

using namespace std;
bool in(char sym, char arr[], int n)
{
    for(int i = 0; i < n; i ++)if(arr[i] == sym)return true;

    return false;
}
char lead[100] = "";
char * Leading(char sym, char prod[][20], int n)
{
    int k = strlen(lead);
    if(!isalpha(sym)){if(!in(sym,lead, k)){lead[k] = sym; lead[k+1] = '\0';}}
    else if(islower(sym)){if(!in(sym,lead,k)){lead[k] = sym; lead[k+1] = '\0';}}
    else
    {
        for(int i = 0; i < n; i ++)
            {
                if(prod[i][0] == sym)
                {
                    for(int j =1 ;prod[i][j]!='\0'; j ++)
                    {
                        if( (prod[i][j] == '>' || prod[i][j] == '|') && isupper(prod[i][j+1]) && (islower(prod[i][j+2])||!isalpha(prod[i][j+2])) && isupper(prod[i][j+3]))
                            Leading(prod[i][j+2], prod, n);
                        if((prod[i][j] == '>' || prod[i][j] == '|'))
                            Leading(prod[i][j+1], prod, n);
                    }
                }
            }
    }

    return lead;
}
char trail[100] = "";
char * Trailing(char sym, char prod[][20], int n)
{
    int k = strlen(trail);
    if(!isalpha(sym)){if(!in(sym,trail,k)){trail[k] = sym; trail[k+1] = '\0';}}
    else if(islower(sym)){if(!in(sym,trail,k)){trail[k] = sym; trail[k+1] = '\0';}}
    else
    {
        for(int i = 0; i < n; i ++)
            {
                if(prod[i][0] == sym)
                {
                        for(int j = strlen(prod[i]); j >=0; j --)
                        {
                            if((prod[i][j] == '\0' || prod[i][j] == '|') && isupper(prod[i][j-1]) && islower(prod[i][j-2]) && isupper(prod[i][j-3]))
                                Trailing(prod[i][j-2], prod, n);
                            if((prod[i][j] == '\0' || prod[i][j] == '|'))
                                Trailing(prod[i][j-1], prod, n);
                        }
                }
            }
    }
    return trail;
}


int main()
{
    int n; cout<<"Enter the number of productions : "; cin>>n;
    char prod[n][20], sym;

    for(int i = 0; i < n; i ++)cin>>prod[i];

    cout<<"Enter the symbol to find the leading of : "; cin>>sym;

    cout<<"Leading of "<<sym<<" is : "<<Leading(sym, prod, n)<<endl;
    cout<<"Trailing of "<<sym<<" is : "<<Trailing(sym, prod, n);



    return 0;
}
