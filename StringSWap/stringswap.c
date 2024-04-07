// writing the code for the string swap function in c language

// #include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str1[20] = "Good", str2[20] = "morning";  
      
    printf("Strings before swapping: %s %s\n", str1, str2);  
      
    //User-defined substring function that will take string(str), position(p) and no of character(len) as input  
    //Produces result sub as output  
    void substring(char s[], char sub[], int p, int len)
    {

       int c = 0;  
       while (c < len) {  
          sub[c] = s[p+c];  
          c++;  
       }  
       sub[c] = '\0';  
    }  
      
    //Concatenate both the string str1 and str2 and store it in str1  
    strcat(str1, str2);  
    //Extract str2 from updated str1  
    substring(str1, str2, 0, (strlen(str1) - strlen(str2)));  
    //Extract str1 from updated str1  
    substring(str1, str1, strlen(str2), strlen(str1));  
     
    printf("Strings after swapping: %s %s", str1, str2);  
      
    return 0;  
}