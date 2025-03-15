programa {
    const inteiro TEMPO_INVESTIMENTO = 3
    const real TAXA_JUROS = 0.05 
  funcao inicio() {
    real valor_investido
    real valor_final
    escreva("Digite qual foi o valor do seu investimento: ")
    leia(valor_investido)
    valor_final = valor_investido + (valor_investido * TAXA_JUROS * TEMPO_INVESTIMENTO)
    escreva("Após 3 anos de investimento, você terá um valor de: ",valor_final)
  }
}
