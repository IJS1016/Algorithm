equation = input()
equation = equation.split("-")

result = sum(map(int, equation[0].split("+")))

for sub_eq in equation[1:] :
    result -= sum(map(int, sub_eq.split("+")))

print(result)