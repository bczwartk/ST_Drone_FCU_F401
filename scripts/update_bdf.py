
import sys

if len(sys.argv) <= 1:
    print('Input BDF path not specified!')
    sye.exit(1)

inPath = sys.argv[1]
outPath = inPath + '.updated'

lines = []
with open(inPath) as inFile:
    for line in inFile:
        # print line
        lineNoEOL = line.strip('\r\n')
        if lineNoEOL.endswith('\\'):
            lines.append(lineNoEOL[:-1])
        else:
            lines.append(lineNoEOL)

with open(outPath, 'wt') as outFile:
    for line in lines:
        outFile.write(line)
        outFile.write('\n')
