Cálculo do volume de uma lata
algoritmo "Lata"
var
    raio, altura, volume: real
inicio
    escreva("Digite o raio da lata: ")
    leia(raio)
    escreva("Digite a altura da lata: ")
    leia(altura)
    volume <- 3.14159 * (raio * raio) * altura
    escreva("O volume da lata é: ", volume)
fimalgoritmo