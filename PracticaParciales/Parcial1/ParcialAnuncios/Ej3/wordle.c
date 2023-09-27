#include "wordle.h"

static int wordMatrix(const char secretWord[COLS], int retMat[]);
static int letterNumber(char c);

int wordle( const char secretWord[COLS], const char userRes[FILS][COLS], int att, char wordleRes[FILS][COLS] ){
    
    int lettersMatrix[27] = {0};

    wordMatrix(secretWord, lettersMatrix);

    int i = 0, j = 0 , failTry = 1;

    while(i < att){

        if(secretWord[j] == userRes[i][j] || secretWord[j] == userRes[i][j] + 'A'-'a' || secretWord[j] == userRes[i][j]+'a'-'A' ){
            wordleRes[i][j] = 'V';
        }else if(lettersMatrix[letterNumber(userRes[i][j])]){
            failTry = 0;
            wordleRes[i][j] = 'A';
        }else{
            failTry = 0;
            wordleRes[i][j] = 'G';
        }

        if(j == COLS - 1 ){
            if(failTry){
                return ++i;
            }
            failTry = 1;
            j=0;
            ++i;
        }else{
            ++j;
        }
    
    }

    return -1;
}

static int wordMatrix(const char secretWord[COLS], int retMat[]){
    for(int i = 0; i <= COLS ; i++){
        if(secretWord[i] >= 'a' && secretWord[i] <= 'z'){
            retMat[secretWord[i]-'a']++;
        }
        if(secretWord[i] >= 'A' && secretWord[i] <= 'Z'){
            retMat[secretWord[i]-'A']++;
        }
    }

    return 0;
}

static int letterNumber(char c){
        if(c >= 'a' && c <= 'z'){
            return c-'a';
        }
        if(c >= 'A' && c <= 'Z'){
            return c-'A';
        }

        return 0;
}