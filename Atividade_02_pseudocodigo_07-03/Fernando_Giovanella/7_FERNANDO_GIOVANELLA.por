programa {
  funcao inicio() {
    
    real cambio
    real dolar
    real valor_convercao

    escreva("Informe o valor do dolar atual: \n")
    leia(cambio)

    escreva("Informe a quantia que você deseja converter: \n")
    leia(dolar)

  valor_convercao = dolar * cambio
  
  escreva("Serã necessários: R$", valor_convercao,", para você comprar ", "U$", dolar, "!")

  }
}
