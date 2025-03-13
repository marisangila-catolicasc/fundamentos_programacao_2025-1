programa {
  funcao inicio() {
    real a, b, resto
    
  

  escreva("informe seu primeiro numero \n")
  leia (a)

  escreva("informe seu segundo numero \n")
  leia (b)

 

  escreva("o resultado da soma dos numeros é ", a + b, "\n")

  escreva("o resultado da subtração dos numeros é ", a - b, "\n")

  escreva("o resultado da multiplicação dos numeros é ", a * b, "\n")

  resto = a / b
  escreva("o resultado da divizão dos numeros é ", resto, "\n")

  escreva("O resto da divisão do primeiro número pelo segundo é: ", resto % b ,"\n")

  escreva("o resultado da elevação do numero 1 pelo numero 2 é ", mat.potencia(a, b), "\n") 
  //"^"não funciona, potencia ou pot, e desta forma so funciona com um plugin
  }
}