programa {
  funcao inicio() {
    inteiro valor_a
		inteiro valor_b

    escreva("Insira o primeiro valor de A: \n")
    leia(valor_a)
    escreva("Insira o segundo valor de B: \n")
    leia(valor_b)

    limpa()

    escreva("Valores antes da troca: \n")
		escreva("O valor de A é igual a ", valor_a , " e o valor de B é igual a ", valor_b ,"\n")

		inteiro auxiliar

		auxiliar = valor_a
		valor_a = valor_b
		valor_b = auxiliar

		escreva("\nValores após a troca:\n")
		escreva("O valor de A é igual a ", valor_a ," e o valor de B é igual a ", valor_b)
 

  }
}
