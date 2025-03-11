programa {
  funcao inicio() {
    real valor_inicial, taxa, valor_final
    inteiro anos

    escreva("Olá Maria! Quantos reais você já investiu?\n")
    leia(valor_inicial)

    anos = 3

    taxa = 0.05

    valor_final = valor_inicial + (valor_inicial * taxa * anos)

    escreva("Maria, daqui a 3 anos com este investimento você terá R$ ", valor_final, ".")
  }
}
