def funargs(*args,**kwargs):
    for item in args:
        print(item,end=" ")

har = ["harry","Rohan","skillf","hammand","shivam"]

funargs("normal",*har,"world")

