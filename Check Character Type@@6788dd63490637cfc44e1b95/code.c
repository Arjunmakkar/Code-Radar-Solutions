#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(ch='a'|| ch='e'|| ch='i'|| ch='o'||ch='u'){
        printf("Vowel\n");
    }else if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
        printf("Consonant\n");
    }else if(ch>='0' &7 ch<='9'){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}