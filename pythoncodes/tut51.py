# def function1():
#     print("hello world")

# fun2=function1()
# fun2()


def funcret(num):
    if num==0:
        return print
    if num==1:
        return sum

a=funcret(1)
print(a)

def executor(func):
    func("this")


executor(print)

def dec1(func1):
    def nowexec():
        print("executing now")
        func1()
        print("Executed")
    return nowexec

def who_is_user():
    print("user is the admin")

who_is_user = dec1(who_is_user)
who_is_user()