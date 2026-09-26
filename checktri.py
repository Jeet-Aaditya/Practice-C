side1 = int(input("Enter the first side of the triangle: "))
side2 = int(input("Enter the second side of the triangle: "))
side3 = int(input("Enter the third side of the triangle: "))
if (side1 + side2 > side3) and (side2 + side3 > side1) and (side1 + side3 > side2):
    
        if (side1 == side2 and side2 == side3):
            print("The triangle is equilateral.")
        elif (side1 == side2 or side2 == side3 or side1 == side3):
            print("The triangle is isosceles.")
        else:
            print("The triangle is scalene.")
    
else:
    print("The given sides do not form a triangle.")