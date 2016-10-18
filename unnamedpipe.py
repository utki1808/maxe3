import  os , sys

# file descriptors r, w for reading and writing
r, w = os.pipe() 

pid = os.fork()
if pid:
    # This is the parent process 
    # Closes file descriptor r
    os.close(r)
    w = os.fdopen(w,'w')
    print "Parent Writing"
    a = raw_input("Enter msg")
    str = w.write(a)
    w.close()   
    sys.exit(0)
else:
    # This is the child process
    os.close(w)
    r = os.fdopen(r)
    print "Child reading"
    str = r.read()
    print "Msg received :",str
    print "Child closing"
    sys.exit(0)
