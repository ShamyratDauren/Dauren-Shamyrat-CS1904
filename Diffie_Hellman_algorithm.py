class Diffie_Hellman():
   def __init__(self, public_key1, public_key2, private_key): # create and initialisation objects 
       self.public_key1 = public_key1
       self.public_key2 = public_key2
       self.private_key = private_key
       self.full_key = None
      
   def generate_partial_key(self):                            # generate partial keys 
       partial_key = self.public_key1 ** self.private_key
       partial_key = partial_key % self.public_key2
       return partial_key
  
   def generate_full_key(self, partial_key_r):                # generate full-keys
       full_key = partial_key_r ** self.private_key
       full_key = full_key % self.public_key2
       self.full_key = full_key
       return full_key
  
   def encrypt_message(self, message):                        # encryption process
       encrypted_message = ""
       key = self.full_key
       for c in message:
           encrypted_message += chr(ord(c) + key)
       return encrypted_message
  
   def decrypt_message(self, encrypted_message):              # decryption process
       decrypted_message = ""
       key = self.full_key
       for c in encrypted_message:
           decrypted_message += chr(ord(c) - key)
       return decrypted_message
   

message = "This is a very secret message!!!"

s_public = 175
s_private = 185
m_public = 123
m_private = 165

Dauren = Diffie_Hellman(s_public, m_public, s_private)      # give two interlocutor for algorithm
Juliya = Diffie_Hellman(s_public, m_public, m_private)


s_partial = Dauren.generate_partial_key()                   # examples
print(s_partial)

m_partial = Juliya.generate_partial_key()
print(m_partial)

s_full= Juliya.generate_full_key(m_partial)
print(s_full)
