#include <stdio.h>
#include <string.h>

int StrEnd (char *s, char *t){
    if (strlen(s) >= strlen(t) && !strcmp (s+strlen(s)-strlen(t),t))
        return 1;
    return 0;
}

int main ()
{   
    char palavra[20] = "hello!";
    char final[20] = "lo!";

    printf("%d", StrEnd(palavra,final));
}