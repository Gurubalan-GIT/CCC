//Author : Uchiha Madara
#include<iostream>
#include<cstring>
using namespace std;
char lead[20] = "", trail[20] = "";
char * Leading(char sym , char prod[][20], int n)
{
    int k = strlen(lead);
    if(!isalpha(sym)) {lead[k] = sym; lead[k+1] = '\0';}
    else if(islower(sym)) {lead[k] = sym; lead[k+1] = '\0';}
    else
        for(int i = 0; i < n; i ++)
                if(prod[i][0] == sym)
                for(int j = 1; prod[i][j] != '\0'; j ++)
                {
                    if(isupper(prod[i][j]) && ((!isalpha(prod[i][j+1])  && prod[i][j+1] != '|') || islower(prod[i][j+1]) ) && isupper(prod[i][j+2]))
                       Leading(prod[i][j+1], prod, n);
                   else if(prod[i][j-1] == '>' || prod[i][j-1] == '|')
                       Leading(prod[i][j], prod,n);
                }
    return lead;
}
bool notin(char sym,char str[]){for(int i = 0; str[i] != '\0';i++) if(str[i] == sym)return 0; return 1;}
char * Trailing(char sym, char prod[][20], int n)
{
    int k = strlen(trail);
    if(!isalpha(sym) && notin(sym,trail)){trail[k] = sym; trail[k+1] = '\0';}
    else if(islower(sym) && notin(sym,trail)){trail[k] = sym; trail[k+1] = '\0';}

    else
        for(int i = 0; i < n; i ++)
            if(prod[i][0] == sym)
                for(int j = strlen(prod[i]) - 1; j >=0; j--)
                {
                    if((prod[i][j+1] == '\0' || prod[i][j+1] == '|') && isupper(prod[i][j]) && ( (!isalpha(prod[i][j-1]) && prod[i][j-1] != '|') || islower(prod[i][j-1])) )
                        Trailing(prod[i][j-1],prod,n);
                    if(prod[i][j+1] == '\0' || prod[i][j+1] == '|')
                        Trailing(prod[i][j],prod,n);
                }
    return trail;
}
int main()
{
    int n;
    cout<<"Enter the number of productions : "; cin>>n;
    char prod[n][20], sym;
    cout<<"Enter the productions : "<<endl;
    for(int i = 0; i < n; i ++)cin>>prod[i];
    cout<<"Enter the symbol for which you want to find the Leading of : "; cin>>sym;
    cout<<"Leading("<<sym<<") = {"<<Leading(sym,prod,n)<<"}"<<endl;
    cout<<"Enter the symbol for which you want to find the Trailing of : "; cin>>sym;
    strcpy(trail,"");
    cout<<"Trailing("<<sym<<") = {"<<Trailing(sym,prod,n)<<"}"<<endl;
    return 0;
}
