import time

initial = time.time()
k=0
while(k<45):
    print("test")
    k+=1
final = time.time()-initial 
print(final)
initial = time.time()
for i in range(45):
    print("test")
final = time.time()-initial 
print(final)

print(time.asctime())

