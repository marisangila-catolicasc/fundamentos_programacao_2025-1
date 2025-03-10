programa {
  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro num1, num2, soma, sub, mult, div, pot, resto

    escreva("Insira o primeiro número inteiro: ")
    leia(num1)
    escreva("Insira o segundo número inteiro: " )
    leia(num2)

    soma = num1 + num2
    sub = num1 - num2
    mult = num1 * num2
    div = num1 / num2
    pot = mat.potencia(num1, num2)
    resto = num1 % num2

    escreva("\n A soma dos números é: ", soma, 
    "\n A subtração dos números é: ", sub, 
    "\n A multiplicação dos números é: ", mult, 
    "\n A divisão dos números é: ", div, 
    "\n O primeiro número elevado ao segundo número é: ", pot, 
    "\n O resto do primeiro número dividido pelo segundo é: ", resto)
    
  }
}
