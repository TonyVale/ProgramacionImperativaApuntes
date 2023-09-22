#include <stdio.h>
#include <assert.h>
#include "./rgbToGray.h"

static void assertMatrixEquals(const int expected[][M], const int actual[][M], size_t fils, size_t cols);
 
int main(){
    int img[N][M*3] =   {{100,200,100,100,180,100,200,100,120,110,123,122,100,120,122},
                        {101,200,105,99,200,100,201,102,118,110,120,120,100,121,122},
                        {100,200,100,100,210,105,200,100,100,120,120,100,100,122,121}};                                     
    int ret[N][M];

    int expectedGrayscaleMatrix[][M] = {
            {158,146,132,118,114},
            {159,158,133,116,114},
            {158,165,129,117,115}
    };

    rgbToGray(img, ret);

    for(int i = 0 ; i<N ; i++){
        for(int j = 0 ; j<M ; j++)
            printf("%d ", ret[i][j]);
        printf("\n");
    }

    assertMatrixEquals(expectedGrayscaleMatrix, ret, N, M);
    puts("OK!\n");
    return 0;
    
}

static void
assertMatrixEquals(const int expected[][M], const int actual[][M], size_t fils, size_t cols) {
    for (int i = 0; i < fils; i++) {
        for (int j = 0; j < cols; j++) {
            assert(expected[i][j] == actual[i][j]);
        }
    }
}