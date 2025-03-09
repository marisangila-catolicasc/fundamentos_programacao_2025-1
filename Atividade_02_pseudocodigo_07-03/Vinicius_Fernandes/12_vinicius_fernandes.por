programa {
  inclua biblioteca Matematica-->mat
  funcao inicio() {
    real numero1
    real numero2

    escreva("Digite o primeiro número:\n")
    leia(numero1)
    
    escreva("Digite o segundo número:\n")
    leia(numero2)

    escreva ("Soma:", numero1+ numero2, "\n")
    escreva ("Subtração:", numero1 - numero2, "\n")
    escreva ("Multiplicação:", numero1 * numero2, "\n")
    escreva ("Divisão:", numero1 / numero2, "\n")
    escreva ("Potenciação:", mat.potencia(numero1, numero2), "\n")
    escreva ("Resto da divisão:", numero1 % numero2, "\n")
}
}