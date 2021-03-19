#include <stdio.h>

int main(void)
{
    /*
     *  This will be different at every compilation, therefore different signatures.
     */
    printf("%s %s\n", __DATE__, __TIME__);

    return 0;
}
