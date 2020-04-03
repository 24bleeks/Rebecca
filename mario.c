#include <cs50.h>
#include <stdio.h>

void print_spaces (int n);
void print_hashes (int n);

int main(void)
{
    int height;


    do
    {
        height= get_int("Height:");
    }
    while ( 1> height || 8< height);

    for (int i=1; i< height+1; i++)
    {
        print_spaces(height- i);
        print_hashes(i);
        printf("\n");
    }

}

void print_hashes(int n)
{
    for (int i=0 ; i<n ; i++)
    {
    printf("#");
    }
}
void print_spaces(int n)
{
    for (int i=0; i<n; i++)
    {
    printf(" ");
    }
}
