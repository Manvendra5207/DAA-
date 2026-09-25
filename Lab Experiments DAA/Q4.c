// Write a program to check whether a given string is a palindrome. Ignore spaces and differences between uppercase and lowercase letters
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], temp[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
            temp[j++] = tolower(str[i]);
    }
    temp[j] = '\0';
    int left = 0;
    int right = strlen(temp) - 1;
    while(left < right)
    {
        if(temp[left] != temp[right])
        {
            printf("Not Palindrome");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome");
    return 0;
}
