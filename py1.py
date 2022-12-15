#(string1)@(string2).(2+characters)
#----------------------------------
#^[\+]?[(]?[0-9]{3}[)]?[-\s\.]?[0-9]{3}[-\s\.]?[0-9]{4,6}$
#----------------------------------
#'^(((C|c)h(a|ă|ẵ|ẳ)n)|((L|l)(e|ẻ)))[\s\[]*(\d+\s?-?\s?\d*)[\s\]]*([\w\s]*)$'gm
#----------------------------------
import re

def password():
    print ('Enter a password\n\nThe password must be between 6 and 12 characters.\n')

    while True:
        password = input('Password:')
        if 6 <= len(password) < 12:
            break
        print ('The password must be between 6 and 12 characters.\n')

    password_scores = {1:'Weak', 2:'Medium', 3:'Strong'}
    password_strength = dict.fromkeys(['has_upper', 'has_lower', 'has_num'], False)
    if re.search(r'[A-Z]', password):
        password_strength['has_upper'] = True
    if re.search(r'[a-z]', password):
        password_strength['has_lower'] = True
    if re.search(r'[0-9]', password):
        password_strength['has_num'] = True

    score = len([b for b in password_strength.values() if b])

    print ('Password is %s' % password_scores[score])
password()
