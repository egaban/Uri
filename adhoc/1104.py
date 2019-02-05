while True:
    quantidade_a, quantidade_b = map(int, input().split())
    if (quantidade_a == quantidade_b == 0):
        break
    cartas_a = set(list(map(int, input().split())))
    cartas_b = set(list(map(int, input().split())))
    exclusivos_a = cartas_a - cartas_b
    exclusivos_b = cartas_b - cartas_a
    print(min(len(exclusivos_a), len(exclusivos_b)))
