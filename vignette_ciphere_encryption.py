def vigenere_enc():
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    input_string = ""
    enc_key = ""
    enc_string = ""

    
    enc_key = input("Please enter encryption key: ")
    enc_key = enc_key.lower()

    
    input_string = input("Please enter a string of text: ")
    input_string = input_string.lower()

   
    string_length = len(input_string)

    
    expanded_key = enc_key
    expanded_key_length = len(expanded_key)

    while expanded_key_length < string_length:
        
        expanded_key = expanded_key + enc_key
        expanded_key_length = len(expanded_key)

    key_position = 0

    for letter in input_string:
        if letter in alphabet:
            
            position = alphabet.find(letter)
            
            key_character = expanded_key[key_position]
            key_character_position = alphabet.find(key_character)
            key_position = key_position + 1
            
            new_position = position + key_character_position
            if new_position > 26:
                new_position = new_position - 26
            new_character = alphabet[new_position]
            enc_string = enc_string + new_character
        else:
            enc_string = enc_string + letter
    return(enc_string)

print(vigenere_enc())
