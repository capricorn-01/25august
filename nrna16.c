#include<stdio.h>

int checkvowel(char a);
int main()
{
	char a;
	 
	 printf("enter the char");
	 scanf("%c",&a);
	int show=checkvowel(a);
	
	
    if(a=='a' || a=='e' || a=='i' || a=='o'||a=='u') 
    {
     printf("vowel");
    }
    else {
        printf("con");
    }
	return 0;
}
int checkvowel(char a)
{
	 return a;
}
