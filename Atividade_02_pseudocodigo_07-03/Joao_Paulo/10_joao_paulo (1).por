programa {
  funcao inicio() {
    real valor_investido
    real juros_simples
    real valor_final

    escreva("Digite o valor que voce deseja investir:\n")
    leia(valor_investido)
    valor_final = valor_investido + (valor_investido * 0.05) * 3
    escreva(valor_final)
    
  }
}
