void imprimirDigitos(int n) {
    if (n > 9) {
        imprimirDigitos(n / 10); // chamada recursiva
    }
    printf("%d", n % 10); // imprime o dígito atual
}
