#include<stdio.h> 
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char str[20]; 
    int i,num[256]={0};     

    printf("輸入一個連串整數：");  
    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) {
        num[(int)str[i]]++; 
    }
    for(i=0;i<256;i++) {
        if(num[i]!=0)
            printf("字符%c出現%d次\n",(char)i,num[i]);
    }
}
