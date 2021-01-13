def Encrypt(word, key):                #encryption process in OTP give a word and a key
    a_word = []                        #create empty arrays
    a_key = []
    a_ciphertext = []

    for element in word:               #using a loop, we go through each letter in a word
        element = ord(element)         #find its numerical value in ASCII
        a_word.append(element - 65)    #find its ordinal number in the alphabet

    for item in key:                   #using a loop, we go through each letter
        item = ord(item)               #find its numerical value in ASCII
        a_key.append(item - 65)        #find its ordinal number in the alphabet

    sum = [x + y for x, y in zip(a_word, a_key)]

    for i in sum:
        i = i % 26
        i = i + 65
        b = chr(i)
        a_ciphertext.append(b)
    
    ciphertext = "".join(a_ciphertext)
    return "Ciphertext:", ciphertext

def Decrypt(cipher,key):
    a_cipher = []
    a_key1 = []
    a_plaintext = []

    for elements in cipher:
        elements = ord(elements)
        a_cipher.append(elements - 65)

    for item in key:
        item = ord(item)
        a_key1.append(item - 65)

    res = [x - y for x, y in zip(a_cipher, a_key1)]

    for j in res:
        j = j % 26
        j = j + 65
        a = chr(j)
        a_plaintext.append(a)

    plaintext = "".join(a_plaintext)
    return "Plaintext:", plaintext

word = "HELLO"
cipher = "EQNVZ"
key = "XMCKL"

print(Encrypt(word,key))
print(Decrypt(cipher,key))
