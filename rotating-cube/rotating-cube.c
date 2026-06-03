#include <stdio.h>
#include <stdlib.h>

// varibles
const int NB_ROWS = 50;
const int NB_COLS = 171;

char screen[NB_ROWS][NB_COLS] = {' '};

int CNT_ROWS;
int CNT_COLS;

int main() {

    //initialize screen
    for(CNT_ROWS=0; CNT_ROWS<NB_ROWS; CNT_ROWS=CNT_ROWS+1) {
        for(CNT_COLS=0; CNT_COLS<NB_COLS; CNT_COLS=CNT_COLS+1) {
            screen[CNT_ROWS][CNT_COLS] = ' ';
        };
    };

    printf("\x1B[2J\x1B[?25l"); 
    //clear screen
    while(1){
        printf("\x1B[Hhello");
    };

}
