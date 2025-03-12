programa {
  inclua biblioteca Calendario --> cale
  funcao inicio() {
    cadeia acerto, resposta_2
    inteiro ano, ano_hj, datinha, mes

    ano_hj = cale.ano_atual()
    datinha = cale.dia_mes_atual()
    mes = cale.mes_atual()

    escreva("Um ótimo, ", cale.ano_atual(), " para você! \n")
    escreva("O ano está certo (sim/nao)? ")
    leia(acerto)

    se (acerto == "sim"){
      limpa()
      escreva("Ótimo. Gostaria de saber a data de hoje (sim/nao)? ")
      leia(resposta_2)

      se(resposta_2 == "sim"){
        se(mes < 10){
          escreva(datinha, "/", "0", mes, "/", ano_hj)
        }senao{
          escreva(datinha, "/", mes, "/", ano_hj)
        }
      } senao se (resposta_2 == "nao"){
        limpa()
        escreva("Ok.")
      }senao {
        limpa()
        escreva("Resposta inválida.")
      }
    } senao se (acerto == "nao"){
      limpa()
      escreva("Qual o ano de hoje? ")
      leia(ano)
      limpa()
      se(ano == cale.ano_atual()){
        escreva("Estava certo, sim.")
      } senao se(ano < cale.ano_atual()){
        limpa()
        escreva("Espero que ", ano, " tenha sido um bom ano para você.")
      } senao{
        escreva("Espero que ", ano, " seja um bom ano para você.")
      }
      
    }senao {
      limpa()
      escreva("Resposta inváida.")
    }
  }
}
