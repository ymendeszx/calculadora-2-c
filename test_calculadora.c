#include <assert.h>
#include <stdio.h>
#include "function_dividir.c"

int main()
{
    assert(dividir(14,2) == 7);
    assert(dividir(99,3) == 33);
    assert(dividir(144,12) == 12);
    printf("Teste executado com sucesso");

    return 0;
}
