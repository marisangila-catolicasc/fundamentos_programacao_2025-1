programa {
  funcao inicio() {
    inteiro temp_f
    inteiro temp_c

    escreva("Quantos Fahrenheit está fazendo agora? \n")
    leia(temp_f)

    temp_c = 5 * (temp_f - 32) / 9

    escreva("Está fazendo ", temp_c, " graus Celcius!")
  }
}
