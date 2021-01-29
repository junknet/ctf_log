addres = [0x00400dc1, 0x00400e7a, 0x00400f3a, 0x00401064,
          0x004011c9, 0x0040133d, 0x004012f3, 0x004014b9, 0x00400cf1]
file = open('C:/Users/junknet/Desktop/ctf/functon.c', 'w')
for addr in addres:
    res = idaapi.decompile(addr)
    print(res)
