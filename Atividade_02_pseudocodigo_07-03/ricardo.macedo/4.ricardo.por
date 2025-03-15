programa {
    funcao inicio() {
        inteiro idade
        real peso
        cadeia tipo_pet

        escreva("Qual idade do seu pet? \n")
        leia(idade)

        escreva("Qual peso do seu pet? \n")
        leia(peso)

        escreva("Qual é o tipo do seu pet? Se for cachorro digite c, se for gato, digite g. \n")
        leia(tipo_pet)

        escreva("Seu pet tem ", idade, " anos, pesa ", peso, " kilos e é um ", tipo_pet)
    }
}