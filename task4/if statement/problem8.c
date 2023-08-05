#include <stdio.h>
int main()
{
    char c;
    printf("enter the character: ");
    scanf("%c", &c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'
    ||c=='U'||c=='y'||c=='Y')
    printf("vowel character");
    else if(c>=65 &&c<=90||c>=97&&c<=122)
    printf("constant character");
    else printf("is not alphabet");
}