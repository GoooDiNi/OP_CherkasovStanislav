def correct_input(txt, var_type):
    while True:
        try:
            return var_type(input(txt))
        except ValueError:
            print('Bad value!')
            continue


def print_words_shorter_than_n(sentence, n):
    last_space = -1
    for i in range(len(sentence)):
        if sentence[i] == ' ':
            word_length = i - last_space - 1
            if word_length <= n:
                for j in range(word_length):
                    print(sentence[i - word_length + j], end='')
                print(' ', end='')
            last_space = i


k = correct_input('\nDefine how long a word is allowed to be: ', int)
line = input('Write some words: ') + ' '
print("\nEliminating words that are too long...")
print("Those words have survived: ", end='')
print_words_shorter_than_n(line, k)
print('')
