programa {
  funcao inicio() {
    
    real valor_inicial, valor_final, taxa_de_juros, anos

    taxa_de_juros = 0.5
    anos = 3

    

    escreva("Você quer investir quanto?\n")
    leia(valor_inicial)

    valor_final = valor_inicial + (valor_inicial * taxa_de_juros * anos)

    escreva("O investimento resoultou em R$", valor_final, " ao longo de ", anos," Anos" )

  }
}
