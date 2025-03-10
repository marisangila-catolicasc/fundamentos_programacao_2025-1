programa {
/*
(De Oliveira; Manzano, 2004) Desenvolva um pseudoc´odigo que leia dois valores
para as vari´aveis A e B e efetue a troca dos valores. A vari´avel A deve receber o
valor de B, e a vari´avel B deve receber o valor de A. Apresente os valores trocados.
*/
  funcao inicio() {
  
    /* 
      Eu poderia criar duas variaveis temporarias caso fosse necessário ter o valor antigo de A ou B, porém, creio que sejá somente para troca-los sem precisar acessar os valores antigos de pois,
      por isso, vou criar uma variavel TEMP, para realizar os valores atuais, e depois de inverter, mostrar o valor invertido  
    */

    real a, b, temp

    escreva("Insira o valor de A: ")
    leia(a)
    escreva("Insira o valor de B: ")
    leia(b)

    limpa()
    escreva("Os valores são, A = ", a, " B = ", b)
    // inversão...
    temp = a
    a = b
    b = temp
    escreva("\nOs valores inversos são, A = ", a, " B = ", b)
  }
}
