programa {
  funcao inicio() {
    real dolar
    real quantidade_de_dolares
    real reais
    inteiro resultado 
    escreva("Qual a cotação do dolár hoje?: ")
    leia(dolar)
    escreva("Qual o valor em reais que você deseja converter para dolár: ")
    leia(reais)
    resultado = reais / dolar
    escreva("O valor em doláres que você terá, é: $", resultado,"\n")
    escreva("Quantos doláres você deseja comprar?: ")
    leia(quantidade_de_dolares)
    reais = quantidade_de_dolares * dolar
    escreva("A quantidade que você precisa pra comprar ", quantidade_de_dolares, " Doláres é R$", reais)
  }
}
