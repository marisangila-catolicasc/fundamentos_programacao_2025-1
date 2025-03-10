programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    
    real valor_investimento
    const real JUROS_SIMPLES = 0.05
    real valor_final
    inteiro anos = 3

    escreva("Digite o valor do investimento:\n")
    leia(valor_investimento)

    valor_final = valor_investimento + (valor_investimento *JUROS_SIMPLES * anos)
    escreva("O retorno de seu investimento será: ", valor_final)
  }
}
