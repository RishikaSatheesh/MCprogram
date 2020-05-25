#include <stdio.h>
#include <stdlib.h>
#include<errno.h>
void copyfunction()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;

    printf("Filename opened for reading is Word.txt \n");
    fptr1 = fopen("Word.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    printf("Enter the filename to open for writing with extension: \n");
    scanf("%s", filename);

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nContents copied to %s", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
long count_characters(FILE *);

void main()
{
    copyfunction();
    int i;
    long cnt;
    char ch, ch1;
    FILE *fp1, *fp2;

    if (fp1 = fopen("File_1.txt", "r"))
    {
        printf("The FILE has been opened...\n");
        fp2 = fopen("File_2.txt", "w");
        cnt = count_characters(fp1);
        fseek(fp1, -1L, 2);
        printf("Number of characters to be copied %d\n", ftell(fp1));

        while (cnt)
        {
            ch = fgetc(fp1);
            fputc(ch, fp2);
            fseek(fp1, -2L, 1); // shifts the pointer to the previous character
            cnt--;
        }
        printf("\n**File copied successfully in reverse order**\n");
    }
    else
    {
        perror("Error occured\n");
    }
    fclose(fp1);
    fclose(fp2);
}
long count_characters(FILE *f)
{
    fseek(f, -1L, 2);
    long last_pos = ftell(f);
    last_pos++;
    return last_pos;
}
