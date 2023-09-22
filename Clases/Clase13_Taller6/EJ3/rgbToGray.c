#include "rgbToGray.h"

#define RED_TO_GRAY 0.2989
#define GREEN_TO_GRAY 0.5870
#define BLUE_TO_GRAY 0.1140

#define RGB_M (M*3)

void rgbToGray(int img[][RGB_M] , int ret[][M]){
    for(int i= 0 ; i < N ; ++i)
        for(int j = 0 ; j < RGB_M ; j=j+3){
            ret[i][j/3] = img[i][j]*RED_TO_GRAY + img[i][j+1]*GREEN_TO_GRAY + img[i][j+2]*BLUE_TO_GRAY; 
        }
}