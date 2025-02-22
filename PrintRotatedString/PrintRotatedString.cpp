#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;


void PrintRoatedString(char str[]){
    int len = strlen(str);
    // generated all the rotated strings
    char temp[len];
    for(int i =0;i<len;i++){
        int j =i;  // starting index
        int k =0;   // index for temp

        while(str[j] != '\0'){
            temp[k] = str[j];
            j++;
            k++;
        }
        // copying the first part from point of rotation
        j =0;
        while( j < i){
            temp[k] = str[j];
            j++;
            k++;
        }
        printf("%s\n",temp);

    }

}
int main()
{
    char str[] = "geeks";
    PrintRoatedString(str);
    return 0;
}