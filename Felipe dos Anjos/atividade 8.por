programa {
    funcao inicio() {
        
        real raio, altura, volume
        real pi = 3.14159
        
        escreva("Digite o raio da lata: ")
        leia(raio)
        
        escreva("Digite a altura da lata: ")
        leia(altura)

        volume = pi * (raio * raio) * altura

        escreva("O volume da lata é: ", volume)
    }
}
