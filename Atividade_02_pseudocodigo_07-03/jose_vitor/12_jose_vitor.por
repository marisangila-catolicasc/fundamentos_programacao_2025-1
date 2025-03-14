programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    real valor_a
    real valor_b
    
    escreva("Digite um valor:\n")
    leia(valor_a)
    escreva("Digite mais um valor:\n")
    leia(valor_b)
    
    escreva("\nA soma desses valores é: ", valor_a + valor_b) 
   
    escreva("\nA subtração desses valores é: ", valor_a - valor_b)

    escreva("\nA multiplicação desses valores é: ", valor_a * valor_b)

    escreva("\nA divisão desses valores é: ", valor_a / valor_b)

    escreva("\nO valor elevado pelo outro é: ", mat.potencia(valor_a, valor_b)) 

    escreva("\nO resto da divisão dos valores é: ", valor_a % valor_b)
  }
}
