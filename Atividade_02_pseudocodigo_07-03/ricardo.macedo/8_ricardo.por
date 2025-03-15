programa {
    funcao inicio() {
        
        real raio, altura, volume
        real PI = 3.14159

        escreva("digite o raio da lata: ")
        leia(raio)
        escreva("digite a altura da lata: ")
        leia(altura)

        volume = PI * (raio * raio) * altura

        escreva("o volume da lata é: ", volume)
    }
}