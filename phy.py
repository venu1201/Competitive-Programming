def main():

    #Prompt the user to enter

    #the input and store the input.

    rods_str = input("Input rods: ")

   

    #Convert the input rods to float.

    rods_float = float(rods_str)

   

    #Display the entered

    #as a floating point.

    print("You input " +\

     str(round(rods_float, 3)) +\

     " rods")

    #Perform the conversions.

    meters = rods_float * 5.0292

    furlongs = rods_float/40

    miles = meters/1609.34

    feet = meters/0.3048

    mins_to_walk = (miles/3.1) * 60

    #Display the conversions.

    print("Conversions")

    print("Meters:", round(meters, 3))

    print("Feet:", round(feet, 3))

    print("Miles:", round(miles, 3))

    print("Furlongs:", round(furlongs, 3))

    print("Minutes to walk " +\

     str(round(rods_float, 3)) +\

      " rods:", round(mins_to_walk, 3))

#Call the

#main() function.

main()