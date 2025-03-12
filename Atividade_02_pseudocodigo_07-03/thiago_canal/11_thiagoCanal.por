programa {
  funcao inicio() {
    cadeia tipo

    escreva("Graus celsius ou fahrenheit (c ou f)? ")
    leia(tipo)

    se(tipo == "c") {
      real celsius

      escreva("Quantos graus? ")
      leia(celsius)

      real fahren = ((celsius * 9) / 5) + 32

      escreva("Em graus fahrenheit está ")
      escreva(fahren)
    } senao {
      real f

      escreva("Quantos graus fahrenheit? ")
      leia(f)

      real cels = ((5 * (f - 32))) / 9

      escreva("Em graus celsius está ")
      escreva(cels)
    }
  }
}
