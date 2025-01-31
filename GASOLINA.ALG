Algoritmo "Gasolina"

Var
kmlitro, preco, dist, result: real

Inicio
Escreval ("Digite a distância do percurso em kms: ")
leia (dist)
escreval ("Digite o preço atual da gasolina: ")
leia (preco)
escreval ("Digite quantos kms consome seu veículo por litro: ")
leia (kmlitro)
result <- dist / kmlitro
result <- result * preco
limpatela
escreva ("O valor gasto nesse percurso será de aproximadamente R$", result:1:2, " reais")

Fimalgoritmo