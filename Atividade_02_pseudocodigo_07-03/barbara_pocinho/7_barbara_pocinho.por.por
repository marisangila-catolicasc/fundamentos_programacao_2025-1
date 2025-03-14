programa {
  funcao inicio() {
    real valor_cambio
    real valor_real
    real quantidade_dolares

    escreva("Qual o valor do cambio atualmente?\n")
    leia(valor_cambio)
    escreva("Quantos dólares deseja converter?\n")
    leia(quantidade_dolares)

    valor_real = quantidade_dolares * valor_cambio

    escreva("Voce tem ",valor_real,".")    
    
  }
}
