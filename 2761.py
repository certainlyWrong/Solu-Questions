
import struct

line = input().split(maxsplit=3)

varFloat = struct.unpack('f', struct.pack('f', float(line[1])))[0] 

print(f'''{line[0]}{varFloat:.6f}{line[2]}{line[3]}
{line[0]}\t{varFloat:.6f}\t{line[2]}\t{line[3]}
{line[0]:>10s}{varFloat:>10.6f}{line[2]:>10s}{line[3]:>10s}''')
