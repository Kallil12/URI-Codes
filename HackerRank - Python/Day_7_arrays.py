num_elementos = int(input())
array_entrada = input()
array_entrada_convertido = array_entrada.split(" ")

indice = num_elementos - 1

while indice >= 0:
  print(array_entrada_convertido[indice], end = " ")
  indice-=1
