#include <stdio.h>

int main(void) {
	
char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
        	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        	{
        		printf("vowel");
        	}
        	else
        	printf("consonant");
        }
    else
        printf("%c invalid",c);
	return 0;
}
