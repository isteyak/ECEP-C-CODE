#include <stdio.h>
#include <string.h>   

char* my_strtok(char* s, char* delm){
static char W[100];
    int i = 0, k = 0, j = 0;
    char *ptr;
    static char *Iterator;
    ptr = s;

    if (s == NULL){
	s = Iterator;
    }
    while (s[i] != '\0'){
	j = 0;
	while (delm[j] != '\0'){
	    if (s[i] != delm[j])
		W[k] = s[i];
	    else goto It;
	    j++;
	}
	ptr++;
	i++;
	k++;
    }
It:
    W[i] = 0;
    Iterator = ++ptr;
    return W;
}

int main(void){
    char s[100] = "array=1,2,3";
    char delm[] = "=";
//    gets(s);
    char newstr[100];
    char *str = my_strtok(s, delm);
    strcpy(newstr, str);
    printf("%s\n", newstr);
    char delm1[] = ",";
     char *str1 = my_strtok("=", delm1);
    strcpy(newstr, str1);
    printf("%s\n", newstr);
    return 0;
}
