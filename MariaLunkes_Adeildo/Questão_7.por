programa {
  funcao inicio() {
    
    real valor_dolar
    real quantidade_dolar
    real valor_reais

    escreva("Qual é o valor do dolar hoje? \n")
    leia(valor_dolar)

    escreva("Quantos dolares voce quer converter para reais? \n")
    leia(quantidade_dolar)

    valor_reais = quantidade_dolar * valor_dolar

    escreva(valor_dolar, " dolares vai ficar ", valor_reais, " reais! \n")

  }
}
