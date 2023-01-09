import poplib
import os

useraccount = 'mr_llyich@163.com'
password = 'BPDBXGGBPPTPQBTS'  
pop3_server = 'pop.163.com'


server = poplib.POP3(pop3_server)

server.user(useraccount)
server.pass_(password)
	
email_num, email_size = server.stat()

server.close()

print('Num:' + str(email_num))

with open('/home/pi/coolc/mypython/num_reg.txt', 'r') as nf:
	num_nf = nf.readline()
	print('num_nf:' + num_nf)
	num_nf = int(num_nf)
	nf.close()

if email_num > num_nf:
	print('New message detected.')
	with open('/home/pi/coolc/mypython/num_reg.txt', 'w') as nf:
		num_nf = nf.write(str(email_num))
		nf.close()

	os.system('sudo ps -aux > /home/pi/coolc/mypython/amount_reg.txt')

	with open("/home/pi/coolc/mypython/amount_reg.txt", 'r') as afile:
		content = afile.read();
		if content.find('sudo /home/pi/coolc/hardware/bb') != -1:
			print('Found!')
			afile.seek(0)
			content = afile.readlines();
			for line in content:
				if(line.find('sudo /home/pi/coolc/hardware/bb') != -1):
					print('Found!')
					print(line)
					
					ln = 0;
					for i in line:
						ln = ln + 1
					st = 0
					for i in line:
						if(i != ' '):
							st = st + 1
							continue
						else:
							break
						
					further = line[st : ln]
					
					pid = []
					
					for k in range(st, ln):
						if(further[k] != ' '):
							break;
						else:
							st = st + 1
					for k in range(st, ln):
						if(further[k] != ' '):
							pid.append(further[k])				
						else:
							break


					pid = ''.join(pid)
					print('PID is' + ' ' + pid)

					afile.close();
					os.system('sudo kill' + ' ' + pid)
					print('Killed.')
					os.system('sudo /home/pi/coolc/hardware/stop')
					break;

		else:
			print("BB didn't be found.")
			os.system('pwd')
			os.system('sudo /home/pi/coolc/hardware/bb &')
			print("BB has been started.")

		

else:
	print('Nothing.')
