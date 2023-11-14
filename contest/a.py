def make_ABC(V):
    if V == "abc":
        return print("YES")
    if (V[0] == "a" and V[2] == "b") or (V[0] == "b" and V[2] == "a") or (V[1] == "a" and V[2] == "b") or (V[1] == "b" and V[2] == "a"):
        return print("YES")

    return print("NO")

N = int(input())

for i in range(0, N):
    print("entrou")
    seq = input()
    make_ABC(seq)