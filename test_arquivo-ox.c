#include <assert.h>

int validar_caractere(char c);

int main() {

    assert(validar_caractere('X') == 1);
    assert(validar_caractere('O') == 1);

    assert(validar_caractere('A') == 0);
    assert(validar_caractere('1') == 0);
    assert(validar_caractere('x') == 0);

    return 0;
}
