num = 100
valor = 1
sum = 0

for i in range(num):
  valor*=num
  num = num - 1

strNum = str(valor)

for i in range((len(strNum))):
  num = int(strNum[i])
  sum += num
print(sum)