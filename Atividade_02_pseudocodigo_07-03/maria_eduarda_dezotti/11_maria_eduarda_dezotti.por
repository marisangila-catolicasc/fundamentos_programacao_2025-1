programa {
  funcao inicio() {
    real temp_f, temp_c

    escreva("Insira a temperatura em °F que deseja converter: \n")
    leia(temp_f)

    temp_c = (5 * (temp_f - 32) / 9)

    escreva(temp_f, "°F equivalem a ", temp_c, "°C!")
  }
}