lines = []
while True:
    try:
        line = input()
        if line:
            lines.append(line)
        else:
            break
    except EOFError:
        break

vars_line = lines[-2]
vals_line = lines[-1]

vars = vars_line.split()
vals = [int(x) for x in vals_line.split()]

var_dict = dict(zip(vars, vals))

for line in lines[:-2]:
    if line.startswith('A**'):
        a, op, b = line.split()
        if var_dict[a] > var_dict[b]:
            print(var_dict[a])
        else:
            print(var_dict[b])
    elif line.startswith('Yes'):
        print_var = line.split()[-1]
        print(var_dict[print_var])
    elif line.startswith('No'):
        print_var = line.split()[-1]
        print(var_dict[print_var])