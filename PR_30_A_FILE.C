#include<stdio.h>
int main()
{
    FILE *P;
    char word[20];
    int index = 0;
    char ch;

    P = fopen("Demo.txt", "r");
    if (P == NULL)
    {
        printf("Error: Could not open file Demo.txt\n");
        return 1;
    }
    else
    {
        printf("Reversed Notes:\n");
        while ((ch = getc(P)) != EOF)
        {
            if (ch == ' ' || ch == '\n')
            {
                for (int i = index - 1; i >= 0; i--)
                {
                    putc(word[i], stdout);






                }
                putc('\n', stdout);
                index = 0;
            }
            else
            {
                word[index++] = ch;
            }
        }


        if (index > 0)
        {
            for (int i = index - 1; i >= 0; i--)
            {
                putc(word[i], stdout);
            }
            putc('\n', stdout);
        }

        fclose(P);
        return 0;
    }
}
