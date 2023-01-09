import smtplib 
import socket
import os

myUserName = 'mr_llyich@163.com'
myPassword = 'BPDBXGGBPPTPQBTS' 
server = 'smtp.163.com'
port = '25'
recipient = 'zhuyuxiang@tiro.cc'
sub = 'Give you this.'
text = 'How are you?'
filePointer = open("/home/pi/mypython/reg.txt", "r")

os.system("sudo ifconfig > ~/mypython/ip.txt")

ipReader = open("/home/pi/mypython/ip.txt", "r")
ip = ipReader.read()
ipReader.close()

num = filePointer.read()


text = 'This is No.' + num + '.\n ' + text + '\n'
text = text +'here is my ip info:\n' 
text = text + ip + '\n'


filePointer.close()

filePointer = open("/home/pi/mypython/reg.txt", "w")

num = int(num)
num = num + 1
num = str(num)

filePointer.write(num)
filePointer.close()

def send_email(recipient, subject, text):
    smtpserver = smtplib.SMTP(server, port)
    smtpserver.ehlo()
    smtpserver.starttls()
    smtpserver.ehlo()
    smtpserver.login(myUserName, myPassword)
    header = 'To:' + recipient + '\n' 
    header = header + 'From:' + myUserName + '\n' 
    header = header + 'Subject:' + subject  + '\n'

    msg = header + '\n' + text + '\n\n'
    
    smtpserver.sendmail(myUserName, recipient, msg)
    smtpserver.close()
send_email(recipient, sub, text)

hostip = socket.gethostbyname(socket.gethostname())
print(hostip)

