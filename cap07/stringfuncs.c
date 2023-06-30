#include <stdio.h>

int funcstrlen(char *s){
    int i = 0;

    while(s[i] != '\0'){
        i++;
    }
    return i;
}


int funcisnull(char *s){

    return (funcstrlen(s) == 0);

}

char *funcstrcpy(char *dest, char *orig){
    int i;

    for (i = 0; orig[i] != '\0'; i++){

        dest[i] = orig[i];

    }

    dest[i] = '\0';
    return dest;
    

}

char *funcstrcat (char *dest, char *orig){

    int i, len;

    for (i = 0, len=funcstrlen(dest);  orig[i] != '\0'; i++, len++){
        dest[len] = orig[i];
    }

    dest[len] = '\0';
    return dest;

}

int main(){
    printf("%d\n", funcstrlen("cuzcuz"));
    printf("%d\n", funcstrlen("bu"));
    printf("%d\n", funcisnull(""));
    printf("%d\n", funcisnull("bu"));

    char original[50] = "Oyoy";
    char copiado[50];

    funcstrcpy(copiado, original);

    puts(copiado);

    funcstrcat(copiado, original);
    puts(copiado);
}

