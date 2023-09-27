#include <stdio.h>
#include <assert.h>
#include <string.h> 

//Esta horrible
//Despues de la revicion, No esta tan mal.

void elimina(char s1[] , char s2[], char s3[]);

int main(){

    char s[] = "abc";
   elimina(s, "123", "cab");
   assert(strcmp(s, "abc") == 0); // No se eliminan caracteres

   elimina(s, "axc", "xbc");
   // Se elimina la a porque está en s2 en la misma posición
   // se elimina la b porque está en s3 en la misma posición
   // Se elimina la c porque está en s2 o en s3 en la misma posición
   assert(strcmp(s, "") == 0);

   char t[] = "abc 123";
   elimina(t, "b", "1");
   assert(strcmp(t, "abc 123") == 0);  // No se eliminan caracteres

   elimina(t, "aaaaaaaaaaaaaaaaaaaaaa", "2222222222222222222");
   assert(strcmp(t, "bc 13") == 0);

   elimina(t, "", "");  // No se eliminan caracteres
   assert(strcmp(t, "bc 13") == 0);

   puts("OK!");
   return 0;

}

void elimina(char s1[] , char s2[], char s3[]){
    int i = 0, j = 0, k = 0 , l = 0, n=0;
    
    while(s1[i]  && (s2[j] || s3[n])){
        if(s2[j] && s3[j]){ 
            if(s2[j] != s1[i] && s3[j] != s1[i]){
                s1[k++] = s1[i];
            }
            ++j;
            ++l;
            ++n;
        }else if(s2[l]){
            if(s2[l] != s1[i]){
                s1[k++] = s1[i];
            }
            l++;
        }else if(s3[n]){
            if(s3[n] != s1[i]){
                s1[k++] = s1[i];
            }
            n++;
        }else if(!s2[j] && !s3[n]){
            break;
        }
        ++i;
    }
    if(k != i)
        s1[k] = 0;
}