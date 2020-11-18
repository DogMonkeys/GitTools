import os
import re

for k in os.listdir('.'):
	#print(k)
	if re.match(r'.{2}\.cpp', k):
		print(k)
		os.system('g++ -s %s -o %s.exe' % (k, k[0:2]))
		os.system('upx -9 %s' % k[0:2] + '.exe')