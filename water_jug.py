print("""Intruksi

1. A dikosongkan
2. B dikosongkan
3. A diisi penuh sebanyak 3 liter
4. B diisi penuh sebanyak 5 liter
5. A dipindahkan ke B
6. B dipindahkan ke A 

""")

A = 0
B = 0
jumlah_step = 0

while(B != 4):
	step = int(input(" Step yang dimasukkan? "))
	
	if(step == 1):
		A = 0
		
	elif(step == 2):
		B = 0
		
	elif(step == 3):
		A = 3
		
	elif(step == 4):
		B = 5
		
	elif(step == 5):
		if(A + B >= 5 and A > 0) :
			A = A - (5 - B) 
			B = 5
		elif(A + B <= 5 and A > 0) :
			B = A + B
			A = 0
		else :
			print("error")
			
	elif(step == 6):
		if(A + B >= 3 and B > 0):
			B = B - (3 - A)
			A = 3
		elif(A + B <= 3 and B > 0):
			A = A + B
			B = 0
		else :
			print("error")
						
	else :
		print("error")
		
	print(" A sebanyak " + str(A)+ " liter ")
	print(" B sebanyak " + str(B)+ " liter ")
	jumlah_step = jumlah_step + 1
	

print(" Jumlah step yang diperlukan sebanyak " + str(jumlah_step) + " step ")

