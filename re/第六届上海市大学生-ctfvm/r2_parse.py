import r2pipe
log = open('./1.log', 'w')
r = r2pipe.open('./main', flags=['-2', '-d'])
r.cmd('db 0x000055555555FED5')
r.cmd('dc')

while True:
    log.write(r.cmd('dr rax').strip()+"  ")
    r.cmd('ds 7')
    log.write(r.cmd('dr rip'))
    r.cmd('dc')
