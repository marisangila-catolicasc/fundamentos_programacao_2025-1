programa {
  funcao inicio() {

    real valor_inicial
    real valor_final
    escreva("Informe a quantia de dinheiro que deseja investir: ")
    leia(valor_inicial)

    valor_final = valor_inicial + (valor_inicial * 0.5 * 3)

    escreva("O seu investimento será de: ", valor_final," após 3 anos!")

  }
}
