#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    printf("welcome to note manager !\n");
    system("clear");
    int noteformat;
    float input;
    float input2;
    float note;
    float result;
    int number = 2;
    strt:
    printf("note format: ");
    scanf("%d", &noteformat);
    printf("\nfirst note: ");
    scanf("%f", &input);
    if(noteformat < input){
        printf("illegal note, the format of the note is %d and the note is %.2f\n", noteformat, input);
        goto strt;
    }
    printf("\nsecond note: ");
    if(noteformat < input){
        printf("illegal note, the format of the note is %d and the note is %.2f\n", noteformat, input);
        goto strt;
    }
    scanf("%f", &input2);
    note = input2 + input;
    result = note / number;
    printf("\nnote: %.2f/%d\n", result, noteformat);
    start:
    printf("note: ");
    scanf("%f", &input);
    if(noteformat < input){
        printf("illegal note, the format of the note is %d and the note is %.2f\n", noteformat, input);
        goto start;
    }
    number = number+1;
    note = note + input;
    result = note / number;
    printf("\nnote: %.2f/%d\n", result, noteformat);
    goto start;
}