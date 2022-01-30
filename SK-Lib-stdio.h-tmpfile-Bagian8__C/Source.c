#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    FILE* stream;
    int  i;

    // Create temporary files.
    for (i = 1; i <= 3; i++) {
        if ((stream = tmpfile()) == NULL) {// C4996
        // Note: tmpfile is deprecated; consider using tmpfile_s instead
            perror("Could not open new temporary file\n");
        } else{
            printf("Temporary file %d was created\n", i);
        }
    }

    // Remove temporary files.
    printf("%d temporary files deleted\n", _rmtmp());

    _getch();
    return 0;
}