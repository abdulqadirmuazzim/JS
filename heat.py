# A program to calculate heat measurment physics

Definition = "Heat is the total internal energy of a body"

law = "Quantity of heat Q, absorbed is proportional to the mass of the body and temperature"

heat_cap = "The quantity of heat required to raise the temperature of the whole body by one degree"

sp_heat_cap = "The quantity of heat required to raise the temperature of one unit mass of body by one degree"

g_formula = "Q = cmt"

m = float(input("the mass of the body: "))

c = float(input("the specific heat capacity: "))

t = float(input("the temperature: "))

if c == '':
    C = float(input("Heat capacity: "))
    Q = C*t
else:
    Q = m*c*t
    print(f'The quantity of heat is: {Q}C')

if m == '':
    m = Q/c*t
    print("temperature is: ", m)
