#include <stdio.h>
#include <stdlib.h>

void fileopen(int num)
{
    FILE * fileToOpen = NULL;
    if(num == 1){
        fileToOpen = fopen("movie-100k_1.txt", "r");
        fopen_s(&fileToOpen, "movie-100k_1.txt", "r");
    }
    else if(num == 2){
        fileToOpen = fopen("movie-100k_2.txt", "r");
        fopen_s(&fileToOpen, "movie-100k_2.txt", "r");
    }

    
    
    float userNum = 0, movieNum = 0;
    float rate = 0, timestamp = 0;
    int m=0,n=0;
    
    while (fscanf(fileToOpen, "%f %f %f %f", &userNum, &movieNum, &rate, &timestamp) != EOF)
    {
        n++;
        m+=rate;
    }
    float d=m/n;
    printf ("%.2f \n",d);
}
int main(void)
{
    FILE * fileToOpen = NULL;

    fileopen(1);
    fileopen(2);