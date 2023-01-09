import smtplib 
myUserName = 'mr_zhu_yx@163.com'
myPassword = 'VMUVKZBLTZSKKIKW' 
server = 'smtp.163.com'
port = '25'
recipient = 'mr_llyich@163.com'
sub = 'give you this.'
text = 'How are you?'
def send_email(recipient, subject, text):
    smtpserver = smtplib.SMTP(server, port)
    smtpserver.ehlo()
    smtpserver.starttls()
    smtpserver.ehlo()
    smtpserver.login(myUserName, myPassword)
    header = 'To:' + recipient + '\n' + 'From:' + myUserName
    header = header + '\n' + 'Subject:' + subject  + '\n'
    msg = header + '\n' + text + '\n\n'
    smtpserver.sendmail(myUserName, recipient, msg)
    smtpserver.close()
send_email(recipient, sub, text)
print('Sent.')