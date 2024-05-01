//Create an application that can perform all string related operations
// reverse a string
// Concatenation
// Palindrome
// Copy a string
// Length of the string
// Frequency of character in s string
// Find number of vowels and consonants
// Find number of blank spaces and digits
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
}
void countvowelsconsonants(char str[]){
    int vovel=0,conso=0;
    for(int i=0;i<strlen(str);i++){
        char ch=tolower(str[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                vovel++;
            }
            else{
                conso++;
            }
        }

    }
    printf("vovel:%d\n consonants:%d\n",vovel,conso);
}
 int  isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {

}
  }
 }
void copystring(char destination[],char source[]){
    strcpy(destination,source);
}
int strlength(char str[]){
    return strlen(str);
}
void charfrequency(char str[]){
    int frequency[256]={0};
    for(int i=0;i<strlen(str);i++){
        frequency[str[i]]++;
    }
    printf("charcter Frequency :\n");
    for(int i=0;i<256;i++){
        if(frequency[i]>0 && isprint(i)){
            printf("%c:%d\n",i,frequency[i]);
        }
    }
}
void  countspacedigits(char str[]){
    int space = 0 , digits = 0;
    for(int i = 0;i < strlen(str); i++){
        if(isspace(str[i])){
            space++;

        }
        else if(isdigit(str[i])){
            digits++;
        }
        }
        printf("Space:%d\n digits:%d",space,digits);
    }

int main()
{
    char str1[20],str2[20];

    printf("string related operations:");
    printf("\n 1.Reverse a string: ");
    printf("\n 2.Concatenation: ");
    printf("\n 3.Palindrome: ");
    printf("\n 4.Copy a string: ");
    printf("\n 5.Length of the string: ");
    printf("\n 6.Frequency of character in s string :");
    printf("\n 7.Find number of vowels and consonants :");
    printf("\n 8.Find number of blank spaces and digits:");

    int  choice;
    printf("\n Enter Your Choise :");
     scanf("%d",&choice);

    switch(choice){
        case 1:
         printf("Welcome String Reverse:\n ");
           printf("\n Enter String ");
           scanf("%s",&str1);
           printf("Original string: %s\n", str1);
            reverseString(str1);
          printf("Reversed string: %s\n", str1);
          break;
        case 2:
         printf(" Concatenation\n");
          printf("\n Enter String :");
           scanf("%s",&str1);
         printf("\n Enter String :");
          scanf("%s",&str2);
         concatenateStrings(str1, str2);
            printf("Concatenated string: %s\n",str1);
         break;
        case 3:
         printf(" Palindrome\n");
        printf(" Enter String :");
         scanf("%s",&str1);
        if(isPalindrome(str1)){
        printf("String Is Palindrome:%s",str1);
        }
        else{
        printf("String Is Not Palindrome:%s",str1);
        }
        break;
        case 4:
        printf("Copy a string: ");
        printf("Enter String :");
        scanf("%s",&str1);
        copystring(str2,str1);
        printf("The copystring is:%s",str2);
        break;
        case 5:
        printf("length Of String: ");
        printf("Enter String :");
        scanf("%s",&str1);
        printf("lenght Of String is :%d",strlen(str1));
        break;
        case 6:
        printf("Charcter Of String: ");
        printf("Enter String :");
        scanf("%s",&str1);
        charfrequency(str1);
        break;
        case 7:
        printf("count of Vovel: ");
        printf("Enter String :");
        scanf("%s",&str1);
        countvowelsconsonants(str1);
        break;
        case 8:
        printf("blank spaces and digits : ");
        printf("Enter String :");
        scanf("%s",&str1);
        countspacedigits(str1);
        break;
        default :
        printf("Invalid choice ");
        break;
}
}
