string = input()

size = len(string)

if size == 1:
    print(0)
    exit()


i, j = 0, 1
resp = ""

while j < size:
    if string[i] == "1" and string[j] == "0":
        resp += "1"
    else:
        resp += "0"

    i+=1
    j+=1

resp += "0"
print(resp)