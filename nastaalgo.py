n = int(input("Row number daalo: "))
length = int(input("Length daalo: "))

seq = ""

while len(seq) < length:
    if n % 2 == 0:
        seq = seq + "1"
        n = n // 2
    else:
        seq = seq + "0"
        n = (n + 1) // 2

print("Answer sequence:", seq)