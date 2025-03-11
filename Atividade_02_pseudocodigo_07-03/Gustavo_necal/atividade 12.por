programa {
  funcao inicio() {
    real num1, num2, resto
    
  

  escreva("informe seu primeiro numero \n")
  leia (num1)

  escreva("informe seu segundo numero \n")
  leia (num2)

 

  escreva("o resultado da soma dos numeros é ", num1 + num2, "\n")

  escreva("o resultado da subtração dos numeros é ", num1 - num2, "\n")

  escreva("o resultado da multiplicação dos numeros é ", num1 * num2, "\n")

  resto = num1 / num2
  escreva("o resultado da divizão dos numeros é ", resto, "\n")

  escreva("O resto da divisão do primeiro número pelo segundo é: ", resto % num2 ,"\n")

  escreva("o resultado da elevação do numero 1 pelo numero 2 é ", mat.potencia(num1, num2), "\n") //"^"não esta funcionando,nem potencia() ou pot() e dessa forma so funciona com um biblioteca

  }
}