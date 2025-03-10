programa {
/*
Desenvolva um pseudoc´odigo que receba dois n´umeros inteiros e mostre o resultado
das seguintes opera¸c˜oes:
• Soma dos dois n´umeros
• Subtra¸c˜ao do primeiro pelo segundo
• Multiplica¸c˜ao dos dois n´umeros
• Divis˜ao do primeiro pelo segundo
• O primeiro n´umero elevado ao segundo n´umero
• O resto da divis˜ao do primeiro n´umero pelo segundo
*/

  inclua biblioteca Matematica --> mat
  funcao inicio() {
    inteiro num1, num2, sub, sum, mult, poten
    real div = 0, resto = 0

    escreva("Digite o número 1: ")
    leia(num1)
    escreva("Digite o número 2: ")
    leia(num2)

    sum = num1 + num2
    sub = num1 - num2
    mult = num1 * num2
    poten = mat.potencia(num1, num2)
    se(num1 != 0 e num2 != 0){ // validação caso seja 0 e 0
      div = mat.arredondar(num1 / num2, 3) // arredonda para 3 casas
      resto = num1 % num2
    }

    limpa()
    escreva("Soma: ", num1, "+", num2, " = ", sum)
    escreva("\nSubtração: ", num1, "-", num2, " = ", sub)
    escreva("\nMultiplicação: ", num1, "*", num2, " = ", mult)
    escreva("\nDivisão: ", num1, "/", num2, " = ", div)
    escreva("\nPrimeiro elevado ao segundo: ", num1, "^", num2, " = ", poten)
    escreva("\nResto da divisão: ", num1, "%", num2, " = ", resto)
  }
}
