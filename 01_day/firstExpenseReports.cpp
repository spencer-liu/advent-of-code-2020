/**
 * Author: spencer-liu
 * Date: 1 December, 2020
 * Sources: N/A
 */
#include <stdio.h>
#include <stdlib.h>

const int ARR_SIZE = 2020;
const int FILE_COUNT = 200;
int main(int argc, char *argv[])
{
    bool bitArr[ARR_SIZE] = {0};
    bool checker = false;
    int valArr[FILE_COUNT];
    FILE * fp = fopen("input.txt", "r");
    int num;
    int index = 0;
    while(fscanf(fp, "%d\n", &num) != EOF)
    {
        bitArr[num] = true;
        valArr[index++] = num;
    }
    for(int i = 0; i < FILE_COUNT; i++)
    {
        int temp = 2020-valArr[i];
        if(bitArr[temp])
        {
            printf("%d\n", valArr[i] * temp);
            checker = true;
            break;
        }
    }
    fclose(fp);
    return 0; 
}
