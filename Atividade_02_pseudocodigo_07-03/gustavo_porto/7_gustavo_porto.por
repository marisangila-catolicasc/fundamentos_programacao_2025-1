programa {
    funcao inicio() {
        real cambio, dolares, reais

        escreva("Digite o valor do câmbio do dólar: ")
        leia(cambio)

        escreva("Digite a quantidade de dólares que vc quer: ")
        leia(dolares)

        reais = dolares * cambio

        escreva("Para comprar ", dolares, " dólares, você precisa de ", reais, " reais.")
    }
}
