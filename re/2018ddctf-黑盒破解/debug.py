import r2pipe
r = r2pipe.open('./ReverseMe.elf',
                flags=['-r', 'profile.rr2', '-d', '-2'])
r.cmd('db 0x0000000000401B6B')
r.cmd('db 0x0000000000401AA5')
r.cmd('dc')

for i in range(18):
    print(r.cmd('dr rip').strip()+" "+r.cmd('dr rax').strip())
    r.cmd('dc')
