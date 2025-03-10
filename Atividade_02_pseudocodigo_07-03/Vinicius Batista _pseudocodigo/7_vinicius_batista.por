programa {
  funcao inicio() {
    real dolar
    real cambio
    inteiro dinheiro_br
    
    escreva("Digite o valor atual do dólar:\n")
    leia(cambio)
    escreva("Digite o valor em dólares que deseja converter para o real:\n")
    leia(dolar)
    dinheiro_br = dolar * cambio
    escreva(dolar, " dolares são " + dinheiro_br, " reais na conversão atual!")
  }
}
