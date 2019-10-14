#include <stdio.h>

int main() {
    int num;
    printf("do want write a sentence in different color\n");
    printf("choose the color in which you want to print\n"
           "1. Bold white\n"
           "2. Red\n"
           "3. Green\n"
           "4. Yellow\n"
           "5. Blue\n"
           "6. Magenta\n"
           "7. Cyan\n"
           "8. White\n"
           "please choose the  number\n"
           "enter the number:");
    scanf("%d", &num);//user input 
    char sen[1000];
    printf("enter the sentence");
    switch (num) {//to select the colour user want in his senetnce
        case 1:
            scanf("\n%[^\n]", sen);
            printf("\033[1;30m""%s", sen);
            break;
        case 2:
            scanf("\n%[^\n]", sen);
            printf("\033[1;31m""%s", sen);
            break;
        case 3:
            scanf("\n%[^\n]", sen);
            printf("\033[1;32m""%s", sen);
            break;
        case 4:
            scanf("\n%[^\n]", sen);
            printf("\033[1;33m""%s", sen);
            break;
        case 5:
            scanf("\n%[^\n]", sen);
            printf("\033[1;34m""%s", sen);
            break;
        case 6:
            scanf("\n%[^\n]", sen);
            printf("\033[1;35m""%s", sen);
            break;
        case 7:
            scanf("\n%[^\n]", sen);
            printf("\033[1;36m""%s", sen);
            break;
        case 8:
            scanf("\n%[^\n]", sen);
            printf("\033[1;37m""%s", sen);
            break;
        default:
            printf("wrong input");
            break;

    }

    return 0;
}
