data = open('./1.log').readlines()


for i in range(len(data)):
    if i % 2 == 0:
        print(chr(int(data[i].strip(), 16))+" -> ", end='')
    else:
        print(data[i].strip())
