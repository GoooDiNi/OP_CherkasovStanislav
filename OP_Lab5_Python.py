for a in range(1, 10):
    for b in range(10):
        if a != b:
            for c in range(10):
                if a != c and b != c:
                    for d in range(10):
                        if a != d and b != d and c != d:
                            print(a, b, c, d, sep='')
