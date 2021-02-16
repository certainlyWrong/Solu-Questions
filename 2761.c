
#include <stdio.h>

int main(void)
{
    int num_i;
    float num_f;
    char chr;
    char string[55];

    scanf("%i %f %c %[^\n]s", &num_i, &num_f, &chr, string);

    printf("%i%f%c%s\n", num_i, num_f, chr, string);
    printf("%i\t%f\t%c\t%s\n", num_i, num_f, chr, string);
    printf("%10i%10.6f%10c%10s\n", num_i, num_f, chr, string);

    return 0;
}