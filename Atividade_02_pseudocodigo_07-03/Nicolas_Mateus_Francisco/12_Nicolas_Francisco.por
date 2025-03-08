// Exercício 12

programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro numero1
    inteiro numero2

    escreva("Digite o valor do número 1: \n")
    leia(numero1)
    escreva("Digite o valor do número 1: \n")
    leia(numero2)

    escreva("A soma dos dois numeros é igual a: " + (numero1 + numero2) + "\n")
    escreva("A subtração dos dois numeros é igual a: " + (numero1 - numero2) + "\n")
    escreva("A multiplicação dos dois numeros é igual a: " + (numero1 * numero2) + "\n")
    escreva("A divisão dos dois numeros é igual a: " + (numero1 / numero2) + "\n")
    escreva("A potenciação do primeiro numero pelo segundo é igual a: " + mat.potencia(numero1, numero2) + "\n")
    escreva("O reto da divisão do primeiro numero pelo segundo é igual a: " + (numero1 % numero2) + "\n")
  }
}
