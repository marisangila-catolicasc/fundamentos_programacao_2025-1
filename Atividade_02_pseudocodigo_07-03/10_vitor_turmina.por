programa {
  funcao inicio() {

    real valor_investido, valor_final

    escreva("Informe o valor a ser investido:\n")
    leia(valor_investido)

    valor_final = valor_investido + (valor_investido * 0.05 * 3)

    escreva("O valor após o investimento é de: R$", valor_final)



  }
}
